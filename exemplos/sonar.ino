/*
 * Parte do curso "Projetos em Arduino usando simuladores"
 * http://bit.ly/arduino18erbase
 *
 * https://www.tinkercad.com/things/bs8YREj3iLk-erbase18sonar
 * 
 * referências:
 * https://www.arduino.cc/en/tutorial/ping
 * https://www.arduino.cc/reference/en/language/functions/advanced-io/pulsein/
 * https://www.todamateria.com.br/velocidade-do-som/ 
 */


const int ping = 7;
unsigned int duracao, distancia;

void setup() 
{
Serial.begin(9600);
}

void loop() 
{
//O sensor é configurado para emitir um ultra-som
pinMode(ping, OUTPUT);
//Primerio o sensor fica em silencio por 2 microsegundos
//para para limpar o estado anterior
digitalWrite(ping, LOW);
delayMicroseconds(2);
//Então é emitido um ultra-som por 5 microsegundos
digitalWrite(ping, HIGH);
delayMicroseconds(5);
//O sensor volta ao estado de silencio.
digitalWrite(ping, LOW);

//O mesmo pino é usado para ouvir o eco do sinal
pinMode(ping, INPUT);
duracao = pulseIn(ping, HIGH); 


distancia = duracaoParaCentimetros(duracao); 
Serial.print(distancia);
Serial.println("cm");
delay(200);
}

long duracaoParaCentimetros(long duracao) {
    //A velocidade do som é 343 m/s,  Ar (20°C)
    //então em 1 microsegundo o som se propaga por 3,43 cm
    //mas temos que lembrar que esse tempo inclui a ida e a volta do som 
    //então dividimos esse valor por 2 
  return (duracao * 0.0344)/2;
}