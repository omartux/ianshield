int numero = 0; //numero a ingresar
int x = 0;      //para el modulo entre 2

void setup() {
  Serial.begin(9600);  //velocidad serial a 9600
  Serial.println("Numero Par o impar");
  Serial.println("Dame numero: ");
}

void loop() {
  if (Serial.available() > 0) { //si hay dato en serial entrar
    numero = Serial.parseInt(); //dato serial entero
    Serial.println(numero);
    x = numero % 2;             //modulo de numero entre dos
    if (x == 0) {               //si no hay residuo es par
      Serial.println("El numero es par ");
    }
    else  {                     //o si no es impar
      Serial.println("El numero es impar ");
    }
    Serial.println("Dame numero: ");
  }
}
