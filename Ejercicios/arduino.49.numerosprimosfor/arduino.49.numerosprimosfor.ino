int n = 0;      //numero n entero
int condicion = 0;  //condicion control de flujo
bool es_primo = true; //inicialmente es primo "es verdadero"
int x = 0; //variable para iterar

void setup() {
  Serial.begin(9600);             //velocidad serial 9600
  Serial.println("Calculo de primos, Dame n");

  while (condicion == 0) {  //condicion inicial para entrada de dato
    if (Serial.available() > 0) { //si dato en serial entra
      n = Serial.parseInt();  //valor de n entero
      Serial.println(n);      //muestra n
      condicion = 1;         //sale de condicion
    }
  }

  for (int i = 2; i <= n - 1; i = i + 1) { //i desde un inicio 2 hasta n-1, incrementa i=i+1
    x = n % i;               //verifica que no haya residuo con MODULO
    if (x == 0) {            //si aparece un modulo CERO tiene division no es primo
      es_primo = false;      //basta que cumpla una ya no es primo osea "false"
    }
  }

  if (es_primo == false) {   //saliendo del for si es false no es primo
    Serial.println("No es primo");
  }
  else {
    Serial.println("Es primo"); //si es true "verdadero" si es primo
  }

  Serial.println("Fin del proceso, presiona RESET en Arduino"); //al final del for muestra este mensaje

}

void loop() {              //no usamos loop, preionar reset para reiniciar
}





