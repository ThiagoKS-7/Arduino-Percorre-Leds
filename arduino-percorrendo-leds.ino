int PINOSLEDS[] = {7,6,5,4,3,2};
int PINOBOTAO = 1;
int leituraBotao = 0;
void setup() 
{
  for (int i=0; i < sizeof(PINOSLEDS); i ++) {
  	pinMode(PINOSLEDS[i], OUTPUT);
  }
  pinMode(PINOBOTAO, INPUT); //botao

}

void acendeLed(int pino) {
  digitalWrite(pino, HIGH);
  delay(40); 
}
void apagaLed(int pino) {
  digitalWrite(pino, LOW);
  delay(40); 
}
void percorreLeds(char value[]) {
	for (int i=0; i < sizeof(PINOSLEDS); i ++) {
      if (value == "acende") {
        acendeLed(PINOSLEDS[i]);
      } else {
        apagaLed(PINOSLEDS[i]);
      }
    }
}
void fazAOnda() {
  percorreLeds("acende");
  percorreLeds("apaga");
}

void loop() 
{
  leituraBotao = digitalRead(PINOBOTAO);
  
    if(leituraBotao == HIGH)
  {
      fazAOnda();  
  }

}
