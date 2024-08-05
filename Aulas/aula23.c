#include "stdio.h"

int main(int argc, char const *argv[])
{
  int mat[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
  int i, j;

  printf("Imprimindo a primeira linha: \n");
  for ( j = 0; j < 3; j++)
  {
    printf("%d ", mat[0][j]);
  }

  printf("\nImprimindo a matriz toda: \n");
  for ( i = 0; i < 3; i++)
  {
    for ( j = 0; j < 3; j++)
    {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
