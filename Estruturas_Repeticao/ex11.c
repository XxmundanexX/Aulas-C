/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que mostre os oito
  primeiros termos da sequência de Fibonacci.
  0-1-1-2-3-5-8-13-21-34-55-...
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  int nAtual, nAnterior1=1,nAnterior2=0, sequencia;

  printf("sequencia de fibonacci: ");
  printf("%d ", nAnterior2);
  printf("%d ", nAnterior1); 
  
  for (sequencia=3; sequencia<=8; sequencia++)
  {
    nAtual=nAnterior2+nAnterior1;
    nAnterior2=nAnterior1;
    nAnterior1=nAtual;
    
    printf("%d ", nAtual);
  }
  return 0;
}