/*declaraciones*/
String entrada ;
String clave = "1234";
/*-------------*/

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 8; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(12, OUTPUT);
  Serial.println("Sistema Armado");
  Serial.println("Introduzca la Contrasena: ");
}

void loop() {

  if (Serial.available() > 0) {
    entrada = Serial.readString();
    entrada = entrada.toInt();
    Serial.print("clave es = ");
    Serial.println(entrada);
    if (entrada == clave) {
      Serial.print("exito, sistema desactivado");
      int contador = 0;
      while (contador < 2) { //while de 2 ciclos
        tone(12, 1000); //tono de 1K en buzzer 12
        delay(250);     //por 1/4 segundo
        noTone(12);     //apagar buzzer
        delay(250);     //por 1/4 segundo
        contador = contador + 1; //aumentar en 1
      }
    }
    else { //o si no te equivocaste
      Serial.print("error, alarma activada");
      Serial.end();
      alarma(); //ejecutar funcion alarma
    }
  }
}


void alarma() { //funcion de alarma
  while (1) { //bucle infinito, no tiene salida

    for (int i = 0; i < 8; i++) {//for 0 hasta el 7
      digitalWrite(i, HIGH); //encender las salidas 0-7
    }
    tone(12, 1500); //tone pin12 1500 hertz
    delay(1000);    //por un segundo

    for (int i = 0; i < 8; i++) {//for 0 hasta el 7
      digitalWrite(i, LOW); //apagar las salidas 0-7
    }
    tone(12, 500);//tone pin12 500 hertz
    delay(1000);  //por un segundo
  }
}
