void setup(){
  Serial.begin(9600); //Serial a 9600
}

void loop() {         //bucle loop
  int i = 2;          //i es entero valor 2
  int j = 3;          //j es entero valor 3
  int k;              //k es entero

  k = miFuncionMultiplicacion(i, j); // k=6, invoca funcion con parametros i,j
  Serial.println(k);                 // muestra k en serial
  delay(500);                        // retardo de medio segundo
}

int miFuncionMultiplicacion(int x, int y){ //definicion funcion
  int resultado;                           //resultado es entero
  resultado = x * y;                       //es producto de los parametros x y
  return resultado;                        //retorna un valor resultado
}

