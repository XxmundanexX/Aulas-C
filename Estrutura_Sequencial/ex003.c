/*Faça um programa que receba três notas e
seus respectivos pesos, calcule e mostre a média ponderada dessas notas.*/

#include <stdio.h>
#include <stdlib.h>

int main ()

{
  float n1, n2, n3;
  float p1, p2 ,p3;

  printf("Insira a primeira nota: \n");
  scanf("%f", &n1);
  printf("Insira o peso da primeira nota: \n");
  scanf("%f", &p1);

  printf("Insira a segunda nota: \n");
  scanf("%f", &n2);
  printf("Insira o peso da segunda nota: \n");
  scanf("%f", &p2);

  printf("Insira a terceira nota: \n");
  scanf("%f", &n3);
  printf("Insira o peso da terceira nota: \n");
  scanf("%f", &p3);
  
  float v_s = (n1*p1) + (n2*p2) + (n3*p3);
  float mp = v_s / (p1+p2+p3);

  printf("Média total: %0.f", mp);
  system ("pause");
}