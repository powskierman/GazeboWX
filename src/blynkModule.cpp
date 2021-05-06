#include "blynkModule.h"
#define BLYNK_DEBUG // Optional
int MenuTimer;

extern BlynkTimer timer;

// Initialize blynk server IP and Auth
void BlynkInit(){
  Serial.println("At BlynkInit");
char PiServerIP[] = "192.168.0.10";
char auth[] = "bDqc4Ylu8-F_8xga1Gl-XDnLwt8MQjRY"; // Blynk token "YourAuthToken"
Blynk.config(auth, PiServerIP, 8080);
delay(100);
Blynk.connect();
}

String NormalWidgetColor = BLYNK_WHITE;
String PreviousWidgetColor = BLYNK_WHITE;

// Reset the Menu at startup or after timing out from inactivity
void MenuReset(){
  MenuItem = 0;
  Blynk.virtualWrite(V10, String("HOLD 2 SEC TO ENTER/EXIT MENU"));
}
// Updates dashboard information on the Blynk app
void OtherUpdates(){
  Blynk.virtualWrite(V29,Home * 1023);  // Update "home" LED on dashboard
  Blynk.virtualWrite(V1,TempDes);       //Update desired temp on the dashboard
   
   // Notify when the temperature sensor fails repeatedly, and turn off the fan.
   if(MenuItem == 0 && !ButtonPressed){
     if (BadRead > 10){
       Blynk.virtualWrite(V10, String("<<< SENSOR MALFUNCTION >>>"));
       BadRead = 0;
       if (!ManualRun){ //Manual mode supersedes a malfunction condition
        Fan(0);
       }
     }
     // Clear notification when sensor reads correctly again
     else{
      MenuReset();
     }
   }
   
   if (TempDes != PreviousTempDes){   //update the EEPROM if desired temperature had changed.
    EEPROM.write(3,TempDes);
    EEPROM.commit();
    PreviousTempDes = TempDes;  
   }

   if (BeginTimer != PreviousBeginTimer){   //update the EEPROM if schedule has changed.
    EEPROM.put(10,BeginTimer);
    EEPROM.commit();
    PreviousBeginTimer = BeginTimer;  
   }
   if (EndTimer != PreviousEndTimer){   //update the EEPROM if schedule has changed.
//    int eeAddress = 10;
//    eeAddress += sizeof(long); 
    EEPROM.put(16,EndTimer);
    EEPROM.commit();
    PreviousEndTimer = EndTimer;  
   }

   // Change widget colors
   if(NormalWidgetColor != PreviousWidgetColor){
    SetNewWidgetColor();
   }

  // To stabilize perceived temperature calculation, only update humidity readings between fan cycles
  if(!FanState){
    float ReadH = dht.readHumidity();          // Read humidity (percent)

    // Only update humidity if it's a good read from the sensor. To mitigate any
    // instability, average with previous reading, change by only 1% per reading
    if(!(isnan(ReadH))){
      int HumidityAvg = (ReadH + Humidity) / 2;
      if (HumidityAvg > Humidity){
        Humidity += 1;
      }
      if (HumidityAvg < Humidity){
        Humidity -=1;
      }
    }
     Blynk.virtualWrite(V2, Humidity);
  }   
}

void SetNewWidgetColor(){
  if(!FanState){
    Blynk.setProperty(V0, "color", NormalWidgetColor);
  }
  Blynk.run();
  Blynk.setProperty(V1, "color", NormalWidgetColor);
  Blynk.run();
  Blynk.setProperty(V2, "color", NormalWidgetColor); 
  Blynk.run();
  Blynk.setProperty(V3, "color", NormalWidgetColor);
  Blynk.run();
  Blynk.setProperty(V4, "color", NormalWidgetColor);
  Blynk.run();
  Blynk.setProperty(V5, "color", NormalWidgetColor);
  Blynk.run();
  Blynk.setProperty(V10, "color", NormalWidgetColor);
  Blynk.run();
  Blynk.setProperty(V29, "color", NormalWidgetColor);
  Blynk.run();
  PreviousWidgetColor = NormalWidgetColor;
}

