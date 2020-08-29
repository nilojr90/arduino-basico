/*
 * Parte do curso "Projetos em Arduino usando simuladores"
 * http://bit.ly/arduino18erbase
 *
 * https://www.tinkercad.com/things/jiNiidqoIak-erbase18sensortemperatura
 * 
 * referências:
 * https://www.arduino.cc/reference/pt/language/functions/math/map/  
 * https://www.arduino.cc/reference/pt/language/functions/communication/serial/
 */

int valorSensor = 0;
int tempC = 0;

void setup()
{
  pinMode(A0, INPUT);// configura o pino A0 como entrada
  Serial.begin(9600);// inicia a porta serial com 9600bps
}

void loop()
{
  // Lê o sensor ligado a porta A0
  valorSensor = analogRead(A0);
  // Converte os valores do sersor para a escala celsius
  tempC = map(valorSensor,102,358,0,125); 
  
  //envia os valores para a porta serial
  Serial.print(valorSensor);
  Serial.print(" - ");
  Serial.println(tempC);
  delay(20);
}