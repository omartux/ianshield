//Calculo del area de un triagulo
int base = 0;                     //se declara la variable a de tipo entero y con valor 0
int altura = 0;                     //se declara la variable b de tipo entero y con valor 0
float area = 0;                  //se declara la variable suma de tipo float  con valor 0
int condicion = 0;             //se declara la variable condicion la cual controlara el flujo del programa

void setup() {                    //esta funcion solo se ejecuta una sola vez
  Serial.begin(9600);             //configura el puerto serial a 9600 de velocidad
}

void loop() {
  Serial.println("Hallar el area de un triangulo");
  Serial.println("dame la base del triangulo: ");

  while (condicion == 0) {        //si se cumple la condicion que es cero entrar a este bucle
    if (Serial.available() > 0) { //si hay algun dato en el puerto serial entrar a esta condicional if
      base = Serial.parseInt();      //el valor de base es un "parse" entero, es decir podemos darle valores enteros int.
      Serial.print("base = ");       //mostrar el valor
      Serial.println(base);          //de la variable "a"
      Serial.println("dame la altura del triangulo: ");
      condicion = 1;              //despues de introducir el valor de "a" cambia la condicion por 1 para salir del bucle while .
    }
  }

  while (condicion == 1) {        //como ahora la condicion vale 1 se entra a este bucle while
    if (Serial.available() > 0) { //verificamos si hay algun dato en el puerto serial, si hay se entra a esta condicion
      altura = Serial.parseInt();      //se entra el valor de altura tipo int gracias a parseInt()
      Serial.print("altura = ");       //muestra el valor
      Serial.println(altura);          //de la variable "altura"
      condicion = 2;              //despues de introducir el valor de "b" cambia la condicion por 2 para salir de este bucle while.
    }
  }
  // ya salimos de los bucles while ahora vamos a calcular el area.
  area = float(base) * float(altura) / 2;    //se calcula el area y se guarda en la variable area
  Serial.print("el area del triangulo es: ");
  Serial.println(area);           //se muestra la variable area
  Serial.println();
  Serial.println();
  condicion = 0;                  //se cambia la condicion a 0 de esa manera se regresa al bucle while donde se pide el valor de base
}
