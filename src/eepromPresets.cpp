//Retrieves saved values from EEPROM

#include "eepromPresets.h"

        //Thermostat variables
    int TempDes = 20;             //Desired temperature setting
    int PreviousTempDes;
    int TempAct = 20;             //Actual temperature, as measured by the DHT11 sensor
    int BadRead = 0;              //Counts consecutive failed readings of the DHT11 sensor
    float LastRead = 20;          // Previous temperature reading
    int Humidity = 50;
    long BeginTimer = 1;          //Timer variables
    long EndTimer = 1;
    long PreviousBeginTimer = 1; 
    long PreviousEndTimer = 1;
    bool TimerOn = false; 

    // Preference variables
    int Hysteresis_W = 2;         //Summer and Winter hysteresis levels
    int Hysteresis_S = 2;
    int TempCorrection = 0;       //Used to adjust readings, if the sensor needs calibration
    boolean UsePerceivedTemp = false; // Use humidity-adjusted perceived temperature, instead of actual temperature

        // Current condition variables
    boolean Winter = true; 
    boolean Home = true;
    boolean ManualRun = false;    // used to run fan, overriding thermostat algorithm
    boolean ManualStop = false;   // used to stop fan, overriding thermostat algorithm
    int MenuItem = 0;             // Settings menu selection variable
    boolean ButtonPressed = false;// Settings button state
    boolean LongHold = false;     // Flag showoing a long hold detected on the SETTINGS button
    int ButtonTimer;              // Timer for detecting long press of Settings button
    String Response = "";         // Text output to SETTINGS value widget
    boolean FanState = 0;         // Is the fan on or off?

void GetPresets(){
  TempCorrection = EEPROM.read(0);
  if ((TempCorrection < 0) || (TempCorrection > 15)){
    TempCorrection = 0;
  }
  else{
    TempCorrection -= 10; // 10 was added at EEPROM save to account for negative values      
  }

  UsePerceivedTemp = EEPROM.read(5);
  PerceivedTemp(UsePerceivedTemp);
 
  Winter = EEPROM.read(4);
  Hysteresis_W = EEPROM.read(1);
  Hysteresis_S = EEPROM.read(2);

  if ((Hysteresis_W < 2) || (Hysteresis_W > 6)){
      Hysteresis_W = 2;
  }
  if ((Hysteresis_S < 2) || (Hysteresis_S > 6)){
      Hysteresis_S = 2;
  }
  
  TempDes = EEPROM.read(3);

// Read schedule from eeprom
  EEPROM.get(10,BeginTimer);
  EEPROM.get(16,EndTimer);
 
  if ((TempDes < 10) || (TempDes > 30)) TempDes = 20;
  
  int DashboardColor = EEPROM.read(6);
  DashColor(DashboardColor);
}