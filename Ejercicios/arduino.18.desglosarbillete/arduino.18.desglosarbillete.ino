//desglosa dinero en 200,100,50,20,10,5,2,1 soles
int dinero = 0; //el dinero a desglosar
int d200 = 0;   //billetes de 200
int d100 = 0;   //billetes de 100
int d50 = 0;    //billetes de 50
int d20 = 0;    //billetes de 20
int d10 = 0;    //billetes de 10
int d5 = 0;     //monedas de 5
int d2 = 0;     //monedas de 2
int d1 = 0;     //monedas de 1

void setup() {
  Serial.begin(9600);
  Serial.println("Desglosar Billetes");
  Serial.println("Dame cantidad:");
}

void loop() {

  if (Serial.available() > 0) {  //si hay dato en serial entrar y ejecutar
    dinero = Serial.parseInt();  //entrar "dinero" entero por serial
    Serial.println(dinero);      //mostrar "dinero"
    d200 = dinero / 200; dinero = dinero % 200; //billetes de 200 y se actualiza el saldo
    d100 = dinero / 100; dinero = dinero % 100; //billetes de 100 y se actualiza el saldo
    d50 = dinero / 50; dinero = dinero % 50;    //y asi sucesivamente
    d20 = dinero / 20; dinero = dinero % 20;
    d10 = dinero / 10; dinero = dinero % 10;
    d5 = dinero / 5; dinero = dinero % 5;
    d2 = dinero / 2; dinero = dinero % 2;
    d1 = dinero / 1; dinero = dinero % 1;

    Serial.print(d200); Serial.println(" billetes de 200 "); //mostrar billetes de 200
    Serial.print(d100); Serial.println(" billetes de 100 "); //de 100 y asi
    Serial.print(d50);  Serial.println(" billetes de 50 ");  //sucesivamente
    Serial.print(d20);  Serial.println(" billetes de 20 ");
    Serial.print(d10);  Serial.println(" billetes de 10 ");
    Serial.print(d5);   Serial.println(" monedas de 5 ");
    Serial.print(d2);   Serial.println(" monedas de 2 ");
    Serial.print(d1);   Serial.println(" monedas de 1 ");
    Serial.println("");
    Serial.println("Desglosar Billetes");
    Serial.println("Dame cantidad:");
  }
}
