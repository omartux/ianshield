int condicion = 0;  //control de flujo
int x = 0;        //declaracion variable decimal

void setup() {

  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Calculo cuadrado");
  Serial.println("Dame numero ");

}

void loop() { //repite continuamente

  while (condicion == 0) {  //condicion inicial

    if (Serial.available() > 0) { //si dato en serial entra
      x = Serial.parseInt(); //entra entero como dec
      Serial.println(x);    //muestra valor de dec
      condicion = 1;        //sale de condicion
    }

  }

  Serial.print("El cuadrado de "); Serial.print(x);
  Serial.print(" es "); Serial.println(cuadrado(x));

  Serial.println("Dame numero ");
  condicion = 0;         //reinicia la condicion para pedir dato

}

int cuadrado(int x) {
  int cc = pow(x, 2);
  return cc;
}



