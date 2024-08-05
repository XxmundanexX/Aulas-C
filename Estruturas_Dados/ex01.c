/*
  Desenvolva um algoritmo que preencha um vetor numérico de 10 posições. Ao final, o algoritmo deve mostrar o somatório de todos os elementos do vetor, bem como a média aritmética entre todos os termos.  
*/

#include "stdio.h"
#define TAM 10

int main(int argc, char const *argv[])
{
  int vet[TAM];
  float media;
  int i,soma;
  soma=0;

  for ( i = 0; i < 10; i++)
  {
    printf("Insira o dado da posicao %d: ", i+1); scanf("%d", &vet[i]);
  }

  for ( i = 0; i < 10; i++)
  {
    soma += vet[i];
  }
  printf("Somatoria: %d\n", soma);

  media = soma/TAM  ;
  printf("Media: %.1f\n", media);
  
  return 0;
}
