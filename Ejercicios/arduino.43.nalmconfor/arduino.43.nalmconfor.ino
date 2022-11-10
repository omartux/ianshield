int inicio = 0; //variable inicio
int fin = 0; //variable final
int condicion = 0;  // control de flujo

void setup() {
  Serial.begin(9600);             //velocidad serial 9600
  Serial.println("Dame valor de inicio");

  while (condicion == 0) {        //condicion inicial espera dato
    if (Serial.available() > 0) { //si hay dato en serial
      inicio = Serial.parseInt();      //guarda en n
      Serial.println("Dame valor de final");
      condicion = 1;              //condicion 1 para ir siguiente bucle
    }
  }


  while (condicion == 1) {        //condicion 1 espera dato
    if (Serial.available() > 0) { //si hay dato en serial
      fin = Serial.parseInt();      //guarda en m
      condicion = 2;              //cambia condicion 2 para salir
    }
  }

  for (inicio; inicio <= fin; inicio++) { //desde un inicio i=0 hasta 'n' incrementa i++
    Serial.println(inicio);            //salida numero i
  }

  Serial.println("Fin del proceso"); //al final del for muestra este mensaje
}

void loop() {              //no usamos loop
}





