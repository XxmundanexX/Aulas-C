/*Faça um programa que receba o ano de
nascimento de uma pessoa e ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos essa pessoa terá em 2030;*/

#include <stdio.h>

int main()
{
 int nasc, atual, ia, i2030;

 printf("Insira o ano de nascimento:\n");
 scanf("%d", &nasc);

 printf("Insira o ano datual:\n");
 scanf("%d", &atual);

 ia = atual - nasc;
 i2030 = 2030 - nasc;

 printf("Idade atual: %d.\n", ia);
 printf("Idade em 2030: %d.\n", i2030);
 return 0;
}