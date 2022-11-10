//Compara edades
int luis = 0;       //se declara a luis de tipo entero y con valor 0
int miguel = 0;     //se declara a miguel de tipo entero y con valor 0
int condicion = 0;  //condicion la cual controla el flujo del programa

void setup() {                    //esta funcion solo se ejecuta una sola vez
  Serial.begin(9600);             //configura el puerto serial a 9600 de velocidad
}

void loop() {
  Serial.println("");
  Serial.println("Compara edades");
  Serial.println("dame la edad de luis: ");

  while (condicion == 0) {        //se cumple la condicion que es cero entrar a este bucle
    if (Serial.available() > 0) { //si hay dato en el  serial entrar a esta condicional if
      luis = Serial.parseInt();   //la edad de luis es un entero.
      Serial.print("la edad de luis es = ");   //mostrar el valor
      Serial.println(luis);       //de la variable "luis"
      Serial.println("dame la edad de miguel: ");
      condicion = 1;              //cambia la condicion por 1 para salir.
    }
  }

  while (condicion == 1) {        //como ahora la condicion vale 1 se entra a este bucle while
    if (Serial.available() > 0) { //verificamos si hay  dato en el  serial, se entra a esta condicion
      miguel = Serial.parseInt();      //se entra la edad de miguel tipo int
      Serial.print("la edad de miguel es = ");       //muestra el valor
      Serial.println(miguel);          //de la variable "miguel"
      condicion = 2;              //cambia la condicion por 2 para salir de este bucle while.
    }
  }

  if (luis > miguel) {
    Serial.println("Luis es mayor que Miguel");
  }
  if (luis < miguel) {
    Serial.println("Luis es menor que Miguel");
  }
  if (luis == miguel) {
    Serial.println("Luis y Miguel tienen la misma edad");
  }

  condicion = 0;                  //se cambia la condicion a 0 de esa manera se regresa al bucle inicial
}
