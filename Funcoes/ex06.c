/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um procedimento que receba um
  número real, calcule e retorne:
  a) a parte inteira desse número;
  b) a parte fracionária desse número.
  Crie um algoritmo que peça para o usuário inserir o número real e, em seguida, calcule
  e mostre o que se pede nos itens a) e b).
*/

#include <stdio.h>

void numReal(float n, int *i, float *fr)
{
  *i = (int)n;
  *fr = n - (float)*i;
}

int main(int argc, int const *argv[])
{
  float num, parte_frac;
  int parte_int;

  printf("Insira um número real:\n"); scanf("%f", &num);

  numReal(num, &parte_int, &parte_frac);
  
  printf("Parte inteira: %d.\n", parte_int);
  printf("Parte fracionária: %f.\n", parte_frac);

  return 0;
}