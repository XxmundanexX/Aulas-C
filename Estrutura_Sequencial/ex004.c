/*Faça um programa que receba o salário de
um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um
aumento de 25%.*/

#include <stdio.h>
#include <stdlib.h>

int main ()

{
  float salario;

  printf("Insira o salário: \n");
  scanf("%f", &salario);
 
  float n_salario = salario + (salario*0.25);
  /*Outra forma: float n_salario = salario + salario*(25.0/100.0)*/

  printf("Novo salário: %.2f", n_salario);
  system ("pause");
}