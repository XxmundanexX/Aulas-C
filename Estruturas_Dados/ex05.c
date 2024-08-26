/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que carregue dois vetores
  de dez elementos numéricos cada um e mostre um vetor resultante da intercalação
  desses dois vetores.
*/

#include "stdio.h"

#define POS 10

int main(int argc, char const *argv[])
{
  int vet1[10], vet2[10];
  int i, j;

  for ( i = 0; i < POS; i++)
  {
    printf("Insira o dado vet1[%d]: ", i); scanf("%d", &vet1[i]); 
  }

  puts("");

  for ( i = 0; i < POS; i++)
  {
    printf("Insira o dado vet2[%d]: ", i); scanf("%d", &vet2[i]);
  }

  for ( i = 0; i < 10; i++)
  {
    printf("%d ", vet1[i]);
    printf("%d ", vet2[i]);
  }
  
  return 0;
}

