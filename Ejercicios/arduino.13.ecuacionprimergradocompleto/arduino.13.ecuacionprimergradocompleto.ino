//Ecuacion de primer grado verificando que a!=0
float a = 0; //se declara a de tipo float y con valor 0
float b = 0; //se declara b de tipo float y con valor 0
float x = 0; //se declara x de tipo float y con valor 0
int condicion = 0; //condicion que controla el flujo del programa

void setup() {              //esta funcion solo se ejecuta una sola vez
  Serial.begin(9600);       //configura el puerto serial a 9600 de velocidad
}

void loop() {
  Serial.println("");
  Serial.println("Ecuacion de primer grado ");
  Serial.println("ax+b=0 ");
  Serial.println("dame a : ");

  while (condicion == 0) {        //si se cumple la condicion cero entrar
    if (Serial.available() > 0) { //si hay dato en el serial entrar
      a = Serial.parseFloat();    //el valor de "a" en float.
      Serial.print("a = ");       //mostrar el valor de
      Serial.println(a);          //de la variable "a"
      Serial.println("dame b : ");
      condicion = 1;              //cambia la condicion por 1 para salir
    }
  }

  while (condicion == 1) {     //como ahora la condicion vale 1 se entra
    if (Serial.available() > 0) { //si hay  dato en el  serial, se entra
      b = Serial.parseFloat(); //se entra el valor de b tipo float 
      Serial.print("b = ");    //muestra el valor
      Serial.println(b);       //de la variable "b"
      condicion = 2;           //cambia la condicion por 2 para salir
    }
  }
  //salimos de los bucles while, verificar que a!=0
  if (a == 0) { //si a==0 , no tiene solucion o infinitas soluciones
    if (b == 0) {//si b=0 se tiene infinitas soluciones 
      Serial.println("La Ecuacion tiene infinitas soluciones");
      condicion = 0;
    }
    if (b != 0) {//si b tiene algun valor no se tiene solucion.
      Serial.println("La Ecuacion no tiene solucion");
      condicion = 0;  //se cambia la condicion y se regresa al inicio
    }

  }
  if (a != 0) {
    x = -1 * b / a; //se calcula "x" y se guarda en "x"
    Serial.print("x es: ");
    Serial.println(x);   //se muestra la variable x
    Serial.println("");
    condicion = 0;  //se cambia la condicion a 0 de esa manera se regresa al bucle inicial
  }
}
