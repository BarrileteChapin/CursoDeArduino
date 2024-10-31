#include "HCSR04.h"

#define trigP 12
#define echoP 11

UltraSonicDistanceSensor sonido(trigP, echoP);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float variable = sonido.measureDistanceCm();
  Serial.print("Distancia es: ");
  Serial.println(variable);
  delay(1000);

}
