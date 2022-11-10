int condicion = 0; //condicion para control de flujo

void setup() {
  Serial.begin(9600);
  pinMode(14, INPUT);
  pinMode(15, INPUT);

}

void loop() {

  if (digitalRead(14) == 1) { //si S1 es 1, condicion es 1
    condicion = 1;            //inicia musica
  }

  if (digitalRead(15) == 1) { //si S2 es 1, condicion es 0
    condicion = 0;            //se calla la musica
  }

  if (condicion == 0) { //si condicion es 0 hacer
    noTone(12);
  }

  if (condicion == 1) { //si condicion es 1 hacer
    musica(); //invoca la funcion musica()
  }

}

void musica() { //define la funcion void musica

  int sensorLuz = analogRead(A3);// leer sensor PH1 -A3
  Serial.println(sensorLuz); //muestra lectura de sensor
  // map() del LDR a valor de salida de pitch (120-1500Hz)
  // cambiar valores de ser necesario (400-1000)
  // para nuestro caso usamos 350-840 ya que el divisor
  // del ldr es de 10Kohms
  int tono = map(sensorLuz, 350, 840, 120, 1500);

  // play the pitch:
  tone(12, tono, 10); //funcion tone(pin,frecuencia,tiempo)
  delay(1);        // delay mejora la medida

}



