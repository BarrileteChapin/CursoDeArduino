#include "Semaforo.h"

#include "Arduino.h"

Semaforo::Semaforo(int pin1, int pin2, int pin3){
  pinR = pin1;
  pinA = pin2;
  pinV = pin3;
}

void Semaforo::begin(){
  pinMode(pinR, OUTPUT);
  pinMode(pinA, OUTPUT);
  pinMode(pinV, OUTPUT);
}

void Semaforo::apagar(){
  digitalWrite(pinV, LOW);
  digitalWrite(pinA, LOW);
  digitalWrite(pinR, LOW);
}

void Semaforo::encender(){
  Semaforo::apagar();
  digitalWrite(pinV, HIGH);
  delay(3000);
  Semaforo::apagar();
  digitalWrite(pinA, HIGH);
  delay(2000);
  Semaforo::apagar();
  digitalWrite(pinR, HIGH);
  delay(5000);
}

