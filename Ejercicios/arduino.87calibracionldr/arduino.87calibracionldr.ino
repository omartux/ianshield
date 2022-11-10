int ldr = 4;  //pin analogico a usar ldr PH2
int condicion = 0; //control de flujo para configurar
int maximo = 0; //maximo valor posible en el ldr
int minimo = 0; //minimo valor posible en el ldr
int valor = 0; //valor que se sensa en el ldr
int s1 = 14; //boton s1
int lampara = 7; //lampara indicador configuracion

void setup() {//funcion setup solo corre una vez

  pinMode(s1, INPUT); //boton s1 entrada
  pinMode(lampara, OUTPUT); //lampara es salida

  while (condicion == 0) { //condicion inicial
    digitalWrite(lampara, HIGH); //indica espera config
    if (digitalRead(s1) == 1) { //lee boton 1
      delay(100);//retraso antirebote
      maximo = analogRead(ldr); //maximo es valor analogico es ldr
      digitalWrite(lampara, LOW); //indica que funciono
      delay(1000); //apagado por 1 segundo
      condicion = 1; //sale de condicion 0 y while
    }

  }

  while (condicion == 1) { //nueva condicion
    digitalWrite(lampara, HIGH); //indica espera config
    if (digitalRead(s1) == 1) { //lee boton 1
      delay(100);//retraso antirebote
      digitalWrite(lampara, LOW); //indica que funciono
      minimo = analogRead(ldr); //valor analogico de ldr es minimo
      digitalWrite(lampara, LOW); //indica que funciono
      delay(1000); //apagado por 1 segundo
      condicion = 2; //salir de condicion 1
    }

  }
  Serial.begin(9600); //puerto serial a 9600 velocidad

}

void loop() {  //bucle loop se repite siempre

  valor = analogRead(ldr); //leer valor analogico en ldr
  valor = map(valor, minimo, maximo, 0, 255); //map() equivalencias
  if (valor > 255) { // si valor>255 entonces no sube mas
    valor = 255;     //es decir valor =255
  }
  if (valor < 0) {   //si valor<0 no puede ser menor
    valor = 0;       //valor =0
  }
  Serial.println(valor);   //salida de valor por serial
  delay(50);               //retardo (20 medidas por segundo)

}
