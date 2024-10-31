#include "PIR.h"

#define pirPin 7

PIR sensor

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  sensor.add(pirPin);

}

void loop() {
  // put your main code here, to run repeatedly:
  byte data = sensor.read();
  Serial.print("Movimiento: ");
  Serial.println(data);
  delay(2000);
}
