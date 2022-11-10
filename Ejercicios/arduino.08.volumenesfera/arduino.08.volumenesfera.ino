//De sexagesimales a radianes
int angulo = 0;                   //variable angulo tipo entero de valor 0
float radianes = 0;               //variable radianes tipo float (con decimales) y valor 0
void setup() {                   //esta funcion solo se ejecuta una sola vez
  Serial.begin(9600);            //configura el puerto serial a 9600 de velocidad
  Serial.println("Convertir de Sexagesimales a Radianes");
  Serial.println("");
  Serial.println("Dame el angulo en sexagesimales");
}

void loop() {                    //esta funcion siempre se repite

  if (Serial.available() > 0) {  //si hay algun dato en el puerto serial entrar a esta condicional
    angulo = Serial.parseInt();   //se aplica parseInt() al  serial y se guarda en variable "angulo"
    radianes = (2 * 3.14159264 / 360) * angulo; // se aplica formula razon de conversion de (2*3.14159264/360)
    Serial.print("el angulo ");
    Serial.print(angulo);
    Serial.print(" en radianes es ");
    Serial.println(radianes);     //mostrar el angulo en radianes
    Serial.println("");
    Serial.println("Dame el angulo en sexagesimales");
  }
}
