// Sketch for ESP32 to fetch the Weather Forecast from OpenWeather
// an example from the library here:
// https://github.com/Bodmer/OpenWeather

// Sign up for a key and read API configuration info here:
// https://openweathermap.org/

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
#endif

// Just using this library for unix time conversion
#include "settings.h"
#include "printCurrentWx.h"



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
}

void loop() {

  printCurrentWeather();

  // We can make 1000 requests a day
  delay(5 * 60 * 1000); // Every 5 minutes = 288 requests per day
}
