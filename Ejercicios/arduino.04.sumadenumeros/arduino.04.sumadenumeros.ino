int a = 3;                     //se declara la variable a de tipo entero y con valor 3
int b = 8;                     //se declara la variable b de tipo entero y con valor 8
int suma = 0;                  //se declara la variable suma de tipo entero y con valor 0, esto solo para reservar espacio de memoria

void setup() {                 //esta funcion solo se ejecuta una sola vez
  Serial.begin(9600);          //configura el puerto serial a 9600 de velocidad
}

void loop() {                  //esta funcion siempre se repite
  suma = a + b;                //la variable suma se define como a+b
  Serial.print("la suma de "); //se muestra el texto la suma de
  Serial.print(a);             //se imprime la variable a (que vale 3)
  Serial.print(" mas ");       //se muestra el texto mas
  Serial.print(b);             //se imprime la variable b (que vale 8)
  Serial.print(" es: ");       //se muestra el texto es:
  Serial.println(suma);        //se imprime la variable suma y se crea otra linea con println
}
