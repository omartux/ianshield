int boton = 14;
int led = 7;

void setup() {
  pinMode(boton, INPUT);
  for (int i = 0; i < 8; i = i + 1) {
    pinMode(i, OUTPUT);
  }
}

void loop() {

  if (digitalRead(boton) == 1) {
    digitalWrite(led, HIGH);

  }
  else {
    digitalWrite(led, LOW);
  }


}
