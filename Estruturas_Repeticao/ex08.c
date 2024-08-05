/*
  Desenvolva um algoritmo que peça para o usuário informar dois números. Após isso, o
  algoritmo deve mostrar cálculo o primeiro número elevado ao segundo. Ao final, o
  algoritmo deve perguntar se o usuário deseja repetir a operação. Caso o usuário insira
  o caractere "s", o algoritmo solicita novamente dois números e mostra novamente a
  potência do primeiro pelo segundo. Caso contrário, o algoritmo é encerrado
*/

#include <stdio.h>
#include <math.h>

int main()
{
  float A, B, res;
  char op;

  do
  {
    printf("Insira o primeiro numero: "); scanf("%f", &A);
    fflush(stdin);
    printf("Insira o segundo numero: "); scanf("%f", &B);
    fflush(stdin);

    res = pow(A, B);

    printf("A elevado a B: %2.f\n", res);

    printf("Deseja repetir a operacao? (tecle S para sim ou N para nao)"); scanf("%c", &op);
    fflush(stdin);

  }while(op == 'S' || op == 's');
  return 0;
}
