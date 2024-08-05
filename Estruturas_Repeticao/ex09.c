/*
  Desenvolva um algoritmo que peça ao usuário que insira dois números inteiros positivos
  A e B, no qual A deve ser menor que B (supõe-se que o usuário irá respeitar esse
  enunciado). O algoritmo deve mostrar, na tela, todos os números ímpares
  compreendidos entre A e B (inclusive).
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  
  int A, B, i;

  printf("Digite o valor de A: "); scanf("%d", &A);

  printf("Digite o valor de B: "); scanf("%d", &B);

  printf("numeros impares sao: "); 

  for (i=A;i<=B; i++)
  {
    if ((i % 2) == 0)
    {
      continue;
    }
    
    printf("%d, ", i);
  }
  
  return 0;
}