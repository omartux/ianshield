//Que numero es mas grande

int a = 0;
int b = 0;
int c = 0;
byte condicion = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Dame 3 numero y comparo");
  Serial.println("Numero a?");
}

void loop() {
  while (condicion == 0) {
    if (Serial.available() > 0) {
      a = Serial.parseInt();
      Serial.print("a=");
      Serial.println(a);
      Serial.println("Numero b?");
      condicion = 1;
    }

  }
  while (condicion == 1) {
    if (Serial.available() > 0) {
      b = Serial.parseInt();
      Serial.print("b=");
      Serial.println(b);
      Serial.println("Numero c?");
      condicion = 2;
    }
  }
  while (condicion == 2) {

    if (Serial.available() > 0) {
      c = Serial.parseInt();
      Serial.print("c=");
      Serial.println(c);
      Serial.println("Comparando...");
      condicion = 3;
    }
  }

  if (a > b) {
    if (a > c) {
      Serial.print(a);
      Serial.println(" es el mayor");
    }
    else {
      Serial.print(c);
      Serial.println(" es el mayor");
    }
  }
  else {
    if (b > c) {
      Serial.print(b);
      Serial.println(" es el mayor");
    }
    else {
      Serial.print(c);
      Serial.println(" es el mayor");
    }
  }
  condicion = 0;
  Serial.println("Numero a?");
}

