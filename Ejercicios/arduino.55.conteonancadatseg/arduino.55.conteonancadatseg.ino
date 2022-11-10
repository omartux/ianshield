int n = 0;         //declara variable n
int m = 0;         //declara variable m
int t = 0;         //declara variable t
int condicion = 0; //declara condicion inicial

void setup() {                  //funcion setup() se ejecuta una vez

  Serial.begin(9600);               //serial a 9600
  Serial.println("Cuento del de 'n' a 'm' cada 't' segundos");
  Serial.println("Dame n");

  while (condicion == 0) {
    if (Serial.available() > 0) {
      n = Serial.parseInt();
      Serial.println("Dame m");
      condicion = 1;
    }
  }

  while (condicion == 1) {
    if (Serial.available() > 0) {
      m = Serial.parseInt();
      Serial.println("Dame t");
      condicion = 2;
    }
  }

  while (condicion == 2) {
    if (Serial.available() > 0) {
      t = Serial.parseInt();
      condicion = 3;
    }
  }

  for (int i = n; i <= m; i = i + 1) {  //itera for con n m
    Serial.println(i);          //muestra la variable i
    delay(t*1000);              //por mil ya que es milisegundos
  }

  Serial.println("Fin del proceso");
}

void loop() {  //no la usamos ahora
}
