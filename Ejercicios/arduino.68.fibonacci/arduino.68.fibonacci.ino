int condicion = 0;  //control de flujo
int n = 0;        //declaracion variable n

void setup() {

  Serial.begin(9600); //velocidad serial 9600
  Serial.println("***Fibonacci***");
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

  Serial.print("Fibonacci de "); Serial.print(n);
  Serial.print(" es "); Serial.println(fibonacci(n)); //salida invocar funcion
  Serial.println("Dame numero ");
  condicion = 0;

}

int fibonacci(int x) { //funcion recursiva de fibonacci
  int ff;
  if (x == 1 || x == 2) { //condicion or
    ff = 1;
  }
  else {
    ff = fibonacci(x - 1) + fibonacci(x - 2); //se llama a si mismo
  }
  return ff;    //retorna valor ff de la funcion
}
