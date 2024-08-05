#include "stdio.h"

int main(int argc, char const *argv[])
{
  int v[5]={10,20,30,40,50};
  float s=0;
  int i;

  for ( i = 0; i < 5; i++)
  {
    s += v[i]; /*soma todos os vetores*/
  }

  printf("media: %.2f", s/5);

  return 0;
}