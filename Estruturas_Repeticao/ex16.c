/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Desenvolva um algoritmo que peça ao
  usuário que insira cinco conjuntos de dois números inteiros positivos (A, B), no qual A
  deve ser menor que B (supõe-se que o usuário irá respeitar esse enunciado). Para cada
  dupla (A, B), informada pelo usuário, o algoritmo deve mostrar, na tela, todos os
  números pares compreendidos entre A e B (inclusive).
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  
  int A, B, i, j;


  for (j = 1; j<=5; j++)
  {
    printf("Digite o valor de A: "); scanf("%d", &A);

    printf("Digite o valor de B: "); scanf("%d", &B);

    printf("numeros pares sao: "); 

    for (i=A;i<=B; i++)
    {
      if ((i % 2) == 1)
      {
        continue;
      }
      printf("%d ", i);
    }
    printf("\n");
  }
  
  return 0;
}
