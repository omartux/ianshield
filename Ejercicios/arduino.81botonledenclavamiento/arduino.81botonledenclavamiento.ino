int boton = 14;  //declara el pin del boton
int led = 7;     //declara el pin del led
int encender = 0; //estado para encender
int anterior = 0; //estado anterior
int actual = 0; //estado actual

void setup() {
  pinMode(boton, INPUT); // Pin digital del boton como entrada
  pinMode(led, OUTPUT); // Pin digital del led como salida
  digitalWrite(led, LOW); // led inicia apagado
}

void loop() {

  actual = digitalRead(boton); // estado actual del boton

  if (actual && anterior == 0) { //Comparamos el estado actual y el anterior del pulsador
    encender = 1 - encender;     //si uno es diferente entrar a condicional
    //"encender" cambia en cada interaccion con esta condicion if
    delay(200); // evita rebotes del boton
  }

  anterior = actual; //si presionamos boton, "anterior" ahora es 1, es decir encendido
  //sin presionar boton este estado cambia de 1 a 0.

  if (encender == 1) { // Si el estado interno del pulsador pasa de "0" a "1".
    digitalWrite(led, HIGH); // led encendido
  }

  else {// o si no el estado del boton pasa de "1" a "0".
    digitalWrite(led, LOW); // led apagado
  }
}
