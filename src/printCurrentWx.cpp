#include <Arduino.h>
#include "printCurrentWx.h"
#include "whichIcon.h"

extern int ID;
extern int num;
extern int ico;

// OpenWeather API Details, replace x's with your API key
String api_key = "9794ca155b8a9487f51ed156635b1561"; // Obtain this from your OpenWeather account

// Set both your longitude and latitude to at least 4 decimal places
String latitude =  "45.186"; // 90.0000 to -90.0000 negative for Southern hemisphere
String longitude = "-71.937"; // 180.000 to -180.000 negative for West

String units = "metric";  // or "imperial"
String language = "en";   // See notes tab
String field = "";
String type = "";

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

    Serial.print("temp             : "); Serial.println(current->temp);

    field = "one.temp";
    type = "val";
    num = (current->temp);
    sendNextion(field,type,num);

    Serial.print("feels_like       : "); Serial.println(current->feels_like);

    field = "zero.feels_like";
    type = "val";
    num = (current->feels_like);
    sendNextion(field,type,num);

    Serial.print("pressure         : "); Serial.println(current->pressure);
    Serial.print("humidity         : "); Serial.println((current->humidity));

    field = "one.humidity";
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

    field = "zero.rain";
    type = "val";
    num = (current->clouds);
    sendNextion(field,type,num);


    Serial.print("snow             : "); Serial.println(current->snow);
    Serial.println();
    Serial.print("id               : "); Serial.println(current->id);

    ID = (current->id);
    whichBigIcon(ID);

    field = "zero.now0";
    type = "pic";
    num = ico;
    sendNextion(field,type,num);
    field = "one.now1";
    sendNextion(field, type,num);
    type = "pic";
    sendNextion(field,type,num);

    Serial.print("main             : "); Serial.println(current->main);
    Serial.print("description      : "); Serial.println(current->description);
    Serial.print("icon             : "); Serial.println(current->icon);

    Serial.println();
  }

  if (hourly)
  {
    int i = 0;  // counts by 2 for a bi-hourly forecast
    int j = 0; // counts by 1 for incremental field names
    const int k = 10; // adds 10 to field names for page 1 fields

    Serial.println("############### Hourly weather  ###############\n");
    
    for (i = 0; i < MAX_HOURS; i+=2)
    {
      Serial.print("Hourly summary  "); if (i < 10) Serial.print(" "); Serial.print(i);
      Serial.println();
      Serial.print("dt (time)        : "); Serial.print(strTime(hourly->dt[i]));
      
      String hourlyTime = (strTime(hourly->dt[i]));
      int justHour = stringParser(hourlyTime);
 
      field = "zero.dt" + String(j);
      type = "val";
      num = justHour;
      sendNextion(field,type, num);
      field = "one.dt" + String(j+k);
      sendNextion(field,type, num);

      Serial.print("temp             : "); Serial.println(hourly->temp[i]);
 
      field = "one.temp" + String(j);
      type = "val";
      num = (hourly->temp[i]);
      sendNextion(field,type, num);

      Serial.print("feels_like       : "); Serial.println(hourly->feels_like[i]);

      field = "zero.fl" + String(j);
      type = "val";
      num = (hourly->feels_like[i]);
      sendNextion(field,type, num);


      Serial.print("pressure         : "); Serial.println(hourly->pressure[i]);
      Serial.print("humidity         : "); Serial.println(hourly->humidity[i]);
 
      field = "one.humidity" + String(j);
      type = "val";
      num = (hourly->humidity[i]);
      sendNextion(field,type, num);

      Serial.print("dew_point        : "); Serial.println(hourly->dew_point[i]);
      Serial.print("clouds           : "); Serial.println(hourly->clouds[i]);
      Serial.print("wind_speed       : "); Serial.println(hourly->wind_speed[i]);
      Serial.print("wind_gust        : "); Serial.println(hourly->wind_gust[i]);
      Serial.print("wind_deg         : "); Serial.println(hourly->wind_deg[i]);
      Serial.print("rain             : "); Serial.println(hourly->rain[i]);

      field = "zero.rain" + String(j);
      type = "val";
      num = ((hourly->pop[i]) * 100);
      sendNextion(field,type, num);


      Serial.print("snow             : "); Serial.println(hourly->snow[i]);
      Serial.println();
      Serial.print("id               : "); Serial.println(hourly->id[i]);

      ID = (hourly->id[i]);
      whichIcon(ID);

      field = "zero.wxIcon" + String(j);
      type = "pic";
      num = ico;
      sendNextion(field,type, num);
      field = "one.wxIcon" + String(j+k);
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
// Sends data to Nextion
void sendNextion(String _field, String _type, int _num){
    String command = _field + "." + _type + "="+_num;
    Serial.println(command);
    Serial2.print(command);
    endNextionCommand();
}
// Nextion requires three 0xff as EOL
void endNextionCommand()
{
  Serial2.write(0xff);
  Serial2.write(0xff);
  Serial2.write(0xff);
  }
// Parses the date and hour field for the time to retrieve hour.
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
     }
    token = strtok(NULL, s);
   }
   return(justHour);
}
