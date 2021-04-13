#include <Arduino.h>

#ifndef PRINTCURRENTWX_H
    #define PRINTCURRENTWX_H

    #include <JSON_Decoder.h>
    #include <OpenWeather.h>
    #include "settings.h"
    #include "myTime.h"

    void printCurrentWeather();
    void sendNextion(String field, int num);
    void sendHum(int hum);
#endif