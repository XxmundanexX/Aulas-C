/*
  ) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que leia um número N e
  que indique quantos valores inteiros e positivos devem ser lidos a seguir. Para cada
  número lido, mostre o fatorial desse valor.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  int qtdNum, num, i, fat, res, recebe;
  
  printf("Quantos numeros serao informados: "); scanf("%d", &qtdNum);

  for (i = 1; i<=qtdNum; i++)
  {
    printf("Insira o numero %d: ", i); scanf("%d", &fat);
    res=1;
    recebe=fat;
    for (recebe=recebe; recebe>=1; recebe--)
    {
      res=res*recebe;
    }
    printf("O fatorial de %d e: %d\n", fat, res);
  }
  
  return 0;
}
