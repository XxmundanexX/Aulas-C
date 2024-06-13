/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba o salário de
  um funcionário, calcule e mostre o novo salário desse funcionário, acrescido de
  bonificação e de auxílio-escola.
  o ----------------------------------------------------- o
  | Salário                         |   Bonificação       |
  | Até R$ 500,00                   |   5% do salário     |
  | Entre R$ 500,01 e R$ 1.200,00   |   12% do salário    | 
  | Acima de R$ 1.200,00            |   Sem bonificação   |
  o ----------------------------------------------------- o

  o ----------------------------------------------------- o
  | Salário             |   Auxílio-escola                |
  | Até R$ 600,00       |  R$ 150,00                      |
  | Mais que R$ 600,00  |  R$ 600,00                     |
  o ----------------------------------------------------- o
*/

#include"stdio.h"
#include"stdlib.h"

int main(int argc, char const *argv[])
{
  float salario, salarioTotal, bonificacao, auxilioEscola;

  printf ("Informe o sal\240rio: "); scanf("%f", &salario);

  if (salario<=500)
  {
    bonificacao = salario * 0.05;
  }
  if (salario>500)
  {
    bonificacao = salario * 0.12;
  }
  if (salario>1200)
  {
    bonificacao = 0;
  }
  
  if (salario<=600)
  {
    auxilioEscola = 150;
  }
  if (salario>600)
  {
    auxilioEscola = 100;
  }

  salarioTotal = salario + bonificacao + auxilioEscola;

  printf("Sal\240rio total: %.2f", salarioTotal);
  return 0;
}