// Checks for long press condition on SETTINGS button
void LongHoldDetect(){
  // If the button is still depressed, it's a long hold
  if (ButtonPressed){
    LongHold = true;
    // Enter or exit the SETTINGS menu, if it was a long press 
    if (MenuItem == 0){
      NextMenuItem(); // Enter the SETTINGS menu
    }
    else{
      MenuReset(); // Exit the SETTINGS menu
    }
  }
}
//Cycles through the Settings Menu in the Labeled Value widget
void NextMenuItem(){
  
  MenuItem += 1;
  if (MenuItem > 10){
    MenuItem = 1;
  }
    
  switch(MenuItem){
      case 1:
        if (ManualRun){
          Response = "CANCEL PULSE?";
        }
        else{
          Response = "15 MIN PULSE?";
        }
        break;

      case 2:
        if (UsePerceivedTemp){
          Response = "USE ACTUAL TEMP?";
        }
        else Response = "USE PERCEIVED TEMP?";
        break;

      case 3:
        if (ManualStop){
          Response = "END SYSTEM HALT?";
        }
        else{
          Response = "HALT SYSTEM?";
        }
        break;
        
     case 4:
      if (Home){
        Response = "LOCATION: HOME";
      }
      else Response = "LOCATION: AWAY";
      break;


    case 5:
      if (Winter){
        Response = "MODE : WINTER";
      }
      else Response = "MODE : SUMMER";
      break;

    case 6:
      if (Winter){
        Response = "HYSTERESIS: ";
        Response +=  Hysteresis_W;
        Response += " DEG";   
      }
      else{
        Response = "HYSTERESIS: ";
        Response += Hysteresis_S;
        Response += " DEG";
      }
      break;

    case 7:
      Response = "TEMP CORRECTION: ";
      Response += TempCorrection;
      Response += " DEGREES";
      break;

    case 8:
      Response = "CHANGE WIDGET COLOR?";
      break;
      

    case 9:
      Response = "CLEAR WIFI SETTINGS?";
      break;

    case 10:
       Response = "RESET ALL DEFAULTS?";
       break;
  }
  Blynk.virtualWrite(V10,Response);
}
void DashColor(int DashboardColor){
   if(DashboardColor > 0 && DashboardColor <= 5){
    switch(DashboardColor){
      case 1:
        NormalWidgetColor = BLYNK_WHITE;
        break;

      case 2:
        NormalWidgetColor = BLYNK_BLACK;
        break;

       case 3:
        NormalWidgetColor = BLYNK_GREEN;
        break;

      case 4:
        NormalWidgetColor = BLYNK_YELLOW;
        break;

       case 5:
        NormalWidgetColor = BLYNK_DARK_BLUE;
        break;
    }
    SetNewWidgetColor();
  }
}
void PerceivedTemp(bool UsePerceivedTemp){
 if(UsePerceivedTemp){
    Blynk.setProperty(V0, "label", "             Perceived Temperature");
  }
  else{
    Blynk.setProperty(V0, "label", "               Actual Temperature");
  }
}

//************************ External Data Sources ************************************


// Receives commands from IFTTT Maker Channel via the Amazon Echo. 
// Pin V6 is not actually associated with a Blynk dashboard widget.
BLYNK_WRITE(V6){
  int AlexaCommand = param.asInt();

  switch(AlexaCommand){
    // Turn manual running on / off
    case 1:
      if (ManualRun){
          ManualRun = false;
        }
      else{
        ManualRun = true;
        ManualStop = false;
        Fan(1);
      }   
      break;
    // Increase desired temperature by 2 degrees
    case 2: 
      TempDes += 2;
      Blynk.virtualWrite(V3, TempDes);  //Update the slider widget
      break;
    // Decrease desired temperature by 2 degrees
    case 3:
      TempDes -= 2;
      Blynk.virtualWrite(V3, TempDes);  //Update the slider widget
      break;
  }
}

//Get location (home or away) from the IFTTT iOS location and Maker channels
BLYNK_WRITE(V31)
{   
  Home = param.asInt();
  
  if (Home){ //Turn the HOME LED widget on or off
    Blynk.virtualWrite(V29,1023);
  }
  else Blynk.virtualWrite(V29,0);
}

//************************** Settings Menu Functions *******************************

// Dashboard SETTINGS button. Press-and-hold to enter menu. Short press for next item.
BLYNK_WRITE(V4) {
  // When the SETTINGS button is pressed, start a timer to check for a long press
  if(param.asInt()){
    ButtonTimer = timer.setTimeout(750, LongHoldDetect);
    ButtonPressed = true;
    timer.restartTimer(MenuTimer);
  }
   
  // Button has been released
  else {
    ButtonPressed = false;        // Reset the button press flag
      
    // If the long hold function wasn't called, it's a short press. Advance or reset the menu.
    if (!LongHold){ 
      if (MenuItem == 0){
        MenuReset(); // Remind user to hold 2 seconds to enter menu
      }
      else{
        NextMenuItem(); // Advance to next menu item
      }
    }
    // Reset the long press flag
    LongHold = false;
  }
}

