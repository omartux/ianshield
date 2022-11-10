void setup() {  //funcion setup que configura el Arduino
  Serial.begin(9600); //puerto serial a 9600 bps
}
void loop() {  //funcion loop que repite continuamente el Arduino
  Serial.println("Hola Mundo"); //muestra Hola mundo en la conexion serial
}