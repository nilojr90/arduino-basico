/*
 * Parte do curso "Projetos em Arduino usando simuladores"
 * http://bit.ly/arduino18erbase
 *
 * https://www.tinkercad.com/things/jBgBoB9n4EH-erbase18servo
 * 
 * referências: <http://barraganstudio.com>
 * <http://www.arduino.cc/en/Tutorial/Sweep>
 */


#include <Servo.h>

int posicao = 0; // variavel usada para indicar a posição do servo

Servo servo_9;

void setup()
{
  servo_9.attach(9); 
}

void loop()
{
  // Move o servo de 0 a 180 graus
  for (posicao = 0; posicao <= 180; ) {
    // move o servo para o angulo da variavel posicao
    servo_9.write(posicao);
    // aguarda o movimento do servo
    delay(15); // espera 15 milisegundos
    // soma  1, ao angulo da variavel pos
    posicao += 1;
  }
  // Move o servo de 180 a 0 graus
  for (posicao = 180; posicao >= 0; ) {
    // move o servo para o angulo da variavel posicao
    servo_9.write(posicao);
    // aguarda o movimento do servo
    delay(15); // espera 15 milisegundos
    // subitrai  1, ao angulo da variavel posicao
    posicao -= 1;
  }
}