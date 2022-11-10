int n = 0; //variable de n
int condicion = 0; //condicion para control de flujo

void setup() {
  Serial.begin(9600);             //velocidad serial 9600
  Serial.println("Crea Tabla de Multiplicar");

  while (condicion == 0) {        //condicion inicial espera dato
    if (Serial.available() > 0) { //si hay dato en serial
      n = Serial.parseInt();      //guarda en n
      Serial.println("Dame valor de n ");
      condicion = 1;              //condicion 1 para ir salir
    }
  }

  for (int i = 0; i <= 9; i = i + 1) { //desde un inicio 0 hasta n, incrementa i=i+1
    Serial.print(n);                   //muestra la tabla
    Serial.print(" x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(n * i);             //final de linea con println
  }

  Serial.println("Fin del proceso"); //al final del for muestra este mensaje
}

void loop() {              //no usamos loop
}





