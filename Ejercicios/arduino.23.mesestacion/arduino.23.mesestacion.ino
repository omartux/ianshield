int mes = 0; //variable de mes entero

void setup() {
  Serial.begin(9600); //velocidad serial a 9600
  Serial.println("Digo en que estacion estamos");
  Serial.println("Dame mes (1-12)");
}

void loop() {
  if (Serial.available() > 0) { //si hay dato en serial entrar
    mes = Serial.parseInt();    //entero en serial es mes
    Serial.println(mes);
    if (mes < 1 or mes > 12) {  //menor a 0 , mayor a 12 no existe
      Serial.println("Ese mes no existe");
    }
    if (mes > 0 and mes < 4) {  //si esta entre 1 y 4 es verano
      Serial.println("Estamos en verano");
    }
    if (mes > 3 and mes < 7) {  //si esta entre 4 y 6 es otono
      Serial.println("Estamos en otono");
    }
    if (mes > 6 and mes < 10) { //si esta entre 7 y 9 es invierno
      Serial.println("Estamos en invierno");
    }
    if (mes > 9 and mes < 13) { //si esta entre 10 y 12 es primavera
      Serial.println("Estamos en primavera");
    }
    Serial.println("Dame mes (1-12)");
  }
}

