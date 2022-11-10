int condicion = 0; //condicion control de flujo
int n = 0; //numero a leer

void setup() {
  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Calculo sumatorias usando funciones");
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

  Serial.println(sumatoria(n)); //muestra la funcion doble del valor ingresado
  Serial.println("Calculo sumatorias usando funciones");
  Serial.println("Dame n");
  condicion = 0;            //cambia condicion regresar a bucle inicial

}

int sumatoria(int x) { //define funcion de sumatoria
  int sumatoria = 0;      //tipo de dato de sumatoria

  for (int i = 1; i <= x; i = i + 1) { //for para iterar la suma
    sumatoria = sumatoria + i;         //se acumula la sumatoria
  }

  return sumatoria;    //devuelve valor de sumatoria
}

