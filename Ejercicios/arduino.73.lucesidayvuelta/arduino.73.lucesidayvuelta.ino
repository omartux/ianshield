int tiempo = 100; //variable entera de tiempo que retarda

void setup() {  //bucle for para configurar salidas

  for (int i = 0; i <= 7; i = i + 1) {
    pinMode(i, OUTPUT); //el for que configura las salidas
  }
}

void loop() {  //este bucle se repite siempre

  for (int i = 0; i <= 7; i = i + 1) { //for para prender y apagar
    digitalWrite(i, LOW); //apagar 1 a 1 las salidas
    delay(tiempo); //retardo de apagado
    digitalWrite(i, HIGH); //prender 1 a 1 las salidas
  }

}
