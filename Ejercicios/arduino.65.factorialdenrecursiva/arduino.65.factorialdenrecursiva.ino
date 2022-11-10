int condicion = 0;  //control de flujo
int n = 0;        //declaracion variable decimal

void setup() {

  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Factorial Recursiva");
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

  Serial.print("el factorial de "); Serial.print(n);
  Serial.print(" es "); Serial.println(fact(n));
  Serial.println("Dame numero n");
  condicion = 0;

}

int fact(int x) { //funcion recursiva

  int resultado;
  if (x <= 1) {
    resultado = 1;
  }
  else {
    resultado = x * fact(x - 1); //se llama a si misma
  }
  return resultado;   //retornar el valor de resultado

}



