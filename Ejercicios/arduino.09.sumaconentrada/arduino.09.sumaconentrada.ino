int a = 0;                     //se declara la variable a de tipo entero y con valor 0
int b = 0;                     //se declara la variable b de tipo entero y con valor 0
int suma = 0;                  //se declara la variable suma de tipo entero  con valor 0
int condicion = 0;             //se declara la variable condicion la cual controlara el flujo del programa

void setup() {                    //esta funcion solo se ejecuta una sola vez
  Serial.begin(9600);             //configura el puerto serial a 9600 de velocidad
}

void loop() {
  Serial.println("Sumando dos numeros");
  Serial.println("dame el valor de a: ");

  while (condicion == 0) {        //si se cumple la condicion que es cero entrar a este bucle
    if (Serial.available() > 0) { //si hay algun dato en el puerto serial entrar a esta condicional if
      a = Serial.parseInt();      //el valor de a es un "parse" entero, es decir podemos darle valores enteros int.
      Serial.print("a = ");       //mostrar el valor
      Serial.println(a);          //de la variable "a"
      Serial.println("dame el valor de b: ");
      condicion = 1;              //despues de introducir el valor de "a" cambia la condicion por 1 para salir del bucle while .
    }
  }

  while (condicion == 1) {        //como ahora la condicion vale 1 se entra a este bucle while
    if (Serial.available() > 0) { //verificamos si hay algun dato en el puerto serial, si hay se entra a esta condicion
      b = Serial.parseInt();      //se entra el valor de b tipo dato int gracias a la funcion parseInt()
      Serial.print("b = ");       //muestra el valor
      Serial.println(b);          //de la variable "b"
      condicion = 2;              //despues de introducir el valor de "b" cambia la condicion por 2 para salir de estebucle while.
    }
  }
  // ya salimos de los bucles while ahora vamos a calcular la suma.
  suma = a + b;                   //se calcula la suma y se guarda en la variable suma
  Serial.print("la suma de a +  b es: ");
  Serial.println(suma);           //se muestra la variable suma
  Serial.println();
  Serial.println();
  condicion = 0;                  //se cambia la condicion a 0 de esa manera se regresa al bucle while donde se pide el valor de a
}
