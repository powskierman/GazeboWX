#include <Arduino.h>
#ifndef SETTINGS_H
    #include <WiFi.h>  //https://github.com/esp8266/Arduino
    #include <DNSServer.h>
    #include <WiFiManager.h>  //https://github.com/tzapu/WiFiManager
    #include <EEPROM.h>
    #include <../include/time.h>
    #include <Time.h>
    #include <arduino-timer.h>


    #include "SPI.h"
    #include "DHT.h"
    #include "dhtModule.h"
    #include "ap.h"
    #include "ntpServer.h"
 

    #define SETTINGS_H
     // ========= User configured stuff starts here =========
    // Further configuration settings can be found in the
    // OpenWeather library "User_Setup.h" file

    #define RXD2 16
    #define TXD2 17

    #define TIME_OFFSET 1UL * (-4*3600UL) // UTC + 0 hour

    // Change to suit your WiFi router
    #define WIFI_SSID     "3Sisters"
    #define WIFI_PASSWORD "seawolfpilot01"

    #define UpdateFrequency 10000 //How often a new temperature will be read
    #define MenuTimeOut 7000 //Menu timeout from inactivity
    #define LongPress 650 //How long SETTINGS button needs to be pressed to enter menu
    #define RelayPin 12

 

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

 


 
    // =========  User configured stuff ends here  =========
    // =====================================================
#endif