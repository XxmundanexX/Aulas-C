/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que carregue uma matriz
  3 x 5 com números inteiros e some cada uma das linhas, armazenando o resultado das
  somas em um vetor. A seguir, multiplique cada elemento da matriz pela soma da
  respectiva linha daquele elemento e mostre a matriz resultante.
*/

#include "stdio.h"
int main()
{
  float mat[3][5], vet[3];
  int i, j;

  for (i = 0; i < 3; i++)
  {
    vet[i] = 0;
    for (j = 0; j < 5; j++)
    {
      printf("Insira o dado da posicao %d, %d: ", i + 1, j + 1);
      scanf("%f", &mat[i][j]);
      vet[i] += mat[i][j];
    }
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 5; j++)
    {
      mat[i][j] = vet[i] * mat[i][j];
      printf("%.0f ", mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}