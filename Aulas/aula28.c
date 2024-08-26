//Protótipo de Funções

#include "stdio.h"

float maior(float num1, float num2);

int main(int argc, char const *argv[])
{
  float x,y,m;

  printf("Digite um numero: "); scanf("%f", &x);
  printf("Digite outro numero: "); scanf("%f", &y);

  m= maior(x,y);

  printf("Maior: %.f", m);
  
  return 0;
}

float maior(float num1, float num2)
{
  if (num1>num2)
    return num1;
  else
    return num2;
}