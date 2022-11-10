int izquierda = 7; //led indicador izquierda
int derecha = 6; //led indicador derecha
int ldr1 = 3;  //sensor ldr1
int ldr2 = 4;  //sensor ldr2
int condicion = 0; //variable condicion control de flujo

void setup() { //funcion setup solo corre una vez
  Serial.begin(9600); //perto serial a 9600
  pinMode(izquierda, OUTPUT); //izquierda es salida
  pinMode(derecha, OUTPUT); //derecha es salida

}

void loop() {  //bucle loop se repite siempre

  int a = analogRead(ldr1); //a es valor de ldr1
  int b = analogRead(ldr2); //b es valor de ldr2

  if (condicion == 0) { //condicion por defecto
    digitalWrite(izquierda, LOW); //todo apagado
    digitalWrite(derecha, LOW);

  }

  if (condicion == 1) { //si condicion es 1
    digitalWrite(izquierda, LOW);//encender led 6
    digitalWrite(derecha, HIGH);
    Serial.println("derecha");

  }

  if (condicion == 2) { //si condicion es 2
    digitalWrite(izquierda, HIGH);
    digitalWrite(derecha, LOW);//encender led 7
    Serial.println("izquierda");

  }

  if ((a - b) > 30) {//si la resta de sensores<30
    condicion = 1;
  }

  if ((a - b) < -30) {//si la resta de sensores<30
    condicion = 2;
  }

  if (abs(a - b) < 20 ) {//si absoluto de la resta<30 apagar todo
    condicion = 0;       //verificar mediante pruebas
  }
  delay(100);
}
