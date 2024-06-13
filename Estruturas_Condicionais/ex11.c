/*
  Desenvolva um algoritmo que peça ao usuário que informe os coeficientes a, b e c de
  uma equação de segundo grau: ax² + bx + c. Com base na Fórmula de Bhaskara, calcule
  e mostre as raízes da respectiva equação de segundo grau.
*/

#include"stdio.h"
#include"math.h"

int main(int argc, char const *argv[])
{
  float a, b, c, x;
  float x1, x2;
  printf("Informe o coeficiente a: "); scanf("%f", &a);
  printf("Informe o coeficiente b: "); scanf("%f", &b);
  printf("Informe o coeficiente c: "); scanf("%f", &c);

  float delta = b*b - 4*a*c;

  if (delta>0)
  {
    x1 = (-b + sqrt(delta)) / 2*a;
    x2 = (-b - sqrt(delta)) / 2*a;

    printf("As ra\241zes s\306o:\nx1 = %.2f\nx1 = %.2f\n", x1, x2);
  }
  if (delta==0)
  {
    x1 = -b / (2*a);

    printf("A ra\241z dupla \202: %.2f\n", x1);
  }
  if (delta<0)
  {
    printf("Ra\241zes fora do dom\241nio dos n\243meros reais.\n");
  }
  
  return 0;
}