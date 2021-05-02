#include "timers.h"

// Timer for temperature updates


int TempOLED;

extern Timer<6, millis, const char *> timer;

void CallTimer(){
 // timer.run();
}

void intervals(){
timer.every(UpdateFrequency, TempUpdate); // Update temp reading and relay state
timer.every(30000L, OtherUpdates);        // Refreshes non-urgent dashboard info
MenuTimer = timer.every(15000L, MenuReset);// 15 second inactivity timeout on Settings menu
TempOLED = timer.every(5000L, ShowTemp);// 5 second delay between temp and humidity display on OLED
timer.every(10000L, digitalClockDisplay);// Display digital clock every 10 seconds
timer.every(5000L, TimerStatus);//Check timer status to determine if we are within active period
}
