/*Desenvolva um algoritmo que emule um caixa eletrônico. O usuário deve inserir o valor
total a ser sacado da máquina e o algoritmo deve informar quantas notas de 100, 50,
20, 10, 5 ou 2 reais serão entregues. Deve-se escolher as notas para que o usuário receba
o menor número de notas possível. */

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int valor, n100, n50, n20, n10, n5, n2;

  printf("Insira o valor a sacar: \n");
  scanf("%d", &valor);

  n100 = valor/100;
  valor = valor % 100;

  n50 = valor/50;
  valor = valor % 50;

  n20 = valor/20;
  valor = valor % 20;

  n10 = valor/10;
  valor = valor % 10;

  n5 = valor/5;
  valor = valor % 5;

  n2 = valor/2;
  valor = valor % 2;

  printf("n de notas em R$ 100,00: %d.\n", n100);
  printf("n de notas em R$ 50,00: %d.\n", n50);
  printf("n de notas em R$ 20,00: %d.\n", n20);
  printf("n de notas em R$ 10,00: %d.\n", n10);
  printf("n de notas em R$ 5,00: %d.\n", n5);
  printf("n de notas em R$ 2,00: %d.\n", n2);
  return 0;
}
