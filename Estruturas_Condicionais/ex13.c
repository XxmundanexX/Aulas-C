/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que mostre o menu de
  opções a seguir, receba a opção do usuário e dos dados necessários para executar cada
  operação. Suponha que o usuário não irá inserir valores inválidos.

  Menu de opções:

  1. Somar dois números
  2. Raiz quadrada de um número
  Digite a opção desejada
*/

#include"stdio.h"
#include"math.h"

int main(int argc, char const *argv[])
{
  float num1, num2;
  int Option;

  printf("---Menu de Escolha---\n");
  printf("1. Somar dois n\243meros;\n");
  printf("2. Ra\241z quadrada de um n\243mero;\n");

  printf("Digite sua escolha aqui: "); scanf("%d", &Option);

  switch (Option)
  {
  case 1:
    printf("Insira o primeiro n\243mero: "); scanf("%f", &num1);
    printf("Insira o segundo n\243mero: "); scanf("%f", &num2);

    printf("O resultado da soma \202: %.0f\n", num1 + num2);
    break;
  
  case 2:
    printf("Insira o n\243mero: "); scanf("%f", &num1);

    printf("A ra\241z quadrada de %.0f \202: %.0f", num1, sqrt(num1));
    break;

    default:
    break;
  }
  if ((Option!=1)&&(Option!=2))
  {
    printf("Op\207\306o inv\240lida!");
  }
  return 0;
}