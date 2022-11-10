void setup() {
  Serial.begin(9600);             //velocidad serial 9600
  for (int i = 1; i <= 50; i++) { //desde un inicio i=1 hasta 50 incrementa i++
    Serial.println(i);            //salida numero i
  }
  Serial.println("Fin del proceso"); //al final del for muestra este mensaje
}

void loop() {              //no usamos loop
}





