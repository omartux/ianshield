int i = 0;         //declara contador i
int sumatorio = 0; //declara el valor de la sumatoria

void setup() {
  Serial.begin(9600); //velocidad serial
  Serial.println("Hago sumatoria hasta 50 ");
  Serial.println("");
  while (i <= 50) {            //contador inicia en 0 hasta 50
    sumatorio = sumatorio + i; //se acumula la suma
    i = i + 1;                 //el contador i se incrementa en 1
  }
  Serial.println(sumatorio);   //terminado el bucle se mnuestra el resultado
}

void loop() {                  //loop() no se usa en este ejercicio
}
