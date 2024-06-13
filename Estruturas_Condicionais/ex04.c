/*
  Desenvolva um algoritmo que receba dois números, calcule e mostre a multiplicação
  entre eles, se ambos forem iguais. Caso o primeiro seja maior que o segundo, mostre a
  subtração do primeiro pelo segundo. Caso contrário, mostre a soma entre os dois.
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
  float num1, num2;

  printf("Insira o primeiro n\243mero: ");
  scanf("%f", &num1);
  printf("Insira o segundo n\243mero: ");
  scanf("%f", &num2);
  
  if (num1==num2)
  {
    printf("A multiplica\207\306o dos valores \202: %.0f\n", (num1*num2));
  }
  if (num2<num1)
  {
    printf("A subtra\207\306o dos valores \202: %.0f\n", (num1-num2));
  }
  if ((num1!=num2) && (num2>num1))
  {
    printf("A soma dos valores \202: %.0f\n", (num1+num2));
  }
  
  return 0;
}