#include "LiquidCrystal_I2C.h"

LiquidCrystal_I2C pantallita(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  pantallita.init();
  pantallita.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
  pantallita.setCursor(0,0);
  pantallita.print("FreeCodeCamp");
  pantallita.setCursor(0,1);
  pantallita.print("Aprende Arduino");
  delay(5000);
  pantallita.clear();
  pantallita.setCursor(0,0);
  pantallita.print("Hola Mundo");
  delay(3000);
}
