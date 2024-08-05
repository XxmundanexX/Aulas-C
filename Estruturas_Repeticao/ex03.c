/*
  Fatorial
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  int n, fatorial, recebe;

  printf("Digite o valor de N: "); scanf("%d", &n);

  fatorial = 1;

  for ( recebe=n; recebe>=1; recebe--) /* se "recebe" guardar o valor de N, toda repetição ele perderá 1, até que seja menor que 1.*/
  {
    fatorial=fatorial*recebe; /* "fatorial" será multiplicado pelo "recebe" toda vez que for reiniciado.*/
  }
    printf("o fatorial de %d: %d", n, fatorial);
  return 0;
}
