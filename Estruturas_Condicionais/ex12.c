/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba quatro
  valores, I, A, B e C. I é um valor inteiro e positivo e A, B e C são valores reais e distintos.
  Escreva os números A, B e C obedecendo à tabela a seguir. Supor que o valor digitado
  para I seja sempre um valor válido, ou seja, 1, 2 ou 3.
  Valor de I // Forma de escrever
  1 A, B e C // em ordem crescente
  2 A, B e C // em ordem decrescente
  3 O maior  // fica entre os outros dois números
*/

#include"stdio.h"
#include"stdlib.h"

int main(int argc, char const *argv[])
{
  float A, B, C;
  int I;

  printf("Informe o primeiro n\243mero(A): "); scanf("%f", &A);
  printf("Informe o primeiro n\243mero(B): "); scanf("%f", &B);
  printf("Informe o primeiro n\243mero(C): "); scanf("%f", &C);

  printf("Insira a op\207\306o desejada(I): "); scanf("%d", &I);

  if (I==1)
  {
    if (A<B)
    {
      printf("%.0f - %.0f - %.0f\n", A, B, C);
      if (B>C)
      {
        printf("%.0f - %.0f - %.0f\n", A, C, B);
      }
      if (B<A)
      {
        printf("%.0f - %.0f - %.0f\n", B, A, C);
        if (A>C)
        {
          printf("%.0f - %.0f - %.0f\n", B, C, A);
        }
        if (C<A)
        {
          printf("%.0f - %.0f - %.0f\n", C, A, B);
          if (A>B)
          {
            printf("%.0f - %.0f - %.0f\n", C, B, A);
          }
        }
      }
    }  
  }

  if (I==2)
  {
    if (A<B)
    {
      printf("%.0f - %.0f - %.0f\n", C, B, A);
      if (B>C)
      {
        printf("%.0f - %.0f - %.0f\n", B, C, A);
      }
      if (B<A)
      {
        printf("%.0f - %.0f - %.0f\n", C, A, B);
        if (A>C)
        {
          printf("%.0f - %.0f - %.0f\n", A, C, B);
        }
        if (C<A)
        {
          printf("%.0f - %.0f - %.0f\n", B, A, C);
          if (A>B)
          {
            printf("%.0f - %.0f - %.0f\n", A, B, C);
          } 
        }        
      }
    }  
  }

  if (I==3)
  {
    if ((A>B)&&(A>C))
    {
      printf("%.0f - %.0f - %.0f\n", B, A, C);
    }
    if ((B>A)&&(B>C))
    {
      printf("%.0f - %.0f - %.0f\n", A, B, C);
    }
    if ((C>A)&&(C>B))
    {
      printf("%.0f - %.0f - %.0f\n", A, C, B);
    }
  }  

  if ((I!=1)&&(I!=2)&&(I!=3))
  {
    printf("Op\207\306o inv\240lida!\n");
  }
  system("pause");
 return 0;
}