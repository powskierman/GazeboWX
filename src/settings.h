#include <Arduino.h>
#ifndef SETTINGS_H
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

 
    // =========  User configured stuff ends here  =========
    // =====================================================
#endif