int i = 0; //declara i entero
void setup() {
  Serial.begin(9600); //velocidad serial
  i = 16;   //i vale 16
  while (i <= 72) { //mientras "i" sea menor o igual a 72
    Serial.println(i); //mostrar i
    i = i + 1;    //aumentar i en 1,  INCREMENTO
  }
}

void loop() {
}
