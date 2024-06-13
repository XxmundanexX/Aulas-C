/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três números
  distintos e mostre-os em ordem crescente.
*/

#include"stdio.h"

int main(int argc, char const *argv[])
{
  float num1, num2, num3;

  printf("Insira o primeiro n\243mero: \n"); scanf("%f", &num1);
  printf("Insira o segundo n\243mero: \n"); scanf("%f", &num2);
  printf("Insira o terceiro n\243mero: \n"); scanf("%f", &num3);

  if ((num1<num2)&&(num1<num3))
  {
    if (num2<num3)
    {
      printf("%.0f - %.0f - %.0f", num1, num2, num3);
    }
    else
    {
      printf("%.0f - %.0f - %.0f", num1, num3, num2);
    }
  }
  if ((num2<num1)&&(num2<num3))
  {
    if (num1<num3)
    {
      printf("%.0f - %.0f - %.0f", num2, num1, num3);
    }
    else
    {
      printf("%.0f - %.0f - %.0f", num2, num3, num1);
    }
  }
  if ((num3<num1)&&(num3<num2))
  {
    if (num1<num2)
    {
      printf("%.0f - %.0f - %.0f", num3, num1, num2);
    }
    else
    {
      printf("%.0f - %.0f - %.0f", num3, num2, num1);
    }
  }  
  return 0;
}