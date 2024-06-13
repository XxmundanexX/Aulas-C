/*
  Faça um programa que receba um número
  inteiro e verifique se esse número é par ou ímpar.
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
  int numero;

  printf("Insira um n\243mero: ");
  scanf("%d", &numero);

  if (numero % 2 == 0 )
  {
    printf("Par.\n");
  }
  else
  {
    printf("Impar.\n");
  }
  
  return 0;
}