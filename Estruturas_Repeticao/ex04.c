/*
  basicamente é uma tabuada.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  int N, recebe, tabuada, valorFinal;
  tabuada=1;

  printf("insira o valor de N: "); scanf("%d", &N);

  for ( recebe = N; tabuada<=10; tabuada++)
  {
    valorFinal=recebe*tabuada;

    printf("%d x %d = %d\n", recebe, tabuada, valorFinal);
  }
  
  return 0;
}
