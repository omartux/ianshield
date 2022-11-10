int grado = 0; //variable grado entero
int x = 0;     //variable x entero

void setup() {
  Serial.begin(9600); //puerto serial a 9600
  Serial.println("Dame el angulo ");
}

void loop() {
  if (Serial.available() > 0) {//si hay dato en el serial entrar
    grado = Serial.parseInt(); //leer entero del serial
    Serial.println(grado);     //mostrar el dato ingresado
    x = ((grado % 360) / 90);  //evaluar el grado ingresado
    Serial.print("Resultado evaluacion es: ");
    Serial.println(x);         //mostrar el resultado
    if (x == 0) {              //si es V esta en 1er cuadrante
      Serial.println("Pertenece al primer cuadrante");
    }
    if (x == 1) {              //si es V esta en 2do cuadrante
      Serial.println("Pertenece al segundo cuadrante");
    }
    if (x == 2) {              //si es V esta en 3er cuadrante
      Serial.println("Pertenece al tercer cuadrante");
    }
    if (x == 3) {              //si es V esta en 4to cuadrante
      Serial.println("Pertenece al cuarto cuadrante");
    }
  }
}
