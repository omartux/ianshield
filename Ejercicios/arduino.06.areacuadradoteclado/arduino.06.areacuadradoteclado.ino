int lado = 0;                  //se declara la variable lado de tipo entero y con valor 0 
int area = 0;                  //se declara la variable area de tipo entero y con valor 0

void setup() {                 //esta funcion solo se ejecuta una sola vez

  Serial.begin(9600);          //configura el puerto serial a 9600 de velocidad
  Serial.println("Calculando el Area de un Cuadrado");
  Serial.println("*********************************");
  Serial.println("");
  Serial.println("Dame el valor del lado: ");
}

void loop() {                  //esta funcion siempre se repite

  if (Serial.available() > 0) { //si hay algun dato en el puerto serial entrar a esta condicional Si---Entonces
    lado = Serial.parseInt();      //se aplica la funcion parseInt al puerto serial y se guarda el dato en la variable "lado"
    Serial.print("lado = ");       //mostrar el valor
    Serial.println(lado);          //de la variable "lado"
    area = pow(lado, 2);         //la variable area se define como lado al cuadrado, las potencias son con funcion pow(base,potencia)
    Serial.print("el area del cuadrado de lado ");
    Serial.print(lado);          //se imprime la variable lado
    Serial.print(" es: ");       //
    Serial.println(area);        //se imprime la variable area
    Serial.println("");          //linea en blanco
    Serial.println("Dame el valor del lado: "); //muestra mensaje para pedir lado y repite loop() esperando algo en el puerto serial.
  }
}
