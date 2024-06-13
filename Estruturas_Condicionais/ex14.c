/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba a hora de
  início de um jogo e a hora final do jogo (cada hora é composta por duas variáveis inteiras:
  hora e minuto). Calcule e mostre a duração do jogo (horas e minutos) sabendo-se que o
  tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e
  terminar no dia seguinte. Observação: utilizar o formato de hora que vai das 00hr00min
  até as 23hr29min.
*/

#include"stdio.h"
#include"stdlib.h"

int main(int argc, char const *argv[])
{
  float horasInicio, minutosInicio, horasFim, minutosFim;

  printf("Insira os dados do in\241cio:\n");
  printf("Horas: "); scanf("%f", &horasInicio);
  printf("Minutos: "); scanf("%f", &minutosInicio);
  printf("Insira os dados do fim:\n");
  printf("Horas: "); scanf("%f", &horasFim);
  printf("Minutos: "); scanf("%f", &minutosFim);
  
  
  return 0;
}