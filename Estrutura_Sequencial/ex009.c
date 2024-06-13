/*Faça um programa que calcule e mostre a
área de um triângulo. Sabe-se que: Área = (base * altura)/2.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float base, altura, area;

  printf("Insira a base : ");
  scanf("%f", &base);

  printf("Insira a altura : ");
  scanf("%f", &altura);

  area = (base*altura)/2;

  printf("Area do triangulo: %.0f.", area);
  return 0;
}
