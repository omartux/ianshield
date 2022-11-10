int inicio = 0;   //inicio
int fin = 0;   //final
int sumatorio = 0; //declara el valor de la sumatoria
int condicion = 0; //condicion de control de flujo

void setup() {
  Serial.begin(9600); //velocidad serial
  Serial.println("Sumatoria desde inicio a hasta final n ");
  Serial.println("Dame inicio : ");
}

void loop() {
  while (condicion == 0) {  // condicion inicial
    if (Serial.available() > 0) {
      inicio = Serial.parseInt();//entrada de inicio
      Serial.print("inicio = ");
      Serial.println(inicio);
      Serial.println("Dame final: ");
      condicion = 1;        //siguiente condicion
    }
  }
  while (condicion == 1) {
    if (Serial.available() > 0) {
      fin = Serial.parseInt();  //entrada de fin
      Serial.print("fin = ");
      Serial.println(fin);
      condicion = 2;        //salida de while
    }
  }

  while (inicio <= fin) {            //contador inicio hasta fin
    sumatorio = sumatorio + inicio; //se acumula la suma
    inicio = inicio + 1;                 //el contador inicio se incrementa en 1
  }
  
  Serial.println(sumatorio);   //terminado el bucle se muestra el resultado
  Serial.println("Dame inicio: ");
  sumatorio = 0;               //se resetea la suma para reiniciar el programa
  condicion = 0;               //condicion a cero para reiniciar el bucle
}





