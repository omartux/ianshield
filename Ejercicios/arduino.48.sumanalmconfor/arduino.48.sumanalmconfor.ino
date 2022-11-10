int suma = 0; //suma actual
int n = 0; //valor de n
int m = 0; //valor de m
int condicion = 0; //condicion para control de flujo

void setup() {
  Serial.begin(9600);             //velocidad serial 9600
  Serial.println("Suma numeros naturales del 1 a n");
  Serial.println("Dame valor de n");

  while (condicion == 0) {
    if (Serial.available() > 0) {
      n = Serial.parseInt();  //valor de n
      Serial.println("Dame valor de m");
      condicion = 1;
    }
  }

  while (condicion == 1) {
    if (Serial.available() > 0) {
      m = Serial.parseInt();  //valor de m
      condicion = 2;
    }
  }

  for (int i = n; i <= m; i = i + 1) { //i desde un inicio n hasta m, incrementa i=i+1
    suma = suma + i;   //acumula suma para cada valor del n al m
  }
  Serial.print("La suma de n hasta m es ");
  Serial.println(suma);   //salida suma 
  Serial.println("Fin del proceso"); //al final del for muestra este mensaje
}

void loop() {              //no usamos loop
}





