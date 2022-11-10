int tiempo = 100; //tiempo de retardo en milis

void setup() {    //setup corre una vez

  int contador = 0; //variable contador auxiliar
  while (contador < 8) {
    pinMode(contador, OUTPUT);
    contador = contador + 1;
  }

  Serial.end(); //da de baja el puerto serie para usar pines 0 y 1
}

void loop() {                 //se repite siempre el loop

  int x = 0;                  //contador auxiliar x=0
  while (x < 7) {             //si 0<7 entrar
    digitalWrite(x, HIGH);    //encender x
    delay(tiempo);            //pot tiempo en milis
    digitalWrite(x, LOW);     //apagar leds
    x = x + 1;                //aumentar x en 1
  }

  int y = 7;                  //contador auxiliar y=0
  while (y > 0) {             //si 7>0 entrar
    digitalWrite(y, HIGH);    //encender y
    delay(tiempo);            //por tiempo milis
    digitalWrite(y, LOW);     //apagar y
    y = y - 1;                //restar y en 1
  }

}

