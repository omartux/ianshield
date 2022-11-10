int a = 0; //declara a limite inferior
int N = 0; //declara N limite superior
int condicion = 0;  //condicion para control de flujo

void setup() {
  Serial.begin(9600); //velocidad serial
  Serial.println("Imprimo numeros");
  Serial.println("Dame inicio 'a'");
}

void loop() {
  while (condicion == 0) {        //condicion 0 se entra en este while y se espera dato
    if (Serial.available() > 0) { //si hay dato en serial entrar
      a = Serial.parseInt();      //el dato en serial guardar en a
      Serial.print("Inicio es ");
      Serial.println(a);          //mostrar a
      Serial.println("Dame final 'N' ");
      condicion = 1;              //cambiar condicion para ir al siguiente bucle while
    }
  }
  while (condicion == 1) {        //ahora condicion vale 1 entrar
    if (Serial.available() > 0) { //espera dato en serial
      N = Serial.parseInt();      //el dato en serial es entero guardar en N
      Serial.print("Final es "); 
      Serial.println(N);
      condicion = 2;              //cambiar condicion para salir de bucle
    }
  }
  while (a <= N) {                //miestras a sea menor a N
    Serial.print(a);              //mostrar a
    Serial.print(";");            //separador
    a = a + 1;                    //contador incremento en 1
  }
  Serial.println("");
  Serial.println("Dame inicio 'a'");
  condicion = 0;                  //cambiar condicion para inciar de nuevo en "a"
}
