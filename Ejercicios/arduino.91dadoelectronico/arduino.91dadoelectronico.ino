int s1 = 14; //boton s1
int s2 = 15; //boton s2
int s3 = 16; //boton s3
int buzzer = 12; //pin del buzzer
int azar = 0; //variable al azar
int condicion = 0; //control de flujo de programa

void setup() {
  pinMode(0, OUTPUT);//leds del 0-7
  pinMode(1, OUTPUT);//trata de configuralos
  pinMode(2, OUTPUT);//con un while
  pinMode(3, OUTPUT);//para practicar
  pinMode(4, OUTPUT);//o un for
  pinMode(5, OUTPUT);//esta declaracion explicita es
  pinMode(6, OUTPUT);//para repaso nomas
  pinMode(7, OUTPUT);//

  pinMode(8, OUTPUT);//los 4 bits 8-11
  pinMode(9, OUTPUT);//para el display
  pinMode(10, OUTPUT);//de 7 segmentos
  pinMode(11, OUTPUT);//son salidas

  pinMode(buzzer, OUTPUT); //buzer en pin12
  pinMode(s1, INPUT);//entrada boton s1-14
  pinMode(s2, INPUT);//entrada boton s2-15
  pinMode(s3, INPUT);//entrada boton s3-16
  Serial.end();//desactiva el puerto serial para usar pin0 y pin1
  randomSeed(analogRead(3) + analogRead(4)); //la "semilla" para el azar
                                             //viene de los ldr (A3-A4)
}

void loop() {

  if (digitalRead(s1) == 1) { //lanza dado
    delay(50);
    int contador = 0;
    while (contador < 2) {
      tone(buzzer, 1500);
      delay(100);
      noTone(buzzer);
      delay(100);
      contador = contador + 1;
    }
    condicion = 1;
  }

  if (digitalRead(s2) == 1) { //para el dado
    delay(50);
    tone(buzzer, 2500);
    delay(100);
    noTone(buzzer);
    delay(100);
    condicion = 2;
  }

  if (digitalRead(s3) == 1) { //reset de dado
    delay(50);
    tone(buzzer, 1500);
    delay(100);
    noTone(buzzer);
    delay(100);
    condicion = 0;
  }

  if (condicion == 0) { //reset dado
    for (int i = 0; i < 8; i = i + 1) {
      digitalWrite(i, LOW);
    }
    PORTB = 0;

  }

  if (condicion == 1) { //lanza dado
    azar = random(1, 7);//genera un numero aleatorio del 1 al 7
    delay(50); //retraso para efecto de destello
    PORTB = azar; //muestra "azar" en display
    PORTD = map(azar, 0, 6, 0, 255); //muestra "azar" en barra de leds
    //map() "amplia" numero de 0-255

  }

  if (condicion == 2) { //para el dado
    PORTB = azar;
    PORTD = azar;
  }
}
