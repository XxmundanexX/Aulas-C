/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Crie um procedimento que receba a
  quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Essa pessoa vai
  passar por vários países e precisa converter seu dinheiro em dólares, euro e libra
  esterlina. Sabe-se que a cotação do dólar é de R$ 4,00, do euro é R$ 4,25 e do iene é R$
  0,10. O procedimento deverá fazer a leitura dos dados do usuário e exibir o resultado
  das conversões diretamente, sem passagem de parâmetros. Desenvolva um algoritmo
  que invoque o procedimento para realizar os cálculos.
*/

#include <stdio.h>

void cotacoes()
{
  float reais;
  
  printf("Insira o valor em reais:\n"); scanf("%f", &reais);

  printf("Em dólares: %.2f.\n", reais / 4.00);
  printf("Em euros: %.2f.\n", reais / 4.25);
  printf("Em ienes: %.2f.\n", reais / 0.1);
}

int main(int argc, int const *argv[])
{
  cotacoes();

  return 0;
}