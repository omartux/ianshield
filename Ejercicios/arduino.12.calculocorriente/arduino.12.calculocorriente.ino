//Calculo de la resistencia
float voltaje = 0;      //se declara voltaje de tipo float y con valor 0
float corriente = 0;    //se declara corriente de tipo float y con valor 0
float resistencia = 0;  //se declara resistencia de tipo float  con valor 0
int condicion = 0; //se declara la variable condicion la cual controlara el flujo del programa

void setup() {              //esta funcion solo se ejecuta una sola vez
  Serial.begin(9600);       //configura el puerto serial a 9600 de velocidad
}

void loop() {
  Serial.println("Calcular la corriente ");
  Serial.println("dame el voltaje ");

  while (condicion == 0) {        //si se cumple la condicion que es cero entrar a este bucle
    if (Serial.available() > 0) { //si hay algun dato en el puerto serial entrar a esta condicional if
      voltaje = Serial.parseFloat();    //el valor de voltaje en float.
      Serial.print("voltaje = ");       //mostrar el valor de
      Serial.println(voltaje);          //de la variable "voltaje"
      Serial.println("dame la resistencia: ");
      condicion = 1;              //cambia la condicion por 1 para salir del bucle while .
    }
  }

  while (condicion == 1) {        //como ahora la condicion vale 1 se entra a este bucle while
    if (Serial.available() > 0) { //verificamos si hay algun dato en el puerto serial, si hay se entra
      resistencia = Serial.parseFloat(); //se entra el valor de resistencia tipo float gracias a parseFloat()
      Serial.print("resistencia = ");    //muestra el valor
      Serial.println(resistencia);       //de la variable "resistencia"
      condicion = 2;              //despues de introducir el valor de "resistencia" cambia la condicion por 2 para salir
    }
  }
  // ya salimos de los bucles while ahora vamos a calcular la corriente.
  corriente = voltaje / resistencia; //se calcula el area y se guarda en la variable area
  Serial.print("la corriente es: ");
  Serial.println(corriente);            //se muestra la variable corriente
  Serial.println();
  Serial.println();
  condicion = 0;                   //se cambia la condicion a 0 de esa manera se regresa al bucle while inicial
}
