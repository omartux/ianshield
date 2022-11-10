int condicion = 0; //condicion control de flujo
int lado = 0; //lado cuadrado o cubo

void setup() {
  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Calculo area, perimetro y volumen");
  Serial.println("Dame lado");
}
void loop() {

  while (condicion == 0) {   //condicion inicial entra es 0
    if (Serial.available() > 0) {   //si hay dato en serial entra
      lado = Serial.parseInt(); //lee el entero del serial
      Serial.println(lado);  //muestra lado
      condicion = 1;   //cambia condicion sale de bucle ya se tiene dato
    }
  }

  Serial.print("Area ");  Serial.println(area(lado));
  Serial.print("Perimetro ");  Serial.println(perimetro(lado));
  Serial.print("Volumen ");  Serial.println(volumen(lado));
  Serial.println("Dame lado");
  condicion = 0;

}

int area(int x) {   //definicion de funcion de area
  int area = x * x;
  return area;
}

int perimetro(int x) {   //definicion de funcion de perimetro
  int perimetro = 4 * x;
  return perimetro;
}

int volumen(int x) {   //definicion de funcion de volumen
  int volumen = x * x * x;
  return volumen;
}
