int radio = 0;
int opcion = 0;
int condicion = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Dame el radio");
}

void loop() {
  while (condicion == 0) {
    if (Serial.available() > 0) {
      radio = Serial.parseInt();
      Serial.print("radio es ");
      Serial.println(radio);
      Serial.println("MENU: 0=perimetro, 1=area, 2=diametro, escoge");
      condicion = 1;
    }
  }
  while (condicion == 1) {
    if (Serial.available() > 0) {
      opcion = Serial.parseInt();
      if (opcion > 2 or opcion < 0) {
        Serial.println("Opcion de Menu no valido");
        Serial.println("Dame el radio");
        condicion = 0;
      }
      else {
        Serial.print("escogio del menu ");
        Serial.println(opcion);
        condicion = 2;
      }
    }
  }

  if (opcion == 0) {
    float perimetro = 2 * 3.1416 * radio;
    Serial.print("Perimetro es ");
    Serial.println(perimetro);
    Serial.println("Dame el radio");
    condicion = 0;
  }
  if (opcion == 1) {
    float area = 2 * 3.1416 * radio * radio;
    Serial.print("Area es ");
    Serial.println(area);
    Serial.println("Dame el radio");
    condicion = 0;
  }
  if (opcion == 2) {
    float diametro = 2 * radio;
    Serial.print("Diametro es ");
    Serial.println(diametro);
    Serial.println("Dame el radio");
    condicion = 0;
  }
}
