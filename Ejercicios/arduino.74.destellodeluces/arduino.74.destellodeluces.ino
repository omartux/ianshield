void setup() {
  for (int i = 0; i <= 7; i++) { // desde 0 a 7 como salidas
    pinMode(i, OUTPUT);
  }

}

void loop() {   //repite siempre

  for (int i = 0; i <= 7; i = i + 1) { //for desde 0 hasta 7
    digitalWrite(i, HIGH); //prende led
    delay(100);            //por 0.1 seg
    digitalWrite(i, LOW);  //apaga led
    delay(100);            //por 0.1 seg
  }

}
