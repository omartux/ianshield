int dato = 0; //declaracion de dato a leer
int pin = 3;  //pin analogico a usar (tambien puede ser el 4)

void setup() {//funcion setup solo corre una vez

  Serial.begin(9600); //puerto serial a 9600 velocidad

}

void loop() {  //bucle loop se repite siempre
  
  dato = analogRead(pin); //leer analogico en "pin", guardar en "dato"
  Serial.println(dato);   //salida de "dato" por puerto serial
  delay(100); //retardo de 100 milis para estabilizar la medida

}
