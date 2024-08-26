/*
  Desenvolva um algoritmo que preencha cada elemento de uma matriz 3x3 com o
  quadrado do valor do índice da linha mais o valor do índice da coluna daquela posição.
  Ao final, o algoritmo deve mostrar a matriz, na tela.
*/

#include "stdio.h"

#define POS 50

int main(int argc, char const *argv[])
{
  int i, j;
  int mat[3][3];
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      mat[i][j] = i * i + j;
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}