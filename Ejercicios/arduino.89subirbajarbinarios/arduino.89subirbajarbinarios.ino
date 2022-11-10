int mas = 14;   //boton incrementar
int menos = 15; //boton decrementar
int nada = 16;  //boton reset
int numero = 0; //variable numero

void setup() { //funcion setup solo corre una vez

  for (int i = 0; i < 8; i++) { //pines 0-7 salidas
    pinMode(i, OUTPUT);         //puerto D
  }

}

void loop() {  //bucle loop se repite siempre

  PORTD = numero; //dato "numero" en el puerto D (led0-led7)

  if ((digitalRead(mas) == 1)) { //si S1 es Verdadero
    delay(300);//antirebote
    numero = numero + 1; //incrementar numero en 1
    if (numero > 255) {  //hasta un maximo de 255
      numero = 255;
    }
  }
  if ((digitalRead(menos) == 1)) { //si S2 es Verdadero
    delay(300);//antirebote
    numero = numero - 1; //decrementar numero en 1
    if (numero < 0) {    //hasta un minimo de 0
      numero = 0;
    }
  }
  if ((digitalRead(nada) == 1)) { //si S3 es Verdadero
    delay(300);//antirebote
    numero = 0;          //resetear numero a 0
  }

}
