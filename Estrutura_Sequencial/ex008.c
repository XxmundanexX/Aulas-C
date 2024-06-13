/*Faça um programa que receba o valor de um
depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor
total depois do rendimento.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float deposito, taxa_juros, rendimento, total;

  printf("Insira o valor do deposito: \n");
  scanf("%f", &deposito);

  printf("Qual e a taxa? \n");
  scanf("%f", &taxa_juros);

  rendimento = deposito * (taxa_juros/100);
  total = deposito + rendimento;

  printf("Rendimento: %.2f\n", rendimento);
  printf("Valor Total: %.2f", total);
  return 0;
}