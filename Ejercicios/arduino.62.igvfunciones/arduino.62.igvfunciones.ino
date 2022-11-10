int condicion = 0;
float x = 0;

void setup() {
  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Calculo IGV y Valor de Venta");
  Serial.print("Dame costo total");
}

void loop() { //repite continuamente
  while (condicion == 0) {
    if (Serial.available() > 0) {
      x = Serial.parseFloat();
      Serial.println(x);
      condicion = 1;
    }

  }

  Serial.print("Valor de venta = ");
  Serial.println(vventa(x)); //imprime la invocacion de vventa()

  Serial.print("IGV = ");
  Serial.println(igv(x));    //imprime la invocacion de igv()

  Serial.println("Dame costo total");
  condicion = 0;         //reinicia la condicion para pedir dato
}

float vventa(float n) {   //definicion de funcion de vventa
  float vventa = n / 1.18; //valor de venta es costo/1.18
  return vventa;
}

float igv(float n) {   //definicion de funcion de igv
  float igv = vventa(n) * 0.18; //igv es valor de venta * 0.18
  return igv;
}


