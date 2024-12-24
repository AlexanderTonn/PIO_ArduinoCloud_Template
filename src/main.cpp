
#include "pinMapping.hpp"
#include <thingProperties.h>
#include "wifi.hpp"

#include <Arduino.h>

WifiHandler _wifi;

void setup()
{
  Serial.begin(9600);
  delay(5000);

  _wifi.tryReconnect(SECRET_WIFI_SSID, SECRET_WIFI_PASS);


  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  setDebugMessageLevel(DBG_VERBOSE);
  ArduinoCloud.printDebugInfo();


}

void loop()
{
  ArduinoCloud.update();


  
}


// ADD THE FUNCTION DEFINITIONS HERE
