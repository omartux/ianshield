int suma = 0; //suma actual

void setup() {
  Serial.begin(9600);             //velocidad serial 9600
  Serial.println("Suma numeros naturales del 1 al 50");
  for (int i = 1; i <= 50; i = i + 1) { //i desde un inicio 1 hasta n, incrementa i=i+1
    suma = suma + i;   //acumula suma para cada valor del 0 al 50
  }
  Serial.println(suma);   //salida suma de 0 al 50
  Serial.println("Fin del proceso"); //al final del for muestra este mensaje
}

void loop() {              //no usamos loop
}





