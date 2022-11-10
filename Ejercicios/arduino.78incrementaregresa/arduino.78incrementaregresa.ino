int tiempo = 100;

void setup() {
  Serial.begin(9600);
  Serial.end();

  for (int i = 0; i < 8; i++) {
    pinMode(i, OUTPUT);
  }

for (int i = 8; i < 12; i++) {
    pinMode(i, OUTPUT);
  }
  
  
  
  
}

void loop() {

  for (int i = 1; i < 8; i++) {
    PORTB=i;
    digitalWrite(i, HIGH);
    delay(tiempo);
    digitalWrite(i, LOW);
      digitalWrite(0, HIGH);
  delay(tiempo);
  digitalWrite(0, LOW);
  }
  for (int i = 7; i > 0; i--) {
        PORTB=i;

    digitalWrite(i, HIGH);
    delay(tiempo);
    digitalWrite(i, LOW);
      digitalWrite(0, HIGH);
  delay(tiempo);
  digitalWrite(0, LOW);
  }
}
