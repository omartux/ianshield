int a = 0;        //declaracion a
int b = 0;        //declaracion b
int condicion = 0;    //control flujo

void setup() {

  Serial.begin(9600); //velocidad serial 9600
  Serial.println("MCD");
  Serial.print("Dame el numero a ");
  while (condicion == 0) { //condicion inicial
    if (Serial.available() > 0) { //si dato en serial entrar
      a = Serial.parseInt(); //dato entero en a
      Serial.println(a);
      Serial.print("Dame el numero b ");
      condicion = 1;        //cambiar de bucle

    }

  }

  while (condicion == 1) {  //otro while para entrada de b
    if (Serial.available() > 0) {
      b = Serial.parseInt(); //dato entero en b
      Serial.println(b);
      condicion = 2;        //salir de bucle

    }

  }

  int x = mcd(a, b);        //invoca la funcion de MCD
  Serial.print("El MCD es ");
  Serial.println(x);
  Serial.println("Dame el numero a");
  condicion = 0;

}

void loop() { //no se usa

}

int mcd(int m, int n) { //funcion recursiva de mcd
  int maxcomdiv;
  int mayor;
  int menor;
  int resto;
  menor = mini(m, n);
  mayor = maxi(m, n);
  resto = mayor % menor;
  if (resto == 0) { //evalua si es igual a 0
    maxcomdiv = menor;
  }
  else {
    maxcomdiv = mcd(menor, resto);
  }
  return maxcomdiv;    //retorna valor mcd de la funcion

}

int mini(int a, int b) {
  int minimo;
  if (a < b) {
    minimo = a;
  }
  else {
    minimo = b;
  }
  return minimo;
}

int maxi(int a, int b) {
  int maximo;
  if (a > b) {
    maximo = a;
  }
  else {
    maximo = b;
  }
  return maximo;
}

