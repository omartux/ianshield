int n = 0;
int condicion = 0;

void setup() {
  Serial.begin(9600);             //velocidad serial 9600
  Serial.println("Dame valor de n");

  while (condicion == 0) {        //condicion inicial espera dato
    if (Serial.available() > 0) { //si hay dato en serial
      n = Serial.parseInt();      //guarda en n
      condicion = 1;              //cambia condicion para salir
    }
  }

  for (int i = 0; i <= n; i++) { //desde un inicio i=0 hasta 'n' incrementa i++
    Serial.println(i);            //salida numero i
  }

  Serial.println("Fin del proceso"); //al final del for muestra este mensaje
}

void loop() {              //no usamos loop
}





