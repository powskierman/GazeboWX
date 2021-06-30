#ifndef blynkModule_H
#define blynkModule_H
    #include "settings.h"
    #include "thermostat.h"

        //Blynk dashboard colors
    const String BLYNK_BLUE =    "#04C0F8";
    const String BLYNK_RED   =   "#D3435C";
    const String BLYNK_WHITE  =  "#FFFFFF";
    const String BLYNK_BLACK =   "#000000";
    const String BLYNK_GREEN  =  "#23C48E";
    const String BLYNK_YELLOW =  "#ED9D00";
    const String BLYNK_DARK_BLUE = "#5F7CD8";

    extern String NormalWidgetColor;
    extern String PreviousWidgetColor;

    

    void BlynkInit();
    void MenuReset();
    void SetNewWidgetColor();
    void OtherUpdates();
    void LongHoldDetect();
    void NextMenuItem();
    void Fan(boolean RunFan);
    void DashColor(int DashboardColor);
    void PerceivedTemp(bool UsePerceivedTemp);
    void intervals();
    void digitalClockDisplay();
    void printDigits(int digits);

    
#endif
