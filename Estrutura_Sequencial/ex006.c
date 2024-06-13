/*Faça um programa que receba o salário-base
de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário
tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.
*/

#include <stdio.h>
#include<stdlib.h>

int main(void)
{
  float s_base, grat, impost, s_receb;

  printf("Insira o salario-base: \n");
  scanf("%f", &s_base);

  grat = s_base * 5/100;
  impost = s_base * 7/100;

  s_receb = (s_base - impost) + grat;
  
  printf("Salario a ser recebido: %.2f", s_receb);
  system("pause");

  return 0;
}
