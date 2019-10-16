#include <HardwareSerial.h>
 
static const uint32_t GPSBaud = 9600;
 
// The serial connection to the GPS device
#define HardwareSerial Serial1
 
void setup()
{
  Serial.begin(115200);
  Serial1.begin(GPSBaud);
}
 
void loop()
{
  // Output raw GPS data to the serial monitor
  while (Serial1.available() > 0){
    Serial.write(Serial1.read());
  }
}
