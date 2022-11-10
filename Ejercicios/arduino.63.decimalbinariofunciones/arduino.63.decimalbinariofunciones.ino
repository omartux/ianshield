int condicion = 0;  //control de flujo
int dec = 0;        //declaracion variable decimal

void setup() {

  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Convierto a binario");
  Serial.println("Dame numero decimal ");

}

void loop() { //repite continuamente

  while (condicion == 0) {  //condicion inicial

    if (Serial.available() > 0) { //si dato en serial entra
      dec = Serial.parseInt(); //entra entero como dec
      Serial.println(dec);    //muestra valor de dec
      condicion = 1;        //sale de condicion
    }

  }

  Serial.print("En binario es: ");
  float salida = convierto(dec); //se invoca la conversion
  Serial.println(salida);      //se muestra la conversion en float
  Serial.println("Dame numero decimal");
  condicion = 0;         //reinicia la condicion para pedir dato
}

float convierto(int z) {   //definicion de funcion de conversion

  float bin;   //se declara 
  float i;     //variables auxiliares
  float db;
  float r;
  bin = 0;     //bin inicia en 0
  i = 0;       //iterador inicia en 0

  do {       //bucle do while

    r = z % 2;          //iteracion para conversion (modulo sucesivas)
    bin = bin + pow(10, i) * r; //pow() necesita float
    i = i + 1;
    z = int(z / 2);

  } while (z != 1);        //mientras z sea diferente a 1

  db = bin + pow(10, i);   //db debe ser float
  return db;               //retornar valor de conversion

}




