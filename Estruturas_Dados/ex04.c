/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que carregue um vetor e
  nove elementos numéricos inteiros, calcule e mostre os números primos e suas
  respectivas posições.
*/

#include "stdio.h"
#include "stdlib.h"

#define positions 9

int main(int argc, char const *argv[])
{
  int vet[positions];
  int i, j, percent, cont;

  for ( i = 0; i < positions; i++)
  {
    printf("Insira o dado da posicao %d: ", i+1); scanf("%d", &vet[i]); fflush(stdin);
  }

  for ( i = 0; i < positions; i++)
  {
    cont=0;
    
    for ( j = 1; j <= vet[i]; j++)
    {
      if ((vet[i]%j)==0)
      {
        cont++;
      }
    }
    if (cont==2)
    {
      printf("%d e primo, posicao: %d\n", vet[i], i+1);
    }
  }
  system("pause");
  
  return 0;
}
