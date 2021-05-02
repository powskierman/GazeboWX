//Initialize the sensor. Use pin 0. Sensor type is DHT22.
#include "dhtModule.h"

DHT dht(0,DHT22); 

void startDht(){
  dht.begin(); //Start temperature sensor
  delay(1500);
}
