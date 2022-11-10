int suma = 0; //suma actual
int n = 0; //valor de n
int condicion = 0; //condicion para control de flujo

void setup() {
  Serial.begin(9600);             //velocidad serial 9600
  Serial.println("Suma numeros naturales del 1 a n");
  Serial.println("Dame valor de n");
  while (condicion == 0) {
    if (Serial.available() > 0) {
      n = Serial.parseInt();
      condicion = 1;
    }
  }
  for (int i = 1; i <= n; i = i + 1) { //i desde un inicio 1 hasta n, incrementa i=i+1
    suma = suma + i;   //acumula suma para cada valor del 0 al 50
  }
  Serial.print("La suma hasta n es ");
  Serial.println(suma);   //salida suma de 0 al 50
  Serial.println("Fin del proceso"); //al final del for muestra este mensaje
}

void loop() {              //no usamos loop
}





