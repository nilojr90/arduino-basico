/*
 * Parte do curso "Projetos em Arduino usando simuladores"
 * http://bit.ly/arduino18erbase
 *
 * https://www.tinkercad.com/things/jiNiidqoIak-erbase18attiny-led-blink
 */

 void setup()
{
   // pino 0 como saída   
  pinMode(0, OUTPUT);
}

void loop()
{
  digitalWrite(0, HIGH);
  delay(1000); // Espera 1 segundo
  digitalWrite(0, LOW);
  delay(1000); // Espera 1 segundo
}