/*
  Desenvolva um algoritmo que preencha um vetor numérico de 10 posições. Após
  preencher todo o vetor, o usuário deve inserir uma chave de busca X. Caso exista algum
  número igual a X, dentro do vetor, o algoritmo deve mostrar, na tela, o índice da
  primeira posição na qual X foi encontrado. Caso contrário, o algoritmo deve se encerrar
  com uma única mensagem, dizendo "Chave não encontrada.".
*/

#include "stdio.h"

#define positions 10

int main(int argc, char const *argv[])
{
  int vet[positions];
  int i, busca, incorreto;
  incorreto=1;

  for ( i = 0; i < positions; i++)
  {
    printf("Insira o dado da posicao %d: ", i+1); scanf("%d", &vet[i]); fflush(stdin);
  }
  
  printf("\nInsira a chave de busca: "); scanf("%d", &busca);

  for ( i = 0; i < positions; i++)
  {
    if (busca==vet[i])
    {
      printf("\nChave encontrada na posicao: %d\n", i+1);
      continue;
    }
    incorreto++;
  }
  if (incorreto>positions)
  {
    printf("\nChave nao encontrada");
  }
  return 0;
}