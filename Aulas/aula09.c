#include<stdio.h>

int main(void)
{
  float nota;

  printf("Insira a nota: ");
  scanf("%f", &nota);

  if (nota >= 7.0)
  {
    printf("Aprovado(a)!\n");
  }
  else
  {
    printf("Reprovado(a)!\n");
  }
  return 0;
}