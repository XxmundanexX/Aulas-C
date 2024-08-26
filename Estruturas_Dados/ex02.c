/* 
  Desenvolva um algoritmo que peça ao usuário que preencha os dados de um vetor de 5
  posições com valores reais quaisquer, desde que estejam compreendidos entre 1 e 100
  (suponha que o usuário irá respeitar o enunciado). Ao final, o algoritmo deve mostrar,
  na tela, o conteúdo de cada posição do vetor, dividido por 100.
*/

#include "stdio.h"
#define TAM 5

int main(int argc, char const *argv[])
{
  int vet[TAM];
  float div;
  int i;

  for ( i = 0; i < TAM; i++)
  {
    printf("Insira o dado da posicao %d: ", i+1); scanf("%d", &vet[i]);
  }

  printf("\nConteudo divido por 100 :\n");
  for ( i = 0; i < TAM; i++)
  {
    div=0;
    div = vet[i]/100.0;
    printf("%.1f\n", div);
  }
  return 0;
}
