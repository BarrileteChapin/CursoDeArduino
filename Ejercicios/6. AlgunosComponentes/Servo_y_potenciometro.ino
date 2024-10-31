#include "Servo.h"

Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = analogRead(A3);
  data = map(data, 0,1023, 0, 180);
  servo.write(data);
  delay(3000);

}
