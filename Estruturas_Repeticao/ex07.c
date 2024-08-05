/*
  Desenvolva um algoritmo que peça para o usuário inserir vários números inteiros. O
  algoritmo deverá contabilizar a quantidade de números positivos informados. Caso o
  usuário digite 0, o algoritmo deve mostrar quantidade contabilizada e encerrar
*/

#include"stdio.h"

int main(int argc, char const *argv[])
{
  int numeroInserido, contagem;

  for (contagem=0; numeroInserido!=0; contagem++)
  {
    printf("Insira um numero: "); scanf("%d", &numeroInserido);

    if (numeroInserido==0)
    {
      break;
    }
    
  }
  
  printf("Quantidade de positivos: %d", contagem);

  return 0;
}
