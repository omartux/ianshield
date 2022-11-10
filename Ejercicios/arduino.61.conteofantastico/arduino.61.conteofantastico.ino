void setup() {
  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Calculo area, perimetro y volumen");
  Serial.println("Dame lado");
}
void loop() {
  arriba();
  abajo();

}

void arriba() {   //definicion de funcion de area
  for (int i = 1; i <= 9; i = i + 1) {
    Serial.println(i);
    delay(1000);
  }
}

void abajo() {   //definicion de funcion de perimetro
  for (int i = 9; i <= 1; i = i - 1) {
    Serial.println(i);
    delay(1000);
  }
}


