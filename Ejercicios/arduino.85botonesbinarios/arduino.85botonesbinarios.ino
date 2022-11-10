int valor = 0; //declaracion de variable valor entero

void setup() {

  pinMode(14, INPUT);//boton S1
  pinMode(15, INPUT);//boton S2
  pinMode(16, INPUT);//boton S3

  pinMode(8, OUTPUT);//pin 8 al 11 salidas
  pinMode(9, OUTPUT);//para usaren puerto B
  pinMode(10, OUTPUT);//PORTB
  pinMode(11, OUTPUT);//el display esta en puerto B

}

void loop() {

  PORTB = valor; //muestra valor en puerto B (pin0-pin7)
  if (digitalRead(14) == 1) { //si boton S1 es Verdad
    delay(300);               //antirebote
    valor = valor + 1;        //incremento en 1

    if (valor > 9) {          //si valor es 9
      valor = 9;              //ya no sube el valor si es 9
    }

  }

  if (digitalRead(15) == 1) { //si boton S2 es verdad
    delay(300);               //antirebote
    valor = valor - 1;        //decremento en 1

    if (valor < 0) {          //si valor es menor a cero
      valor = 0;              //valor ya no puede bajar
    }
  }

  if (digitalRead(16) == 1 ) { //si boton S3 es verdad
    delay(300);                //antirebote
    valor = 0;                 //valor es cero (reset)
  }

}
