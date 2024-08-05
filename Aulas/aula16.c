#include "stdio.h"

int main(int argc, char const *argv[])
{
  int v[5];
  int i;

  for ( i = 0; i < 5; i++)
  {
    printf("insira o valor: "); scanf("%d", &v[i]);
  }

  printf("dados inseridos: ");

  for ( i = 0; i < 5; i++)
  {
    printf("%d ", v[i]);
  }
  
  return 0;
}
