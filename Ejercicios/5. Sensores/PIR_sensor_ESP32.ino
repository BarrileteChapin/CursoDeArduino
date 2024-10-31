#include "PIRSensor.h"

#define pirPin 17

PIRSensor sensor(pirPin);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  sensor.activate();
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = sensor.trigCount();
  Serial.print("Movimiento: ");
  Serial.println(data);
  delay(2000);
}
