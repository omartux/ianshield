int numero = 0;       //se declara la variable numero a verificar

void setup() {
  Serial.begin(9600); //configura el puerto serial a 9600 de velocidad
  Serial.println("Verificar si un numero es positivo o negativo");
  Serial.println("*********************************");
  Serial.println("");
  Serial.println("Envia el numero a verificar: ");
}

void loop() {
  if (Serial.available() > 0) { //si hay algun dato en el puerto serial entrar a esta condicional if
    numero = Serial.parseInt(); //se aplica parseInt al serial y se guarda el dato en la variable "numero"
    Serial.print("numero = ");  //mostrar el valor
    Serial.println(numero);     //de la variable "numero"
    if (numero > 0) { //condicional +
      Serial.println("El numero es positivo");
    }
    if (numero < 0) { //condicional -
      Serial.println("El numero es negativo");
    }
    if (numero == 0) {           //si no es + o - debe ser
      Serial.println("El numero es cero");
    }
  }
}
