int tiempo = 100; //100 milisegundos de variable tiempo

void setup() {    //bucle de configuracion corre una vez
  for (int i = 0; i <= 7; i++) { // desde 0 a 7 como salidas
    pinMode(i, OUTPUT);          //definidos con un bucle for
  }

}

void loop() {   //repite siempre bicle loop()

  for (int i = 0; i <= 7; i = i + 1) { //for desde 0 hasta 7. incremento
    digitalWrite(i, HIGH); //prende led
    delay(tiempo);            //por 'tiempo' segundos
    digitalWrite(i, LOW);  //apaga led
    delay(tiempo);            //por 'tiempo' seg
  }

  for (int i = 7; i >= 0; i = i - 1) { //for desde 7 hasta 0. decremento
    digitalWrite(i, HIGH); //prende led
    delay(tiempo);            //por 'tiempo' seg
    digitalWrite(i, LOW);  //apaga led
    delay(tiempo);            //por 'tiempo' seg
  }

}
