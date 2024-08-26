/*
  Desenvolva um algoritmo que preencha uma matriz numérico de dimensões 3x3. Após
  preencher todo a matriz, o usuário deve inserir uma chave de busca X. Caso exista algum
  número igual a X, dentro da matriz, o algoritmo deve mostrar, na tela, os índices da linha
  e da coluna da posição na qual na qual X foi encontrado pela primeira vez. Caso
  contrário, o algoritmo deve se encerrar com uma única mensagem, dizendo "Chave não
  encontrada.".
*/

#include "stdio.h"
#include "stdbool.h"
int main()
{
  float X, mat[3][3];
  int i, j, lin, col;
  bool achou;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Insira o elemento da posição %d, %d:\n", i + 1, j + 1);
      scanf("%f", &mat[i][j]);
    }
  }
  printf("Insira a chave de busca:\n");
  scanf("%f", &X);
  achou = false;
  i = 0;
  while ((i < 3) && (!achou))
  {
    j = 0;
    while ((j < 3) && (!achou))
    {
      if (mat[i][j] == X)
      {
        achou = true;
        lin = i;
        col = j;
      }
      j++;
    }
    i++;
  }
  if (achou)
  {
    printf("Chave encontrada na linha %d, coluna %d.\n", lin + 1, col + 1);
  }
  else
  {
    printf("Chave não encontrada.\n");
  }
  return 0;
}