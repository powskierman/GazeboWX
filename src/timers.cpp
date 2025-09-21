#include "timers.h"
#include "printCurrentWx.h"

// Timer for temperature updates


int TempOLED;

extern BlynkTimer timer;

void CallTimer(){
  timer.run();
}

void intervals(){
timer.setInterval(UpdateFrequency, TempUpdate); // Update temp reading and relay state
timer.setInterval(30000L, OtherUpdates);        // Refreshes non-urgent dashboard info
MenuTimer = timer.setInterval(15000L, MenuReset);// 15 second inactivity timeout on Settings menu
//TempOLED = timer.setInterval(5000L, ShowTemp);// 5 second delay between temp and humidity display on OLED
timer.setInterval(10000L, digitalClockDisplay);// Display digital clock every 10 seconds
timer.setInterval(5000L, TimerStatus);//Check timer status to determine if we are within active period
//timer.setInterval(87000L,printCurrentWeather);  //Send weather info to serial ports
timer.setInterval(5000L, ActualTemp); //Report the corrected temp
timer.setInterval(30000L, checkWifi);  
}
