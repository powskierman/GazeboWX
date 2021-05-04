#ifndef SETTINGS_H
#define SETTINGS_H

    #include <Arduino.h>

    #include <ESP8266WiFi.h>  //https://github.com/esp8266/Arduino
    #include <BlynkSimpleEsp8266.h>
    #include <ESP8266WebServer.h>
    #include <DNSServer.h>
    #include <WiFiManager.h>  //https://github.com/tzapu/WiFiManager
    #include "DHT.h"
    #include <EEPROM.h>
    #include <Adafruit_GFX.h>
    #include <Adafruit_SSD1306.h>
    #include "Wire.h"
    #include <TimeLib.h>
    #include <ESP8266WiFi.h>
    #include <WiFiUdp.h>

    #include "blynkModule.h"

    #define UpdateFrequency 10000 //How often a new temperature will be read
    #define MenuTimeOut 7000 //Menu timeout from inactivity
    #define LongPress 650 //How long SETTINGS button needs to be pressed to enter menu
    #define RelayPin 12

    // NTP Servers and time zone:
    static const char ntpServerName[] = "us.pool.ntp.org";
    const int timeZone = -4;  // Eastern Daylight Time (USA)
    extern long currentTime;

         //Thermostat variables
    extern int TempDes;             //Desired temperature setting
    extern int PreviousTempDes;
    extern int TempAct;             //Actual temperature, as measured by the DHT11 sensor
    extern int BadRead;              //Counts consecutive failed readings of the DHT11 sensor
    extern float LastRead;          // Previous temperature reading
    extern int Humidity;
    extern long BeginTimer;          //Timer variables
    extern long EndTimer;
    extern long PreviousBeginTimer; 
    extern long PreviousEndTimer;
    extern bool TimerOn; 

    // Preference variables
    extern int Hysteresis_W;         //Summer and Winter hysteresis levels
    extern int Hysteresis_S;
    extern int TempCorrection;       //Used to adjust readings, if the sensor needs calibration
    extern boolean UsePerceivedTemp; // Use humidity-adjusted perceived temperature, instead of actual temperature

        // Current condition variables
    extern boolean Winter; 
    extern boolean Home;
    extern boolean ManualRun;    // used to run fan, overriding thermostat algorithm
    extern boolean ManualStop;   // used to stop fan, overriding thermostat algorithm
    extern int MenuItem;             // Settings menu selection variable
    extern boolean ButtonPressed;// Settings button state
    extern boolean LongHold;     // Flag showoing a long hold detected on the SETTINGS button
    extern int ButtonTimer;              // Timer for detecting long press of Settings button
    extern String Response;         // Text output to SETTINGS value widget
    extern boolean FanState;         // Is the fan on or off?

    extern int MenuTimer;
    extern int TempOLED;
    extern int HumOLED;

    extern DHT dht;
#endif