/*
  Desenvolva um algoritmo que receba três números. O algoritmo deve imprimir
  "Condição satisfeita", na tela, caso o primeiro dado inserido seja maior do que os outros
  dois (o primeiro não pode ser igual a nenhum). Caso contrário, deve ser impressa a
  mensagem: "Erro".
*/

#include <stdio.h>
int main (void)
{
 int n1, n2, n3;
 
 printf("Insira o primeiro numero: ");
 scanf("%d", &n1);
 
 printf("Insira o segundo numero: ");
 scanf("%d", &n2);
 
 printf("Insira o terceiro numero: ");
 scanf("%d", &n3);
 
 if ((n1 > n2) && (n1 > n3))
 {
  printf("Condição satisfeita\n");
 }
 else
 {
  printf("Erro\n");
 }
}