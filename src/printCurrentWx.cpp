#include <Arduino.h>
#include "printCurrentWx.h"

// OpenWeather API Details, replace x's with your API key
String api_key = "9794ca155b8a9487f51ed156635b1561"; // Obtain this from your OpenWeather account

// Set both your longitude and latitude to at least 4 decimal places
String latitude =  "45.186"; // 90.0000 to -90.0000 negative for Southern hemisphere
String longitude = "-71.937"; // 180.000 to -180.000 negative for West

String units = "metric";  // or "imperial"
String language = "en";   // See notes tab
String field = "";
String type = "";
int ID = 0;
int num = 0;
int ico = 3;

OW_Weather ow; // Weather forecast library instance

/***************************************************************************************
**                          Send weather info to serial port
***************************************************************************************/
void printCurrentWeather()
{
  // Create the structures that hold the retrieved weather
  OW_current *current = new OW_current;
  OW_hourly *hourly = new OW_hourly;
  OW_daily  *daily = new OW_daily;

  Serial.print("\nRequesting weather information from OpenWeather... ");

  //On the ESP8266 (only) the library by default uses BearSSL, another option is to use AXTLS
  //For problems with ESP8266 stability, use AXTLS by adding a false parameter thus       vvvvv
  //ow.getForecast(current, hourly, daily, api_key, latitude, longitude, units, language, false);

  ow.getForecast(current, hourly, daily, api_key, latitude, longitude, units, language);

  Serial.println("Weather from Open Weather\n");

  // Position as reported by Open Weather
  Serial.print("Latitude            : "); Serial.println(ow.lat);
  Serial.print("Longitude           : "); Serial.println(ow.lon);
  // We can use the timezone to set the offset eventually...
  Serial.print("Timezone            : "); Serial.println(ow.timezone);
  Serial.println();

  if (current)
  {
    Serial.println("############### Current weather ###############\n");
    Serial.print("dt (time)        : "); Serial.print(strTime(current->dt));
    Serial.print("sunrise          : "); Serial.print(strTime(current->sunrise));
    Serial.print("sunset           : "); Serial.print(strTime(current->sunset));
    field = "temp";
    type = "val";
    num = (current->temp);
    sendNextion(field,type,num);

    Serial.print("feels_like       : "); Serial.println(current->feels_like);
    Serial.print("pressure         : "); Serial.println(current->pressure);
    Serial.print("humidity         : "); Serial.println((current->humidity));
    field = "humidity";
    type = "val";
    num = (current->humidity);
    sendNextion(field,type,num);
    Serial.print("dew_point        : "); Serial.println(current->dew_point);
    Serial.print("uvi              : "); Serial.println(current->uvi);
    Serial.print("clouds           : "); Serial.println(current->clouds);
    Serial.print("visibility       : "); Serial.println(current->visibility);
    Serial.print("wind_speed       : "); Serial.println(current->wind_speed);
    Serial.print("wind_gust        : "); Serial.println(current->wind_gust);
    Serial.print("wind_deg         : "); Serial.println(current->wind_deg);
    Serial.print("rain             : "); Serial.println(current->rain);
    Serial.print("snow             : "); Serial.println(current->snow);
    Serial.println();
    Serial.print("id               : "); Serial.println(current->id);

    ID = (current->id);
    whichBigIcon(ID);

    field = "wxIcon10";
    type = "pic";
    num = ico;
    sendNextion(field,type,num);

    Serial.print("main             : "); Serial.println(current->main);
    Serial.print("description      : "); Serial.println(current->description);
    Serial.print("icon             : "); Serial.println(current->icon);

    Serial.println();
  }

  if (hourly)
  {
    int i = 0;
    int j = 0;

    Serial.println("############### Hourly weather  ###############\n");
    
    for (i = 0; i < MAX_HOURS; i+=2)
    {
      Serial.print("Hourly summary  "); if (i < 10) Serial.print(" "); Serial.print(i);
      Serial.println();
      Serial.print("dt (time)        : "); Serial.print(strTime(hourly->dt[i]));
      
      String hourlyTime = (strTime(hourly->dt[i]));
      int justHour = stringParser(hourlyTime);
      Serial.print("Sending this hour to Nextion: ");
      Serial.println(justHour);
      field = "dt" + String(j);
      type = "val";
      num = justHour;
      sendNextion(field,type, num);

      Serial.print("temp             : "); Serial.println(hourly->temp[i]);
 
      field = "temp" + String(j);
      type = "val";
      num = (hourly->temp[i]);
      sendNextion(field,type, num);

      Serial.print("feels_like       : "); Serial.println(hourly->feels_like[i]);
      Serial.print("pressure         : "); Serial.println(hourly->pressure[i]);
      Serial.print("humidity         : "); Serial.println(hourly->humidity[i]);
 
      field = "humidity" + String(j);
      type = "val";
      num = (hourly->humidity[i]);
      sendNextion(field,type, num);

      Serial.print("dew_point        : "); Serial.println(hourly->dew_point[i]);
      Serial.print("clouds           : "); Serial.println(hourly->clouds[i]);
      Serial.print("wind_speed       : "); Serial.println(hourly->wind_speed[i]);
      Serial.print("wind_gust        : "); Serial.println(hourly->wind_gust[i]);
      Serial.print("wind_deg         : "); Serial.println(hourly->wind_deg[i]);
      Serial.print("rain             : "); Serial.println(hourly->rain[i]);
      Serial.print("snow             : "); Serial.println(hourly->snow[i]);
      Serial.println();
      Serial.print("id               : "); Serial.println(hourly->id[i]);

      ID = (hourly->id[i]);
      whichIcon(ID);

      field = "wxIcon" + String(j);
      type = "pic";
      num = ico;
      sendNextion(field,type, num);


      Serial.print("main             : "); Serial.println(hourly->main[i]);
      Serial.print("description      : "); Serial.println(hourly->description[i]);
      Serial.print("icon             : "); Serial.println(hourly->icon[i]);
      Serial.print("pop              : "); Serial.println(hourly->pop[i]);

      Serial.println();
      j++;
    }
  }

  if (daily)
  {
    Serial.println("###############  Daily weather  ###############\n");
    for (int i = 0; i < MAX_DAYS; i++)
    {
      Serial.print("Daily summary   "); if (i < 10) Serial.print(" "); Serial.print(i);
      Serial.println();
      Serial.print("dt (time)        : "); Serial.print(strTime(daily->dt[i]));
      Serial.print("sunrise          : "); Serial.print(strTime(daily->sunrise[i]));
      Serial.print("sunset           : "); Serial.print(strTime(daily->sunset[i]));

      Serial.print("temp.morn        : "); Serial.println(daily->temp_morn[i]);
      Serial.print("temp.day         : "); Serial.println(daily->temp_day[i]);
      Serial.print("temp.eve         : "); Serial.println(daily->temp_eve[i]);
      Serial.print("temp.night       : "); Serial.println(daily->temp_night[i]);
      Serial.print("temp.min         : "); Serial.println(daily->temp_min[i]);
      Serial.print("temp.max         : "); Serial.println(daily->temp_max[i]);

      Serial.print("feels_like.morn  : "); Serial.println(daily->feels_like_morn[i]);
      Serial.print("feels_like.day   : "); Serial.println(daily->feels_like_day[i]);
      Serial.print("feels_like.eve   : "); Serial.println(daily->feels_like_eve[i]);
      Serial.print("feels_like.night : "); Serial.println(daily->feels_like_night[i]);

      Serial.print("pressure         : "); Serial.println(daily->pressure[i]);
      Serial.print("humidity         : "); Serial.println(daily->humidity[i]);
      Serial.print("dew_point        : "); Serial.println(daily->dew_point[i]);
      Serial.print("uvi              : "); Serial.println(daily->uvi[i]);
      Serial.print("clouds           : "); Serial.println(daily->clouds[i]);
      Serial.print("visibility       : "); Serial.println(daily->visibility[i]);
      Serial.print("wind_speed       : "); Serial.println(daily->wind_speed[i]);
      Serial.print("wind_gust        : "); Serial.println(daily->wind_gust[i]);
      Serial.print("wind_deg         : "); Serial.println(daily->wind_deg[i]);
      Serial.print("rain             : "); Serial.println(daily->rain[i]);
      Serial.print("snow             : "); Serial.println(daily->snow[i]);
      Serial.println();
      Serial.print("id               : "); Serial.println(daily->id[i]);
 //     ID = (daily->id[i]);
//      whichIcon(ID);
      Serial.print("main             : "); Serial.println(daily->main[i]);
      Serial.print("description      : "); Serial.println(daily->description[i]);
      Serial.print("icon             : "); Serial.println(daily->icon[i]);
      Serial.print("pop              : "); Serial.println(daily->pop[i]);

      Serial.println();
    }
  }

  // Delete to free up space and prevent fragmentation as strings change in length
  delete current;
  delete hourly;
  delete daily;
}
/*void sendWxIcon(String _field, int _num){
    String command = _field + ".pic="+_num;
    Serial2.print(command);
    endNextionCommand();
}*/
int whichIcon(int _ID)
  {
      switch (_ID)
      {
      case 200 ... 209:{ico = 3;return ico;break;}
      case 210:{ico = 25;return ico;break;}
      case 211 ... 232:{ico = 3;return ico;break;}
      case 300 ... 321:{ico = 14;return ico;break;}
      case 500:{ico = 17;return ico;break;}
      case 501:{ico = 16;return ico;break;}
      case 502:{ico = 15;return ico;break;}
      case 503 ... 531:{ico = 16;return ico;break;}
      case 600:{ico = 24;return ico;break;}
      case 601:{ico = 19;return ico;break;}
      case 602:{ico = 20;return ico;break;}
      case 603 ... 622:{ico = 19;return ico;break;}
      case 701 ... 781:{ico = 19;return ico;break;}
      case 800:{ico = 26;return ico;break;}
      case 801:{ico = 22;return ico;break;}
      case 802:{ico = 23;return ico;break;}
      case 803 ... 804:{ico = 2;return ico;break;}

    default:return ico;break;
    }
  }
 int whichBigIcon(int _ID)
  {
          switch (_ID)
      {
      case 200 ... 209:{ico = 28;return ico;break;}
      case 210:{ico = 47;return ico;break;}
      case 211 ... 232:{ico = 28;return ico;break;}
      case 300 ... 321:{ico = 35;return ico;break;}
      case 500:{ico = 38;return ico;break;}
      case 501:{ico = 37;return ico;break;}
      case 502:{ico = 36;return ico;break;}
      case 503 ... 531:{ico = 37;return ico;break;}
      case 600:{ico = 46;return ico;break;}
      case 601:{ico = 40;return ico;break;}
      case 602:{ico = 41;return ico;break;}
      case 603 ... 622:{ico = 40;return ico;break;}
      case 701 ... 781:{ico = 40;return ico;break;}
      case 800:{ico = 43;return ico;break;}
      case 801:{ico = 44;return ico;break;}
      case 802:{ico = 45;return ico;break;}
      case 803 ... 804:{ico = 27;return ico;break;}

    default:return ico;break;
    }

  }

void sendNextion(String _field, String _type, int _num){
    String command = _field + "." + _type + "="+_num;
    Serial.println(command);
    Serial2.print(command);
    endNextionCommand();
}
void endNextionCommand()
{
  Serial2.write(0xff);
  Serial2.write(0xff);
  Serial2.write(0xff);
}
int stringParser(String _hourlyTime){
    char Buf[50];
    _hourlyTime.toCharArray(Buf, 50);
   const char s[2] = " ";
   char *token;
   int i=0;
   String hour = "";
   int justHour = 0;
   
   /* get the first token */
   token = strtok(Buf, s);
   
   /* walk through other tokens */
   while( token != NULL ) {

    i++;
    if(i==4){
         justHour = atoi(token);
        Serial.print("The hour is: ");
        Serial.println(token);
    }
    
      token = strtok(NULL, s);
   }
   return(justHour);
}
