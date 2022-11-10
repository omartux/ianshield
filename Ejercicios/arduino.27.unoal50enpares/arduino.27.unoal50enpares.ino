int i = 0; //declara i entero
void setup() {
  Serial.begin(9600); //velocidad serial
  i = 1;   //i vale 1
  while (i <= 50) { //mientras "i" sea menor o igual a 50
    Serial.println(i); //mostrar i
    i = i + 2;    //aumentar i en dos  INCREMENTO
  }
}

void loop() {
}
