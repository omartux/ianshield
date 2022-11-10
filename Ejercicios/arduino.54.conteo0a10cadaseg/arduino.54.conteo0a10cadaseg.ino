void setup() {                  //funcion setup() se ejecuta una vez
  Serial.begin(9600);               //serial a 9600
  Serial.println("Cuento del 1 al 10");

  for (int i = 0; i <= 10; i = i + 1) {  //variable i iterar de for
    Serial.println(i);          //muestra la variable i
    delay(1000);                //retraso de 1 seg
  }

  Serial.println("Fin del proceso");
}

void loop() {
}
