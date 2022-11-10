#include <RunningMedian.h>

void setup() {

  pinMode(14, INPUT); //boton S1
  pinMode(15, INPUT); //BOTON S2
  pinMode(16, INPUT); //BOTON S3

  pinMode(8, OUTPUT); //salidas
  pinMode(9, OUTPUT); //puerto B
  pinMode(10, OUTPUT); //display
  pinMode(11, OUTPUT); //del 8 al 11

}

void loop() {
  for (int i = 0; i < 10; i++) { //subida de 0 al 9
    PORTB = i;
    delay(500);
  }

  for (int i = 9; i >= 0; i--) { //bajada de 9 a 0
    PORTB = i;
    delay(500);
  }

}
