//Sirena con bucle while
void setup() {
  pinMode(12, OUTPUT);          //pin12 salida
  for (int i = 0; i < 8; i++) { //pin0 al pin7
    pinMode(i, OUTPUT);         //salidas
  }
  Serial.end();
}
void loop() {

  int contador = 0;   //contador inicia en cero
  while (contador < 4000) { //contador cero menor a 4000
    tone(12, contador);     //generar tono en pin12, frecuencia contador
    PORTD = contador / 16;  //mostrar binario de contador/16
    contador = contador + 1; //incrementar contador en 1
  }
  //saliendo del bucle contador tiene 4000
  while (contador > 0) {    //contador mayor a cero
    tone(12, contador);     //generar tono en pin12 frecuencia contador
    PORTD = contador / 16;  //mostrar binario de contador/16
    contador = contador - 1; //decrementa contador en 1
  }
  //saliendo del bucle contador es cero y regresar a loop
}


