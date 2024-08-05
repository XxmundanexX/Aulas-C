#include "stdio.h"

int main(int argc, char const *argv[])
{
  int soma, cont=0;

  for ( soma = 1; soma <= 10; soma++)
  {
    cont = soma + cont;
  }

  printf("somatoria: %d", cont);
  
  return 0;
}
