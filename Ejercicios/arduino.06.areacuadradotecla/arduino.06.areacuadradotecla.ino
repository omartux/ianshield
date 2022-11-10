int lado = 0;  //se declara la variable lado tipo entero y valor 0
int area = 0;  //se declara la variable área tipo entero y valor 0

void setup() {  //esta función se ejecuta una sola vez

  Serial.begin(9600);  //configura puerto serial a 9600 de velocidad
  Serial.println("Calculando el Area de un Cuadrado");
  Serial.println("*********************************");
  Serial.println("");
  Serial.println("Dame el valor del lado: ");
}

void loop() {  //esta función siempre se repite

  if (Serial.available() > 0) {  //si hay dato en puerto serial entrar a
                                 //esta condicional Si---Entonces
    lado = Serial.parseInt();    //se aplica parseInt al puerto serial
                                 //se guarda dato en la variable "lado"
    Serial.print("lado = ");     //mostrar el valor
    Serial.println(lado);        //de la variable "lado"
    area = pow(lado, 2);         // potencia de 2 es funcion pow(lado,2)
    Serial.print("el area del cuadrado de lado ");
    Serial.print(lado);                          //se imprime la variable lado
    Serial.print(" es: ");                       //
    Serial.println(area);                        //se imprime la variable área
    Serial.println("");                          //línea en blanco
    Serial.println("Dame el valor del lado: ");  //muestra dame lado
                                                 //repite loop() esperando en puerto serial.
  }
}