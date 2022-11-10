int condicion = 0;  //control de flujo
int n = 0;        //declaracion variable decimal

void setup() {

  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Sumatoria Recursiva");
  Serial.println("Dame numero ");

}

void loop() { //repite continuamente

  while (condicion == 0) {  //condicion inicial

    if (Serial.available() > 0) { //si dato en serial entra
      n = Serial.parseInt(); //entra entero como n
      Serial.println(n);    //muestra valor de n
      condicion = 1;        //sale de condicion
    }

  }

  Serial.print("la sumatoria de "); Serial.print(n);
  Serial.print(" es "); Serial.println(sum(n));
  Serial.println("Dame numero n");
  condicion = 0;

}

int sum(int n) { //funcion recursiva de suma

  int resultado;
  if (n == 0) {
    resultado = 0;
  }
  else {
    if (n == 1) {
      resultado = 1;
    }
    else {
      resultado = n + sum(n - 1);
    }
  }
  return resultado;   //retornar el valor de resultado

}



