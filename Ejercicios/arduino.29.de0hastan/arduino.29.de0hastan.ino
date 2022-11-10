int i = 0; //declara i contador
int N = 0; //declara N limite superior
void setup() {
  Serial.begin(9600); //velocidad serial
  Serial.println("Imprimo numeros");
  Serial.println("Dame limite superior 'N'");
}

void loop() {
  if (Serial.available() > 0) {
    N = Serial.parseInt();
    while (i <= N) {
      Serial.println(i);
      i = i + 1;
    }
    Serial.println("Dame limite superior 'N'");
  }
}
