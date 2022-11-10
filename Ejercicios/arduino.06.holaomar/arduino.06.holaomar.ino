String nombre = "alguien"; //crea la variable "nombre" de tipo String con contenido "alguien"

void setup() {                 //esta funcion solo se ejecuta una sola vez
  Serial.begin(9600);          //configura el puerto serial a 9600 de velocidad
  Serial.println("Y tu como te llamas? ^_^");
}

void loop() {                  //esta funcion siempre se repite

  if (Serial.available() > 0) {      //si hay algun dato en el puerto serial entrar a esta condicional
    nombre = Serial.readString() ;   //se aplica la funcion readString() al puerto serial y se guarda el dato en la variable "nombre"
    Serial.print("Hola ");           //mostrar el texto hola y seguido
    Serial.println(nombre);          //el texto de la variable "nombre"
    Serial.println("");
    Serial.println("Y tu como te llamas? ^_^");
  }
}
