int condicion = 0; //condicion control de flujo
int n = 0; //numero a leer

void setup() {
  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Calculo doble y triple, dame n");
}
void loop() {

  while (condicion == 0) {   //condicion inicial entra es 0
    if (Serial.available() > 0) {   //si hay dato en serial entra
      n = Serial.parseInt(); //lee el entero del serial
      Serial.println(n);  //muestra n
      condicion = 1;   //cambia condicion sale de bucle ya se tiene dato
    }
  }

  int dob = doble(n);
  int tri = triple(n);
  Serial.print("El doble es "); Serial.println(dob); //muestra la funcion doble del valor ingresado
  Serial.print("El triple es "); Serial.println(tri); //muestra la funcion doble del valor ingresado
  Serial.println("Calculo doble y triple , dame n");
  condicion = 0;            //cambia condicion regresar a bucle inicial

}

int doble(int x) { //define funcion de doble
  int d;       //tipo de dato de doble
  d = 2 * x;   //operacion de doble
  return d;    //devuelve valor de doble
}

int triple(int a) { //define funcion de doble
  int t;       //tipo de dato de triple
  t = 3 * a;   //operacion de triple
  return t;    //devuelve valor de doble
}
