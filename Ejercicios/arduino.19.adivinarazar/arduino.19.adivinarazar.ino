int numero = 0; //numero a ingresar
int azar = 0;   //numero a adivinar

void setup() {
  Serial.begin(9600);
  azar = random(5);
  Serial.println("escoge numero del 0 al 5");
}

void loop() {
  if (Serial.available() > 0) { //si hay dato en el serial entrar
    numero = Serial.parseInt(); //numero es dato serial en entero
    if (numero == azar) {       //si "numero" y "azar" son iguales
      Serial.println("Acertaste");
      Serial.println("resetea el Arduino para jugar de nuevo");
    }
    else {                      //si no son iguales intenta de nuevo
      Serial.println("Intenta de nuevo");
    }
  }
}

