int inicio = 0; //declara a limite inferior
int fin = 0; //declara N limite superior
int intervalo = 0; //declara intervalo de incremento
int condicion = 0;  //condicion para control de flujo

void setup() {
  Serial.begin(9600); //velocidad serial
  Serial.println("Imprimo numeros");
  Serial.println("Dame inicio 'a'");
}

void loop() {
  while (condicion == 0) {        //condicion 0 se entra en este while y se espera dato
    if (Serial.available() > 0) { //si hay dato en serial entrar
      inicio = Serial.parseInt();      //el dato en serial guardar en a
      Serial.print("Inicio es ");
      Serial.println(inicio);          //mostrar a
      Serial.println("Dame final ");
      condicion = 1;              //cambiar condicion para ir al siguiente bucle while
    }
  }
  while (condicion == 1) {        //ahora condicion vale 1 entrar
    if (Serial.available() > 0) { //espera dato en serial
      fin = Serial.parseInt();      //el dato en serial es entero guardar en N
      Serial.print("Final es ");
      Serial.println(fin);
      Serial.println("Dame Intervalo ");
      condicion = 2;              //cambiar condicion para siguiente bucle
    }
  }
  while (condicion == 2) {        //ahora condicion vale 2 entrar
    if (Serial.available() > 0) { //espera dato en serial
      intervalo = Serial.parseInt();      //el dato en serial es entero guardar en intervalo
      Serial.print("Intervalo es ");
      Serial.println(intervalo);
      condicion = 3;              //cambiar condicion para salir de bucle
    }
  }
  while (inicio <= fin) {                //miestras a sea menor a N
    Serial.print(inicio);              //mostrar a
    Serial.print(";");            //separador
    inicio = inicio + intervalo;                    //contador incremento en 1
  }
  Serial.println("");
  Serial.println("Dame inicio 'a'");
  condicion = 0;                  //cambiar condicion para inciar de nuevo en "a"
}
