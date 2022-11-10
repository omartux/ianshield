int condicion = 0; //condicion control de flujo
String nombre1 = "0"; //primer nombre
String nombre2 = "0"; //segundo nombre

void setup() {
  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Hago saludos");
  Serial.println("Dame nombre1");
}
void loop() {

  while (condicion == 0) {   //condicion inicial entra es 0
    if (Serial.available() > 0) {   //si hay dato en serial entra
      nombre1 = Serial.readString(); //lee el texto del serial
      Serial.println(nombre1);  //muestra texto
      Serial.println("dame nombre2");  //pide nombre 2
      condicion = 1;   //cambia condicion sale de bucle ya se tiene dato
    }
  }

  while (condicion == 1) {   //condicion inicial entra es 1
    if (Serial.available() > 0) {   //si hay dato en serial entra
      nombre2 = Serial.readString(); //lee el texto del serial
      Serial.println(nombre2);  //muestra texto
      condicion = 2;   //cambia condicion sale de bucle ya se tiene dato
    }
  }

  saludoa(nombre1, nombre2); //invoca funcion de saludo a
  saludob(nombre1, nombre2); //invoca funcion de saludo b
  Serial.println("dame nombre1"); //pide nombre1
  condicion = 0;             //cambia condicion para reiniciar programa

}

void saludoa(String x, String y) {   //definicion de funcion de saludo a
  Serial.print("Hola "); Serial.print(x); Serial.print(" de parte de "); 
  Serial.println(y);
}

void saludob(String x, String y) {   //definicion de saludo b
  Serial.print("Hola "); Serial.print(y); Serial.print(" de parte de "); 
  Serial.println(x);
}
