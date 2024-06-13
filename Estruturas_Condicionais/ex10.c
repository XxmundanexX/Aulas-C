/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três números
  obrigatoriamente em ordem crescente e um quarto número que não siga esta regra.
  Mostre, em seguida, os quatro números em ordem não-crescente.
*/

#include"stdio.h"

int main(int argc, char const *argv[])
{
  float num1, num2, num3, num4;

  printf("Insira o primeiro n\243mero: "); scanf("%f", &num1);
  printf("Insira o segundo n\243mero: "); scanf("%f", &num2);
  printf("Insira o terceiro n\243mero: "); scanf("%f", &num3);
  printf("Insira o quarto n\243mero: "); scanf("%f", &num4);

  if ((num1<num2)&&(num1<num3))
  {
    if (num1<num2)
    {
      printf("%.0f - %.0f - %.0f - %.0f", num3, num2, num1, num4);
    }
    else
    {
      printf("%.0f - %.0f - %.0f - %.0f", num2, num3, num1, num4);
    }
  }
  if ((num2<num1)&&(num2<num3))
  {
    if (num2<num1)
    {
      printf("%.0f - %.0f - %.0f - %.0f", num3, num1, num2, num4);
    }
    else
    {
      printf("%.0f - %.0f - %.0f - %.0f", num1, num3, num2, num4);
    }
  }
  if ((num3<num1)&&(num3<num2))
  {
    if (num3<num1)
    {
      printf("%.0f - %.0f - %.0f - %.0f", num2, num1, num3, num4);
    }
    else
    {
      printf("%.0f - %.0f - %.0f - %.0f", num1, num2, num3, num4);
    }
  }
  return 0;
}