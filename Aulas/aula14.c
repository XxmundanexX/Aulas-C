#include "stdio.h"

int main(int argc, char const *argv[])
{
  int i;

  for ( i = 1; i <= 10; i++)
  {

    if (i == 5)
    {
      continue; /*passa para a próxima interação*/
    }
    printf("%d ", i);
    
  }
  
  printf("\n");

  for ( i = 1; i <= 10; i++)
  {
    printf("%d ", i);

    if (i == 5)
    {
      break; /*encerra por completo a estrutura de repetição*/
    }
    
  }
  return 0;
}