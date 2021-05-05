/**************************************************************************** 
 *  Controls fireplace in Gazebo. and fetch the Weather Forecast
 *  from OpenWeather. A fork from the library here:
 *  https://github.com/Bodmer/OpenWeather 
 *  Sign up for a key and read API configuration info here:
 *  https://openweathermap.org/
 * 
 *  ThermoX v0.18.0 Thermostatic HVAC control
 *  
 *  Compares readings from a DHT22 temperature sensor with desired temperature
 *  from the Blynk application, and runs the propane stove as necessary to heat the 
 *  gazebo.  Hysteresis levels for both Summer and Winter are independently 
 *  adjustable from 2 to 6 degrees. The temperature sensor readings can be 
 *  offset up or down. All settings are saved to EEPROM, and 
 *  automatically reloaded on startup.
 *  
 *  "Home" setting is triggered by IFTTT iOS location channel, and results in an
 *  action on the Maker channel. The Maker channel parameters are as follows:
 *       URL: http://blynk-cloud.com:8080/YOUR_TOKEN/pin/V31
 *       Method: PUT
 *       Content Type: application/json
 *       Body: ["1"]    
 *  "Away" mode requires an identical IFTTT recipe, but with
 *       Body: ["0"]
 *  
 *  Added color coding (red/blue) for heating and cooling modes to dashboard widgets.
 *  Added a setting for widget color change. The red / blue "on" states will still be used
 *  heating or cooling.
 *  
 *  Added humidity sensing and a "perceived temperature" setting that takes into account the 
 *  different way people perceive temperature when humidity is high. It's only for Summer mode, 
 *  and only when the temperature is above 20 degrees C. 
 *  
 *  Changed Simple Timer calls to Blynk Timer. Settings buttons and menu timers are all 
 *  monitored by it now.
 *  
 *  Changed Manual mode to a 15 minute pulse mode.
 *  
 *  Added IFTTT / Amazon Echo integration for operating with voice commands. Uses 
 *  the IFTTT Maker Channel in the same way as above, but with an Amazon Alexa voice 
 *  trigger. To manually run the fan, use the following Maker Channel parameters: 
 *       URL: http://blynk-cloud.com:8080/YOUR_TOKEN/pin/V6
 *       Method: PUT
 *       Content Type: application/json
 *       Body: ["1"]    
 *  Make identical recipes (now called applets) for Temperature Up and Temperature 
 *  Down, substituting Body values of ["2"] and ["3"], repsectively.  
 *  
 *  Added a press-and-hold requirement to enter the settings menu, as well as
 *  a Menu timeout and reset after a period of inactivity. 
 *  Added manual overrides to force system run or halt, independent of other factors.
 *  
 *  WiFi connection is now simplified with Tapzu's WiFiManager. Wifi automatically
 *  reconnects to last working credentials. If the last SSID is unavailable, it
 *  creates an access point ("BlynkAutoConnect"). Connect any wifi device to the
 *  access point, and a captive portal pop up to receive new wifi credentials.
 *  
 *  The hardware is minimal: an ESP-01, a single relay on GPIO 0, and a DHT11
 *  temperature sensor on GPIO 2.
 *  
*****************************************************************************
*/
#include <BlynkSimpleEsp32.h>
BlynkWifi Blynk(_blynkTransport);

#include "settings.h"
#include "eepromPresets.h"
#include "thermostat.h"
#include "blynkModule.h"
#include "dhtModule.h"
#include "timers.h"
#include "ap.h"
#include "ntpServer.h"

void TempUpdate();
void TimerStatus();
void Fan(boolean RunFan);
void KillManual();
void intervals();
void ntpService();

// You can change the number of hours and days for the forecast in the
// "User_Setup.h" file inside the OpenWeather library folder.
// By default this is 6 hours (can be up to 48) and 5 days
// (can be up to 8 days = today plus 7 days)

// Choose library to load
#ifdef ESP8266
  #include <ESP8266WiFi.h>
  #include <WiFiClientSecure.h>
#else // ESP32
  #include <WiFi.h>
  #include "settings.h"
  #include "timers.h"
#endif

// Just using this library for unix time conversion
#include "settings.h"
#include "printCurrentWx.h"

SimpleTimer timer;


void setup() {
  Serial.begin(250000); // Fast to stop it holding up the stream
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);

  Serial.printf("\n\nConnecting to %s\n", WIFI_SSID);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
  }
  
  Serial.println();
  Serial.print("Connected\n");

  BlynkInit();
  SetDisplay();
  intervals();
  apInit();
  startDht();
 
  //Initialize the fan relay. Mine is "off" when the relay is set HIGH.
  pinMode(RelayPin,OUTPUT); 
  digitalWrite(RelayPin,HIGH);
 
  Serial.begin(115200);
  delay(10);
  
  //Load any saved settings from the EEPROM
  EEPROM.begin(20);  
  Serial.println(F("STARTUP : LOADING SETTINGS FROM MEMORY"));
  Serial.println(F(""));
  GetPresets();

  PreviousTempDes = TempDes; 
  
  MenuReset();
 }

time_t prevDisplay = 0; // when the digital clock was displayed
  
// Main loop
void loop() {
  Blynk.run();
  timer.run();
  printCurrentWeather();

  // We can make 1000 requests a day
  delay(5 * 60 * 1000); // Every 5 minutes = 288 requests per day
}