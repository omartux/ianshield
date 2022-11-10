int i = 0;
void setup() {
  Serial.begin(9600);

  do                  //inicio de bucle do--while
  {
    Serial.println("ROJO"); //semaforo en rojp
    delay(2000);            //por dos segundos

    Serial.println("VERDE");//semaforo en verde
    delay(2000);            //por dos segundos 

    Serial.println("AMBAR");//semaforo en ambar
    delay(2000);            //por dos segundos

  } while (i == 0); //sale de do-while si i es diferente a cero (imposible)
                    //bucle infinito
}

void loop() {              //no usamos loop 
}





