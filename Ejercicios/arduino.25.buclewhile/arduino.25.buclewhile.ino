int i = 0; //declara i entero
void setup() {
  Serial.begin(9600); //velocidad serial
  i = 0;   //i vale 0
  while (i < 3) { //mientras "i" sea menor a 0
    Serial.println(i); //mostrar i
    i = i + 1;    //aumentar i en una unidad INCREMENTO
  }
}

void loop() {
}
