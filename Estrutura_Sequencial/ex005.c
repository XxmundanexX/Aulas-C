/*Faça um programa que receba o salário de
um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o
novo salário.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float salario, p_aumento, aumento, n_salario;

  printf("Insira o salário: \n");
  scanf("%f", &salario);

  printf("Insira o percentual de aumento: \n");
  scanf("%f", &p_aumento);

  aumento = salario * (p_aumento/100);
  n_salario = salario + aumento;

  printf("Valor do aumento: %.2f\n", aumento);
  printf("Novo salario: %.2f", n_salario);

  return 0;
}
