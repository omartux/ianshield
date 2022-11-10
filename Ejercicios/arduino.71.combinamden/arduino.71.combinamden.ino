int condicion = 0;  //control de flujo
int n = 0;        //declaracion variable n
int m = 0;        //declaracion variable m
int c = 0;        //combinaciones posibles
void setup() {

  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Numero de Combinaciones ");
  Serial.println("Dame numero n");

}

void loop() { //repite continuamente

  while (condicion == 0) {  //condicion inicial

    if (Serial.available() > 0) { //si dato en serial entra
      n = Serial.parseInt(); //entra entero como n
      Serial.println(n);    //muestra valor de n
      condicion = 1;        //sale de condicion
    }

  }

  while (condicion == 1) {  //condicion inicial

    if (Serial.available() > 0) { //si dato en serial entra
      m = Serial.parseInt(); //entra entero como m
      Serial.println(m);    //muestra valor de m
      condicion = 2;        //sale de condicion
    }

  }
  c = fact(n) / (fact(n - m) * fact(m)); //formula de combinatoria
  Serial.print("Cominaciones posibles de "); Serial.print(m);
  Serial.print(" en "); Serial.print(n); Serial.print(" son ");
  Serial.println(c);
  Serial.println("Dame numero n");
  condicion = 0;

}

int fact(int x) { //funcion recursiva de factorial

  int resultado;
  if (x <= 1) {
    resultado = 1;
  }
  else {
    resultado = x * fact(x - 1); //se llama a si misma
  }
  return resultado;   //retornar el valor de resultado

}



