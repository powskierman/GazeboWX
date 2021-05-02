#include <Arduino.h>
#ifndef SETTINGS_H
    #include <WiFi.h>  //https://github.com/esp8266/Arduino
    #include <WiFiManager.h>  //https://github.com/tzapu/WiFiManager
    #include <Time.h>
    #include "SPI.h"
    #include "DHT.h"
    #include "dhtModule.h"
    //#include "ap.h"
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

 


 
    // =========  User configured stuff ends here  =========
    // =====================================================
#endif