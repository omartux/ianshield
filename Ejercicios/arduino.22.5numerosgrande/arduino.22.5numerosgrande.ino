//Que numero es mas grande (otro)
int a = 0; //variable a
int b = 0; //variable b
int c = 0; //variable c
int d = 0; //variable d
int e = 0; //variable e
int x = 0; //variable x valor mayor actual
byte condicion = 0; //condicion de control, byte ocupa menos espacio

void setup() {
  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Dame 5 numeros y comparo");
  Serial.println("Numero a?");
}

void loop() {
  while (condicion == 0) { //condicion inicial cero se entra
    if (Serial.available() > 0) { //si hay dato se entra
      a = Serial.parseInt(); //el dato en serial se guarda entero en "a"
      Serial.print("a=");
      Serial.println(a);
      Serial.println("Numero b?");
      condicion = 1;         //se cambia condicion para cambiar de bucle
    }

  }
  while (condicion == 1) { //se entra a este bucle despues de entrar "a"
    if (Serial.available() > 0) { //si hat dato en serial entrar
      b = Serial.parseInt(); //guardar entero del serial en "b"
      Serial.print("b=");
      Serial.println(b);
      Serial.println("Numero c?");
      condicion = 2;        //se cambia para cambiar de bucle
    }
  }
  while (condicion == 2) { //se entra a este bucle con condicion 2
    if (Serial.available() > 0) { //si hay dato en serial entrar
      c = Serial.parseInt(); //entero en serial se guarda en "c"
      Serial.print("c=");
      Serial.println(c);
      Serial.println("Numero d?");
      condicion = 3;         //para salir de bucle
    }
  }
  while (condicion == 3) { //se entra a este bucle con condicion 3
    if (Serial.available() > 0) { //si hay dato en serial entrar
      d = Serial.parseInt(); //entero en serial se guarda en "d"
      Serial.print("d=");
      Serial.println(d);
      Serial.println("Numero e?");
      condicion = 4;         //para salir de bucle
    }
  }
  while (condicion == 4) { //se entra a este bucle con condicion 4
    if (Serial.available() > 0) { //si hay dato en serial entrar
      e = Serial.parseInt(); //entero en serial se guarda en "e"
      Serial.print("e=");
      Serial.println(e);
      Serial.println("Comparando...");
      condicion = 5;         //para salir de bucle
    }
  }

  x = a; //suponemos que a es el mayor
  if (b > x) { //si b > x entrar
    x = b; //ahora x toma el valor de b
  }
  if (c > x) { //si c > x entrar
    x = c; //ahora x toma el valor de c
  }
  if (d > x) { //si d > x entrar
    x = d; //ahora x toma el valor de d
  }
  if (e > x) { //si e > x entrar
    x = e; //ahora x toma el valor de e
  }

  Serial.print(x);
  Serial.println(" es el mayor");
  Serial.println("Numero a?");
  condicion = 0;    //se reinicia la condicion para repetir el programa
}

