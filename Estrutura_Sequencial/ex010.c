/*Faça um programa que calcule e mostre a
área de um círculo. Sabe-se que: Área = Pi * R², aonde Pi = 3,14.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  float raio, pi, area;

  printf("Insira o raio :");
  scanf("%f", &raio);

  pi = 3.14;
  area = pi * (raio*raio);

  printf("Area do circulo: %.0f. ", area);
  return 0;
}
