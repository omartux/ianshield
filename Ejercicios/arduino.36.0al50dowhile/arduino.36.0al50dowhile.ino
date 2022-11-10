int i = 1;   //numero i inicia en 1

void setup() {
  Serial.begin(9600); //velocidad serial
  do                  //inicio de bucle do--while
  {
    Serial.println(i);
    i = i + 1;        //contador
  } while (i <= 50);  //si i>50 acaba el bucle do-while

  Serial.println("Fin del Proceso");   //sales de bucle y adios
}

void loop() {              //no usamos loop para que el programa tenga fin
}





