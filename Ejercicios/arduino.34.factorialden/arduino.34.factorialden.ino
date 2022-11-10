int n = 0;   //numero a calcular factorial
int i = 1;   //contador inicia en 1
int f = 1;   //valor actual de factorial, 1 por comodidad
int condicion = 0;

void setup() {
  Serial.begin(9600); //velocidad serial
  Serial.println("Factorial hasta n ");
  Serial.println("Dame n : ");
}

void loop() {
  while (condicion == 0) { //condicion inicial
    if (Serial.available() > 0) { //si dato en serial entrar
      n = Serial.parseInt();      //sato en serial es n
      Serial.print("n = ");
      Serial.println(n);
      condicion = 1;              //cambiar condicion para salir
    }
  }
  while (i <= n) {        //mientras n sea menor a contador
    f = f * i;            //acumula productoria de factorial en f
    i = i + 1;            //contador incrementandose en 1
  }
  Serial.print("factorial es ");
  Serial.println(f);      //muestra factorial al finalizar el while anterior
  Serial.println("Dame n ");
  f = 1;                  //reset al factorial por 1
  i = 1;                  //reset al contador por 1
  condicion = 0;          //reset de condicion para regresar al inicio
}





