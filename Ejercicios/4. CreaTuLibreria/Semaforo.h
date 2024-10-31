
#ifndef Semaforo_h
#define Semaforo_h

#include "Arduino.h"

class Semaforo{
  public:
    Semaforo(int pin1, int pin2, int pin3);
    void begin();
    void encender();
    void apagar();
  private:
    int pinR;
    int pinA;
    int pinV;
};


#endif