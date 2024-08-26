/*
  Desenvolva um algoritmo que preencha uma matriz numérica de dimensões 3x3. Ao
  final, o algoritmo deve mostrar o somatório de todos os elementos da matriz, bem como
  a média aritmética entre todos os termos.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  float mat[3][3];
  float soma, media;
  int i, j;
  soma = 0;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Insira o dado da posicao %d, %d:", i + 1, j + 1);
      scanf("%f", &mat[i][j]);
      soma += mat[i][j];
    }
  }
  media = soma / 9;

  printf("Somatorio: %.2f.\n", soma);
  printf("Media: %.2f.\n", media);

  return 0;
}
