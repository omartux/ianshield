int inicio = 0; //variable inicio
int fin = 0; //variable final
int intervalo = 0; //variable intervalo
int condicion = 0;  // control de flujo

void setup() {
  Serial.begin(9600);             //velocidad serial 9600
  Serial.println("Dame valor de inicio");

  while (condicion == 0) {        //condicion inicial espera dato
    if (Serial.available() > 0) { //si hay dato en serial
      inicio = Serial.parseInt();      //guarda en inicio
      Serial.println("Dame valor de final");
      condicion = 1;              //condicion 1 para ir siguiente bucle
    }
  }


  while (condicion == 1) {        //condicion 1 espera dato
    if (Serial.available() > 0) { //si hay dato en serial
      fin = Serial.parseInt();      //guarda en fin
      Serial.println("Dame valor de intervalo");
      condicion = 2;              //cambia condicion 2 para salir
    }
  }


  while (condicion == 2) {        //condicion 1 espera dato
    if (Serial.available() > 0) { //si hay dato en serial
      intervalo = Serial.parseInt();      //guarda en intervalo
      condicion = 3;              //cambia condicion 2 para salir
    }
  }

  for (inicio; inicio <= fin; inicio = inicio + intervalo) { //desde un inicio hasta fin incrementa inicio+intervalo
    Serial.println(inicio);            //salida numero i
  }

  Serial.println("Fin del proceso"); //al final del for muestra este mensaje
}

void loop() {              //no usamos loop
}





