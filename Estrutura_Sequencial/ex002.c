/*Faça um programa que receba três notas,
calcule e mostre a média aritmética entre elas.*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
 int n1, n2, n3, n4, s;
 
 printf("Informe quatro números, em sequência: \n"); 

 scanf("%d", &n1);
 scanf("%d", &n2);
 scanf("%d", &n3);
 scanf("%d", &n4);

 s = n1 + n2 + n3 + n4;
 
 printf("Resultado da soma: %d.\n", s);
 system ("pause");
}