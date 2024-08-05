/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que leia dez conjuntos de
  dois valores, o primeiro representando o número do aluno e o segundo representando
  sua altura em centímetros. Encontre o aluno mais alto e o mais baixo. Mostre o número
  do aluno mais alto e o número do mais baixo, junto com suas alturas.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  int i, num, nMaior, nMenor;
  float alt, aMaior, aMenor;

  for ( i = 1; i <= 10; i++)
  {
    printf("insira o numero do aluno: "); scanf("%d", &num);
    printf("insira a altura do aluno: "); scanf("%f", &alt);

    if (i == 1)
    {
      aMaior=alt;
      nMaior=num;
      aMenor=alt;
      nMenor=num;
    }else{
      if (alt>aMaior)
      {
        aMaior=alt;
        nMaior=num;
      }
      if (alt<aMenor)
      {
        aMenor=alt;
        nMenor=num;
      }
    }
  }
  
  printf("numero do maior aluno: %d\n", nMaior);
  printf("altura do maior aluno: %.2f\n", aMaior);
  printf("numero do menor aluno: %d\n", nMenor);
  printf("altura do menor aluno: %.2f\n", aMenor);
  
  return 0;
}

