int condicion = 0;  //control de flujo
float n = 0;        //declaracion variable n

void setup() {

  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Dame numero positivo ");
  Serial.println("Calculo raiz cuadrada ");

}

void loop() { //repite continuamente

  while (condicion == 0) {  //condicion inicial

    if (Serial.available() > 0) { //si dato en serial entra
      n = Serial.parseFloat(); //entra entero como float
      Serial.println(n);    //muestra valor de n
      if (n < 0) {          //si es negativo error
        Serial.println("Error dato negativo, introducir dato positivo");
        condicion = 0;
      }
      else {                //si no salir de bucle
        condicion = 1;        //sale de condicion
      }
    }

  }

  float rc = sqrt(n);
  Serial.println(rc);
  Serial.println("Dame numero positivo ");
  condicion = 0;

}




