
#define rojo 7
#define amarillo 6
#define verde 5

void setup() {
  // put your setup code here, to run once:
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rojo, HIGH);
  digitalWrite(amarillo, LOW);
  digitalWrite(verde, LOW);
  delay(3000);
  digitalWrite(rojo, LOW);
  digitalWrite(amarillo, LOW);
  digitalWrite(verde, HIGH);
  delay(3000);
  digitalWrite(rojo, LOW);
  digitalWrite(amarillo, HIGH);
  digitalWrite(verde, LOW);
  delay(3000);
}
