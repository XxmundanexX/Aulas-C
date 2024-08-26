/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que carregue uma matriz
  2x2, calcule e mostre uma matriz resultante que será a própria matriz digitada
  multiplicada pelo maior elemento da matriz.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  float mat[2][2];
  float maior;
  int i, j;
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("Insira o dado da posicao %d, %d: ", i + 1, j + 1);
      scanf("%f", &mat[i][j]);
    }
  }
  maior = mat[0][0];
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      if (mat[i][j] > maior)
      {
        maior = mat[i][j];
      }
    }
  }
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      mat[i][j] = mat[i][j] * maior;
      printf("%.2f ", mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}