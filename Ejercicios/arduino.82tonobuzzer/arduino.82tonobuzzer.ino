void setup() {   //configuracion
  pinMode(12, OUTPUT); //pin12 es salida
}

void loop() {    //se repite siempre
  tone(12, 1000, 1000); //tono de 1kh en pin12 por 1 seg
  delay(1000);     //no hacer nada 1 seg
  noTone(12);      //apagar tono
  delay(1000);     //no hacer nada 1 seg, y regresar al loop
}
