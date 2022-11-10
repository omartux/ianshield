int a = 0;   //numero a
int b = 0;   //numero b
int suma = 0;   //valor actual de suma
int condicion = 0; //para controlar flujo del programa
char comando = 'x';//letra de comando tipo char

void setup() {
  Serial.begin(9600); //velocidad serial

  do                  //inicio de bucle do--while
  {
    Serial.println("Suma de 2 numeros a y b ");
    Serial.println("Dame a : ");

    while (condicion == 0) { //condicion inicial
      if (Serial.available() > 0) { //si dato en serial entrar
        a = Serial.parseInt();      //dato en serial es a
        Serial.print("a = ");
        Serial.println(a);
        Serial.println("Dame b: ");
        condicion = 1;              //cambiar condicion para salir
      }
    }

    while (condicion == 1) { //condicion actual
      if (Serial.available() > 0) { //si dato en serial entrar
        b = Serial.parseInt();      //dato en serial es b
        Serial.print("b = ");
        Serial.println(b);
        condicion = 2;              //cambiar condicion para salir
      }
    }

    suma = a + b;
    Serial.print("suma de a+b es ");
    Serial.println(suma);      //muestra factorial al finalizar el while anterior
    Serial.println("presione q para salir");
    Serial.println("cualquier tecla para continuar");
    condicion = 3;
    while (condicion == 3) {
      if (Serial.available() > 0) { //si dato en serial entrar
        comando = Serial.read();      //tipo char en serial es comando
        Serial.print("escogio ");
        Serial.println(comando);
        if (comando == 'q') {         //si comando es q entrar
          comando = 'q';              //cambiar comando por 'q'
          condicion = 4;              //cambiar condicion para salir de bucle
        }
        if (comando != 'q') {         //si es cualquier tecla
          Serial.println("Seguimos sumando");
          condicion = 0;              //regresar al inicio por condicion cero
        }
      }
    }
  } while (comando != 'q'); //se sale de do-while si comando es 'q'
  
  Serial.println("Fin del programa...");   //adios
}

void loop() {              //no usamos loop para que el programa tenga fin
}





