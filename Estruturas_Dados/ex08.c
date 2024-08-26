/*
  Desenvolva um algoritmo que preencha uma matriz numérica de dimensões 3x3. Depois
  de a matriz ter sido populada, o algoritmo deverá imprimir a matriz da seguinte forma:
  os dados da diagonal principal devem ser impressos normalmente e os dados fora da
  diagonal principal devem substituídos por zero.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  float mat[3][3];
  int i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Insira o dado da posicao %d, %d:", i + 1, j + 1);
      scanf("%f", &mat[i][j]); fflush(stdin);
    }
  }
  printf("\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (i == j)
      {
        printf("%.0f ", mat[i][j]);
      }
      else
      {
        printf("0 ");
      }
    }
    printf("\n");
  }
  return 0;
}
