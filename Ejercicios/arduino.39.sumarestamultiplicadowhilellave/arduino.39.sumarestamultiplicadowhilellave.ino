int a = 0;       //numero a
int b = 0;       //numero b
int suma = 0;    //variable de suma
int resta = 0;   //variable de resta
int multiplica = 0;    //variable de multiplicacion
char llave = '0';   //numero de intentos usados actualmente en 0
int condicion = 0;  //para controlar el flujo del programa

void setup() {
  Serial.begin(9600); //velocidad serial

  do                  //inicio de bucle do--while
  {
    Serial.println("Suma, resta multiplicacion de a y b ");
    Serial.println("Dame a : ");

    while (condicion == 0) { //condicion inicial
      if (Serial.available() > 0) { //si dato en serial entrar
        a = Serial.parseInt();      //dato en serial es a
        Serial.print("a = ");
        Serial.println(a);
        Serial.println("Dame b: ");
        condicion = 1;              //cambiar condicion para salir
      }
    }

    while (condicion == 1) { //condicion actual
      if (Serial.available() > 0) { //si dato en serial entrar
        b = Serial.parseInt();      //dato en serial es b
        Serial.print("b = ");
        Serial.println(b);
        condicion = 2;              //cambiar condicion para salir
      }
    }

    suma = a + b;
    resta = a - b;
    multiplica = a * b;
    Serial.print("a+b es ");
    Serial.println(suma);      //muestra suma
    Serial.print("a-b es ");
    Serial.println(resta);      //muestra resta
    Serial.print("a*b es ");
    Serial.println(multiplica);      //muestra multiplica
    Serial.println("presione 'x' para salir");
    Serial.println("cualquier tecla para continuar");
    condicion = 3;
    while (condicion == 3) {
      if (Serial.available() > 0) { //si dato en serial entrar
        llave = Serial.read();      //tipo char en serial es comando
        Serial.print("escogio ");
        Serial.println(llave);
        if (llave == 'x') {         //si comando es q entrar
          llave = 'x';              //cambiar comando por 'q'
          condicion = 4;              //cambiar condicion para salir de bucle
        }
        if (llave != 'x') {         //si es cualquier tecla
          Serial.println("Seguimos operando...");
          condicion = 0;              //regresar al inicio por condicion cero
        }
      }
    }
  } while (llave != 'x'); //se sale de do-while si llave es 'x'

  Serial.println("Fin del programa...");   //adios
}

void loop() {              //no usamos loop para que el programa tenga fin
}





