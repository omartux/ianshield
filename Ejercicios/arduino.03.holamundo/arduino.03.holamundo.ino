void setup() {            //esta funcion solo se ejecuta una sola vez
  pinMode(13, OUTPUT);    //configura PIN13 como salida
}

void loop() {             //esta funcion siempre se repite
  digitalWrite(13, HIGH); //salida digital 13 encendido
  delay(100);             //retardo de 100 milisegundos
  digitalWrite(13, LOW);  //salida digital 13 apagado
  delay(100);             //retardo de 100 milisegundos
}
