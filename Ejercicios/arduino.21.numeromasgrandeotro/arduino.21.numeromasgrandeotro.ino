//Que numero es mas grande (otro)
int a = 0; //variable a
int b = 0; //variable b
int c = 0; //variable c
int x = 0; //variable x valor mayor actual
byte condicion = 0; //condicion de control, byte ocupa menos espacio

void setup() {
  Serial.begin(9600); //velocidad serial 9600
  Serial.println("Dame 3 numero y comparo");
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
      Serial.println("Comparando...");
      condicion = 3;         //para salir de bucle
    }
  }

  x = a; //suponemos que a es el mayor
  if (b > x) { //si b > x entrar
    x = b; //ahora x toma el valor de b
  }
  if (c > x) { //si c > x entrar
    x = c; //ahora x toma el valor de c
  }

  Serial.print(x);
  Serial.println(" es el mayor");
  Serial.println("Numero a?");
  condicion = 0;    //se reinicia la condicion para repetir el programa
}

