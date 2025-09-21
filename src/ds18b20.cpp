//Initialize the sensor. Use pin 0. Sensor type is DHT22.
#include "settings.h"
#include "ds18b20.h"

// GPIO where the DS18B20 is connected to
const int oneWireBus = 4;     
// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(oneWireBus);
// Pass our oneWire reference to Dallas Temperature sensor 
DallasTemperature sensors(&oneWire);

void startDs18b20(){
  sensors.begin(); //Start temperature sensor
  delay(1500);
}
