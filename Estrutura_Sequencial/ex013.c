/*Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.
*/

#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
 float num, qua, cub, rquad, rcub;

 printf("Insira um numero:\n");
 scanf("%f", &num);

 qua = pow(num, 2);
 cub = pow(num, 3);
 rquad = sqrt(qua);
 rcub = pow(num, 1.0/3.0);

 printf("Quadrado: %f.\n", qua);
 printf("Cubo: %f.\n", cub);
 printf("Raiz quadrada: %f.\n", rquad);
 printf("Raiz cubica: %f.\n", rcub);
 return 0;
}
