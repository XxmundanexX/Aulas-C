/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que leia um valor N inteiro
  e positivo, calcule e mostre o valor de E, conforme a fórmula a seguir:
  E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
*/

#include "stdio.h"
int main(int argc, char const *argv[])
{
  int N, i, j;
  float res, fat;

  printf("Insira o valor de N:\n"); scanf("%d", &N);
  
  res = 1;

  for(i=1; i<=N; i++)
  {
    fat = 1;

    for(j=1; j<=i; j++)
    {
      fat = fat * (float)j;
    }
    res = res + 1/fat;
  }

  printf("Resultado: %f.\n", res);
  return 0;
}