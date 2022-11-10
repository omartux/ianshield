int condicion = 0; //condicion control de flujo
int n = 0; //numero a leer

void setup() {
  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Calculo doble, dame n");
}
void loop() {

  while (condicion == 0) {   //condicion inicial entra es 0
    if (Serial.available() > 0) {   //si hay dato en serial entra
      n = Serial.parseInt(); //lee el entero del serial
      Serial.println(n);  //muestra n
      condicion = 1;   //cambia condicion sale de bucle ya se tiene dato
    }
  }

  Serial.println(doble(n)); //muestra la funcion doble del valor ingresado
  Serial.println("Calculo doble, dame n");
  condicion = 0;            //cambia condicion regresar a bucle inicial

}

int doble(int x) { //define funcion de doble
  int doble;       //tipo de dato de doble
  doble = 2 * x;   //operacion de doble
  return doble;    //devuelve valor de doble
}

