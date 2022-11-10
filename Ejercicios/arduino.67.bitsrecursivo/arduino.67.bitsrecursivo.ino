int condicion = 0;  //control de flujo
int n = 0;        //declaracion variable decimal

void setup() {

  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Bits Necesarios Recursivo");
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

  Serial.print("Numero bits necesarios para "); Serial.print(n);
  Serial.print(" son "); Serial.println(bits(n));
  Serial.println("Dame numero ");
  condicion = 0;

}

int bits(int x) { //funcion recursiva de suma

  int resultado;
  if (x == 0 || x == 1) {
    resultado = 1;
  }
  else {
    resultado = 1 + bits(int(x / 2));
  }
  return resultado;   //retornar el valor de resultado

}



