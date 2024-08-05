/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Um funcionário de uma empresa recebe
  aumento salarial anualmente. Sabe-se que:

  a) esse funcionário foi contratado em 2015, com salário inicial de R$ 1.000,00;
  b) em 2016 recebeu aumento de 1,5% sobre seu salário inicial;
  c) a partir de 2017 (inclusive), os aumentos salariais sempre corresponderam ao dobro
  da porcentagem do ano anterior.

  Faça um programa que receba o ano atual determine o salário atual desse funcionário.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  float sal, sal_novo, porc;
  int i, ano_atual;

  sal = 1000.0;
  porc = 1.5/100.0;
  sal_novo = sal + sal*porc;

  printf("Qual e o ano atual? "); scanf("%d", &ano_atual);

  for(i=2017;i<=ano_atual;i++)
  {
    porc = 2 * porc;
    sal_novo = sal_novo + sal_novo*porc;
  }

  printf("O salario atual e: %.f.\n", sal_novo);

  return 0;
}