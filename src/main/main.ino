#Include <Arduino.h>
#include <Rocket.h>

void setup()
{

  Serial.begin(115200);
  Serial.println("Telemetry Started...");

  GPS_init();
}


void loop()
{
  GPS_readNMEAMessages();
}
