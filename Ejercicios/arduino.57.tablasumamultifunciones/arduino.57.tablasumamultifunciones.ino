int condicion = 0; //condicion control de flujo
int n = 0; //numero a leer

void setup() {
  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Tabla de sumas y multiplicaciones");
  Serial.println("Dame n");
}
void loop() {

  while (condicion == 0) {   //condicion inicial entra es 0
    if (Serial.available() > 0) {   //si hay dato en serial entra
      n = Serial.parseInt(); //lee el entero del serial
      Serial.println(n);  //muestra n
      condicion = 1;   //cambia condicion sale de bucle ya se tiene dato
    }
  }

  sumar(n);       //invoca funcion tabla de +
  multiplicar(n); //invoca funcion tabla de x

  Serial.println("Tabla de sumas y multiplicaciones");
  Serial.println("Dame n");
  condicion = 0;            //cambia condicion regresar a bucle inicial

}

int sumar(int x) { //define funcion de sumar

  for (int i = 1; i <= 9; i = i + 1) {
    Serial.print(x); Serial.print(" + "); Serial.print(i);
    Serial.print(" = "); Serial.println(x + i); //arma la tabla
  }

}

int multiplicar(int y) { //define funcion de multiplicar

  for (int i = 1; i <= 9; i = i + 1) {
    Serial.print(y); Serial.print(" x "); Serial.print(i);
    Serial.print(" = "); Serial.println(y * i); //arma la tabla
  }

}
