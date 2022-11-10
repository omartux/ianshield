int a = 500;        //declaracion a
int b = 218;        //declaracion b

void setup() {

  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Algoritmo de Euclides");
  Serial.print("de 500 y 218 es ");
  Serial.println(mcd(a,b)); //salida invocar funcion

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

