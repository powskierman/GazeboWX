#ifndef THERMOSTAT_H
#define THERMOSTAT_H
    #include "settings.h"
    #include "printCurrentWx.h"

    
    void TempUpdate();
    void Fan(boolean RunFan);
    void KillManual();
    void TimerStatus();
    void ActualTemp();
#endif