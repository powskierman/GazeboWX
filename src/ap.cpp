#include "ap.h"

String myHostname = "ThermoX";


// Create an access point if no wifi credentials are stored
  void apInit(){
    WiFi.hostname(myHostname);
    WiFiManager wifi;
    wifi.autoConnect("ThermoX"); 
  }