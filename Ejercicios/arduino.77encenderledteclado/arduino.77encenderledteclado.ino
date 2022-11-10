char dato = 0;  //declara dato como caracter char
int pin = 7;    //se usa pin 7 se puede cambiar

void setup() {
  Serial.begin(9600);    //serial a 9600
  pinMode(pin, OUTPUT);
  Serial.println("Control de LED por teclado");
  Serial.println("E para encender");
  Serial.println("A para apagar");
}

void loop() {
  if (Serial.available() > 0) {
    dato = Serial.read(); //Serial.read() lee datos 'char'
  }
  if (dato == 'E' or dato == 'e') { //si es e o E
    digitalWrite(pin, HIGH);        //encender pin
  }
  if (dato == 'A' or dato == 'a') { //si es a o A
    digitalWrite(pin, LOW);         //apagar
  }
}

