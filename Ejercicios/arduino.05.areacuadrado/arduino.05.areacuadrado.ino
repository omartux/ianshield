int lado = 5;                  //se declara la variable l de tipo entero y con valor 5 es el lado del cuadrado
int area = 0;                  //se declara la variable area de tipo entero y con valor 0

void setup() {                 //esta funcion solo se ejecuta una sola vez
  Serial.begin(9600);          //configura el puerto serial a 9600 de velocidad
  area = pow(lado, 2);         //la variable area se define como lado al cuadrado, el cuadrado es funcion pow()
  Serial.print("el area del cuadrado de lado "); 
  Serial.print(lado);          //se imprime la variable lado
  Serial.print(" es: ");       //
  Serial.println(area);        //se imprime la variable area 
}

void loop() {                  //esta funcion siempre se repite, ahora no la usamos

}
