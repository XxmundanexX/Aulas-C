#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float s_base, grat, imposto, s_receb;

  printf("Insira o salario base: \n");
  scanf("%f", &s_base);

  grat = 600.00;
  imposto = s_base * 10/100;
  s_receb = (s_base - imposto) + grat;

  printf("Novo salario: %.2f.", s_receb) ;
  system("pause");
  return 0;
}
