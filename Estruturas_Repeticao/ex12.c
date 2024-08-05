/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Desenvolva um algoritmo que receba um
  número N e informe se N é um número primo, ou não. A saber: um número primo é um
  inteiro positivo que só pode ser dividido por ele mesmo e por um, apenas.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  int num, i,cont;
  cont=0;
  
  printf("insira um numero: "); scanf("%d", &num);

  for ( i = 1; i <= num; i++)
  {
    if ((num%i) == 0)
    {
      cont++;
    }
  }
  if (cont==2)
  {
    printf("%d e um numero primo. ", num);
  }
  else{
    printf("%d nao e um numero primo. ", num);
  }
  return 0;
}
