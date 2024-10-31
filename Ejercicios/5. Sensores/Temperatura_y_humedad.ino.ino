#include "DHT22.h"

#define pinSensor 8 
int pinSensor2 = 8; 

DHT22 sensor(pinSensor); //utiliza pinSensor o pinSensor2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  float h = sensor.getHumidity();
  float t = sensor.getTemperature();

  Serial.print("humedad: ");
  Serial.println(h);
  Serial.print("temperatura: ");
  Serial.println(t);

}
