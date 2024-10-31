
void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT);
  Serial.begin(9600);

}

int valor_anterior = 0;//LOW
void loop() {
  // put your main code here, to run repeatedly:
  int button = digitalRead(4);

  if(valor_anterior == button){
    return;
  }

  valor_anterior = button;

  if(button==HIGH){
    Serial.println("ON");
    //...
  }else{
    Serial.println("OFF");
  }

}

/*
V = IxR

I = V/R

I = 5/10000 = 0.5 mA

pull-up? 1. ON 
Pull-down? 1. OFF

*/