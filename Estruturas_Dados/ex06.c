/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que carregue um vetor
  com oito números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor
  resultante deve conter os números positivos. O segundo vetor resultante deve conter
  os números negativos. Cada vetor resultante vai ter no máximo oito posições, sendo
  que nem todas devem obrigatoriamente ser utilizadas. Imprima o conteúdo dos vetores
  resultantes, sem que sejam impressos "lixos de memória".
*/

#include "stdio.h"
#define POS 8
int main(int argc, char const *argv[])
{
  int i, vet[POS];

  for (i = 0; i < POS; i++)
  {
    printf("Insira o dado vet1[%d]", i+1); scanf("%d", &vet[i]); fflush(stdin);
  }

  printf("vetor de positivos: ");
  for ( i = 0; i < POS; i++)
  {
    if (vet[i]>=0)
    {
      printf("%d ", vet[i]);
    }
    
  }

  puts("");

  printf("vetor de negativos: ");
  for ( i = 0; i < POS; i++)
  {
    if (vet[i]<0)
    {
      printf("%d ", vet[i]);
    }
    
  }
  
  return 0;
}
