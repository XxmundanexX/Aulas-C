/*
  Faça um programa que receba dois números
  e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os
  números são iguais".
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
  int primeNumero, segNumero, maior, igual, menor;

  printf("Insira o primeiro numero: ");
  scanf("%d", &primeNumero);
  
  printf("Insira o segundo numero: ");
  scanf("%d", &segNumero);

  if (primeNumero > segNumero)
  {
    printf("O maior \202: %d\n", primeNumero);
  }
  if (primeNumero < segNumero);
  {
    printf("o maior \202: %d\n", segNumero);
  }
  if (primeNumero == segNumero)
  {
    printf("Os numeros s\306o iguais\n");
  }
  return 0;
}
