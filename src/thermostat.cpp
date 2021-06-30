#include "thermostat.h"
#include "blynkModule.h"

long currentTime = 0;
int TempAvg;

EasyNex myNex(Serial2);

//*********************** Thermostat Functions **********************************

// This is the decision algorithm for turning the HVAC on and off
void TempUpdate(){

  float ReadF = dht.readTemperature(); //Get a new reading from the temp sensor
  Serial.print("DHT Temp: ");
  Serial.println(ReadF);
  Blynk.virtualWrite(V0,TempAct); //Report the corrected temperature
      
  if (isnan(ReadF)) {
    BadRead++;
    return;
  }

  //To compensate for some instability in the DHT11, the corrected temperature is
  //averaged with previous read, and any change is limited to 1 degree at a time. 
  TempAvg = int((ReadF + LastRead + (2 * TempCorrection))/2);

  // Use "perceived temperature" offset (when turned on in SETTINGS)
  if(UsePerceivedTemp == true && Winter == false && ReadF > 20 && Humidity > 40){
    TempAvg += int((Humidity - 40) / 10);
  }
  
  if (TempAvg > TempAct){
    TempAct += 1;
  }
  else if (TempAvg < TempAct){
    TempAct -= 1;
  }

  LastRead = ReadF;
  BadRead = 0;        // Reset counter for failed sensor reads
  
  Blynk.virtualWrite(V0,TempAct); //Report the corrected t 
  myNex.writeNum("three.n1.val",ReadF + TempCorrection);     
  

  // Decision algorithm for running HVAC
  if (!ManualRun && !ManualStop){   // Make sure it's not in one of the manual modes
    // If I'm home, run the algorithm
    if (Home){
      if (Winter){
        Serial.println("I'm home and it's winter.");
        //If I'm home, it's Winter, and the temp is too low, turn the relay ON
 
        if (TimerOn){  
          Serial.println("Timer is on."); //If we're within the schedule
          if (TempAct < TempDes){ //If the actual temp is lower than desired temp
          Fan(1);
          Serial.print("Fan is ");
          Serial.println(1);
        }
        //Turn it off when the space is heated to the desired temp + a few degrees
        else if (TempAct >= (TempDes + Hysteresis_W)) {
          Fan(0);
          }
        }
        else Fan(0);
      }
      else if (!Winter){
        //If I'm home, it's Summer, and the temp is too high, turn the relay ON
        if (TempAct > TempDes){
          Fan(1);
        }
        //Turn it off when the space is cooled to the desired temp - a few degrees
        else if (TempAct <= (TempDes - Hysteresis_S)){
          Fan(0);
        }
     }
    }
    // If I'm not home, turn the relay OFF
    else {
      Fan(0);
    }
  }
}

// Turn the HVAC on or off
void Fan(boolean RunFan){
  FanState = RunFan;

  // Set the proper color for the Desired Temp gauge and ON/OFF LED
  //(red = heating, blue = cooling, white gauge or LED off = within desired range)
  if (Winter && FanState){
      Blynk.setProperty(V0, "color", BLYNK_RED);
      Blynk.setProperty(V7, "color", BLYNK_RED);
    }
    else if (!Winter && FanState){
      Blynk.setProperty(V0, "color", BLYNK_BLUE);
      Blynk.setProperty(V7, "color", BLYNK_BLUE);
    }
    else{
      // Return widgets to their "off" state color, depending on theme
        Blynk.setProperty(V0, "color", NormalWidgetColor);      
    }
    
  digitalWrite(RelayPin,FanState); // Relay turns fan on with LOW input, off with HIGH
  Blynk.virtualWrite(V7,FanState * 1023);// fan "ON" LED on dashboard
}


// Resets from manual run to normal mode
void KillManual(){
  ManualRun = false;
}

//Match temp gauge to slider in Blynk app 
BLYNK_WRITE(V3){
  TempDes = param.asInt();
  Blynk.virtualWrite(V1,TempDes);
  myNex.writeNum("three.n0.val",TempDes);
  myNex.writeNum("three.n1.val",TempAvg);   
}

// WRITE TimerOn function. determines beginning and end of Thermostat operation
BLYNK_WRITE(V11){
 TimeInputParam t(param);

  // Process start time

  if (t.hasStartTime())
  {
    Serial.println(String("Start: ") +
                   t.getStartHour() + ":" +
                   t.getStartMinute() + ":" +
                   t.getStartSecond());
                   BeginTimer = ((t.getStartHour()*3600)+(t.getStartMinute()*60)+t.getStartSecond()); //Calculate start time in seconds from start of day

  }
  else if (t.isStartSunrise())
  {
    Serial.println("Start at sunrise");
  }
  else if (t.isStartSunset())
  {
    Serial.println("Start at sunset");
  }
  else
  {
    // Do nothing
  }

  // Process stop time

  if (t.hasStopTime())
  {
    Serial.println(String("Stop: ") +
                   t.getStopHour() + ":" +
                   t.getStopMinute() + ":" +
                   t.getStopSecond());
                   EndTimer = ((t.getStopHour()*3600)+(t.getStopMinute()*60)+t.getStopSecond()); //Calculate start time in seconds from start of day
  }
  else if (t.isStopSunrise())
  {
    Serial.println("Stop at sunrise");
  }
  else if (t.isStopSunset())
  {
    Serial.println("Stop at sunset");
  }
  else
  {
    // Do nothing: no stop time was set
  }

  // Process timezone
  // Timezone is already added to start/stop time

  Serial.println(String("Time zone: ") + t.getTZ());

  // Get timezone offset (in seconds)
  Serial.println(String("Time zone offset: ") + t.getTZ_Offset());

  // Process weekdays (1. Mon, 2. Tue, 3. Wed, ...)

  for (int i = 1; i <= 7; i++) {
    if (t.isWeekdaySelected(i)) {
      Serial.println(String("Day ") + i + " is selected");
    }
  }

  Serial.println();
}

void TimerStatus(){
  if((currentTime > BeginTimer) && (currentTime < EndTimer)){
    TimerOn = true;
    }
    else {
      TimerOn = false;
    }
    Blynk.virtualWrite(V14,BeginTimer);   
    Blynk.virtualWrite(V15,EndTimer);   
    Blynk.virtualWrite(V16,TimerOn);  
}
void ActualTemp(){
  Blynk.virtualWrite(V0,TempAct);
  Serial.print("DHT22 temp: ");
  Serial.println(TempAct);
}
void trigger1(){
  int previousTempdes = 0;
  TempDes = myNex.readNumber("three.Slider0.val");
  if(TempDes != 777777){
    previousTempdes = TempDes;
  }
    else if(TempDes == 777777)
    {
      TempDes = previousTempdes;
    }
    
  Blynk.virtualWrite(V3,TempDes);
  Blynk.virtualWrite(V1,TempDes);
}