//Dashboard MODIFY button. Executes change of selected menu item 
BLYNK_WRITE(V5){
  
  if ((MenuItem > 0) && (param.asInt())){
    timer.restartTimer(MenuTimer);
    
    switch(MenuItem){

        //Forced on
      case 1:
        if (ManualRun){
          ManualRun = false;
          Response = "15 MIN PULSE?";
        }
        else{
          ManualRun = true;
          ManualStop = false;
          Fan(1);
          Response = "PULSE: ON";
          timer.setTimeout(900000L, KillManual);
        }   
        break;

       //Change season
      case 2:
        if (UsePerceivedTemp){
          Response = "ACTUAL TEMP MODE";
          UsePerceivedTemp = false;
          EEPROM.write(5,0);
          EEPROM.commit();
        }
        else {
          Response = "PERCEIVED TEMP MODE";
          UsePerceivedTemp = true;
          EEPROM.write(5,1);
          EEPROM.commit();
        }
        if(UsePerceivedTemp){
          Blynk.setProperty(V0, "label", "             Perceived Temperature");
        }
        else{
          Blynk.setProperty(V0, "label", "               Actual Temperature");
        } 
        break; 

        //Forced halt
      case 3:
        if (ManualStop){
          ManualStop = false;
          Response = "HALT SYSTEM?";
        }
        else {
          ManualStop = true;
          ManualRun = false;
          Fan(0);
          Response = "SYSTEM HALTED";
        }
        break;

         //Change location manually
      case 4:
        if (Home){
          Home = false;
          Response = "LOCATION : AWAY";
        }
        else {
          Home = true;
          Response = "LOCATION : HOME";
        }
        break;
        
      //Change season
      case 5:
        if (Winter){
          Response = "MODE : SUMMER";
          Winter = false;
          EEPROM.write(4,0);
          EEPROM.commit();
        }
        else {
          Response = "MODE : WINTER";
          Winter = true;
          EEPROM.write(4,1);
          EEPROM.commit();
        } 
        break;
        
      //Change hysteresis level of currently selected season
      case 6:
        if (Winter){
          Hysteresis_W += 1;
          if (Hysteresis_W > 6){
            Hysteresis_W = 1;
          }
          EEPROM.write(1,(Hysteresis_W));
          EEPROM.commit();
          Response = "WINTER HYSTERESIS: ";
          Response += Hysteresis_W;
          Response += " DEG";
        }
        else{
          Hysteresis_S += 1;
          if (Hysteresis_S > 6){
            Hysteresis_S = 1;
          }
          EEPROM.write(2,(Hysteresis_S));
          EEPROM.commit();
          Response = "SUMMER HYSTERESIS: ";
          Response += Hysteresis_S;
          Response += " DEG";
          }
        break;

      // Correct faulty DHT11 readings
      case 7:
        TempCorrection +=1;
        if (TempCorrection > 5){
          TempCorrection = -10;
        }
        EEPROM.write(0,(TempCorrection + 10));
        EEPROM.commit();
        Response = "TEMPERATURE CORRECTION: ";
        Response += TempCorrection;
        Response += " DEG";
        break;

      //Change default widget "off" color to contrast with light or dark theme
      case 8:
        if(NormalWidgetColor == BLYNK_BLACK){
          NormalWidgetColor = BLYNK_WHITE;
          Response = "WHITE";
          EEPROM.write(6, 1);
        }
        else if(NormalWidgetColor == BLYNK_WHITE){
          NormalWidgetColor = BLYNK_GREEN;
          Response = "GREEN";
          EEPROM.write(6, 3);
        }
        else if(NormalWidgetColor == BLYNK_GREEN){
          NormalWidgetColor = BLYNK_DARK_BLUE;
          Response = "DARK BLUE";
          EEPROM.write(6, 5);
        }
        else if(NormalWidgetColor == BLYNK_DARK_BLUE){
          NormalWidgetColor = BLYNK_YELLOW;
          Response = "YELLOW";
          EEPROM.write(6, 4);
        }
        else if(NormalWidgetColor == BLYNK_YELLOW){
          NormalWidgetColor = BLYNK_BLACK;
          Response = "BLACK";
          EEPROM.write(6, 2);
        }
        SetNewWidgetColor();
        break;

      //Clear stored SSID and password
      case 9:
        Response = "ERASING WIFI CREDENTIALS";
        WiFi.begin("FakeSSID","FakePW"); //replace current WiFi credentials with fake ones
        delay(1000);
        ESP.restart();
        break;

      //Clear current temperature settings
      case 10:
        Response = "All settings reset to default!";
        Winter = true;
        Hysteresis_W = 2;
        Hysteresis_S = 2;
        break;
    }
    Blynk.virtualWrite(V10, Response);
  }
}
// Used to calculate thermostat schedule
void digitalClockDisplay()
{
  // digital clock display of the time
  Serial.print(hour());
  printDigits(minute());
  printDigits(second());
  currentTime = ((hour()*3600)+(minute()*60)+second()); //Calculate time of day in seconds from start of day
  // Send time in seconds from midnight to the App
  Blynk.virtualWrite(V13, currentTime);  
  
  Serial.print(" ");
  Serial.print(day());
  Serial.print(".");
  Serial.print(month());
  Serial.print(".");
  Serial.println(year());
  Serial.println(BeginTimer);
  Serial.println(EndTimer);
  Serial.println(TimerOn);
  Serial.println();

  // Send date to the App
//  Blynk.virtualWrite(V14, currentDate);
}

void printDigits(int digits)
{
  // utility for digital clock display: prints preceding colon and leading 0
  Serial.print(":");
  if (digits < 10)
    Serial.print('0');
  Serial.print(digits);
}
