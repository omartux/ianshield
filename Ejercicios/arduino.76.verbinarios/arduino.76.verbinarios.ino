int condicion = 0;
int n = 0;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 8 ; i++) { //i++ incremento, del 0 al 7 salidas
    pinMode(i, OUTPUT);
  }

}

void loop() {
  Serial.println("Dame numero:");

  while (condicion == 0) {        //condicion inicial

    if (Serial.available() > 0) { //si hay dato en serial entrar
      n = Serial.parseInt();      //dato entero en n
      condicion = 1;              //cambiar condicion para salir
    }

  }

  Serial.end();   //cerrar conexion serial para usar LED1 y LED2
  PORTD = n;      //mostrar valor de n en el puerto D (LED1 al LED8)
  delay(5000);    //por 5 segundos

  Serial.begin(9600);   //iniciar el puerto serial nuevamente
  delay(500);     //temporizado para estabilizar conexion serial
  condicion = 0;  //cambiar condicion para reiniciar entrada de dato
}
