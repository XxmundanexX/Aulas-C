#include "stdio.h"

int main(int argc, char const *argv[])
{
  int A, B, serieNumerica;

  printf("Digite o valor de A: "); scanf("%d", &A);
  printf("Digite o valor de B: "); scanf("%d", &B);
  
  printf("serie numerica: ");

  for (A; A < B; A++)
  {
    if (A == 1)
    {
      continue;
    }
     
    serieNumerica = A;
    printf("%d ", serieNumerica);
  }
  
  return 0;
}
