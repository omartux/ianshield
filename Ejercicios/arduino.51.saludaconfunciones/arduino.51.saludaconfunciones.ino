int condicion = 0;
String nombre = "alguien";
void setup() {
  Serial.begin(9600);
  Serial.println("Cual es tu nombre?");
}
void loop() {

  while (condicion == 0) {   //condicion inicial entra es 0
    if (Serial.available() > 0) {   //si hay dato en serial entra
      nombre = Serial.readString(); //lee el string del serial
      condicion = 1;
    }
  }

  saludo();      //invoca funcion de saludo
  Serial.println(nombre);  //muestra variable nombre
  Serial.println("Cual es tu nombre?"); //repite pide nombre
  condicion = 0; //cambia condicion para recibir nombre con while

}

void saludo() { //define funcion de saludo
  Serial.print("Hola ");
}

