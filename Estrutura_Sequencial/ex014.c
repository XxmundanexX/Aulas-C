/*) Faça um programa que receba dois números
maiores que zero, calcule e mostre um elevado ao outro.*/

#include <stdio.h>
#include <math.h>

int main()
{
 float A, B, potencia;

 printf("Insira o primeiro numero:\n");
 scanf("%f", &A);

 printf("Insira o segundo numero:\n");
 scanf("%f", &B);

 potencia = pow(A, B);
 
 printf("Resultado: %f.\n", potencia);
}
