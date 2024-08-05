#include "stdio.h"

int main(int argc, char const *argv[])
{
  int numero = 11;

/*
  mesma função que o while (repetição), só que é executado pelo menos uma vez antes de seguir o código, diferentemente do while.
*/
  do
  {
    printf("%d ", numero);
    numero++;
  } while (numero <= 10);
  
  return 0;
}
