int condicion = 0; //condicion control de flujo
int a = 0; //primer a
int b = 0; //segundo b

void setup() {
  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Calculo 2*a + 3*b");
  Serial.println("Dame a");
}
void loop() {

  while (condicion == 0) {   //condicion inicial entra es 0
    if (Serial.available() > 0) {   //si hay dato en serial entra
      a = Serial.parseInt(); //lee el entero del serial
      Serial.println(a);  //muestra a
      Serial.println("Dame b");  //pide nombre 2
      condicion = 1;   //cambia condicion sale de bucle ya se tiene dato
    }
  }

  while (condicion == 1) {   //condicion inicial entra es 1
    if (Serial.available() > 0) {   //si hay dato en serial entra
      b = Serial.parseInt(); //lee el entero del serial
      Serial.println(b);  //muestra b
      condicion = 2;   //cambia condicion sale de bucle ya se tiene dato
    }
  }

  Serial.print("2a + 3b = ");
  Serial.println(patito(a, b));
  Serial.println("Dame a");
  condicion = 0;

}

int patito(int j, int k) {   //definicion de funcion de saludo a
  int patito = 2 * j + 3 * k;
  return patito;
}


