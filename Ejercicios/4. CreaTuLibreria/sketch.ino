
#include "Semaforo.h"

Semaforo prueba(8,7,6);

void setup() {
  // put your setup code here, to run once:
  prueba.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  prueba.encender();
}
