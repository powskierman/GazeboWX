#include <Arduino.h>

#ifndef PRINTCURRENTWX_H
    #define PRINTCURRENTWX_H

    #include <JSON_Decoder.h>
    #include <OpenWeather.h>
    #include "settings.h"
    #include "myTime.h"

    void printCurrentWeather();
    void stringParser(String _hourlyTime);
    int whichIcon(int ID);
    int whichBigIcon(int _ID);
    void sendNextion(String _field, String _type, int _num);
    void endNextionCommand();
 //   void sendWxIcon(String _field, int _num);
 //   void sendHum(int hum);
#endif