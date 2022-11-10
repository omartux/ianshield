int x = 0;   //numero x que se genera al azar
int n = 0;   //numero que ingresar a la loteria
int i = 0;   //numero de intentos usados actualmente en 0

void setup() {
  Serial.begin(9600); //velocidad serial
  randomSeed(11);     //semilla de azar, cambias este valor para generar azar
  x = random(3);      //numero al azar
  Serial.println("Adivina hasta 3?");

  do                  //inicio de bucle do--while
  {

    if (Serial.available() > 0) { //si dato en serial se entra
      n = Serial.parseInt();      //dato en serial entero en n
      Serial.println(n);
      i = i + 1;                  //aumenta en 1 los intentos
    }

  } while (x != n); //si x es igual a n se sale de bucle do-while

  Serial.print("Adivinaste el numero era ");   //sales de bucle y adios
  Serial.println(x);   //sales de bucle y adios
  Serial.print("Numero de Intentos : ");
  Serial.println(i);
}

void loop() {              //no usamos loop para que el programa tenga fin
}





