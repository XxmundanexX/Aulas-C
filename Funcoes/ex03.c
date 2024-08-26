/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Pedro comprou um saco de ração para seus
  gatos, com o peso em quilos. Faça uma função que receba o peso do saco de ração, em
  quilos, o número de gatos e a quantidade de ração fornecida para cada gato por dia, em
  gramas. A função deve retornar o total de quilos de ração restante no saco, após um dia
  de consumo. Assim sendo, considerando que Pedro possui dois gatos, crie um algoritmo
  que invoque a função recém criada para calcular e mostrar quanto restará de ração no
  saco após cinco dias.
*/

#include <stdio.h>

float calcRacaoSaco(float s, float n, float q)
{
  float r = s - (n * q / 1000.0);
  return r;
}

int main(int argc, int const *argv[])
{
  float saco, n_gatos, qtde_gr, sobra;

  printf("Qual o peso do saco (quilos)?\n"); scanf("%f", &saco);
  printf("Qual o número de gatos?\n"); scanf("%f", &n_gatos);

  printf("Qual o peso da porção diária (gramas)?\n"); scanf("%f", &qtde_gr);

  sobra = calcRacaoSaco(saco, n_gatos, qtde_gr);
  sobra = calcRacaoSaco(sobra, n_gatos, qtde_gr);
  sobra = calcRacaoSaco(sobra, n_gatos, qtde_gr);
  sobra = calcRacaoSaco(sobra, n_gatos, qtde_gr);
  sobra = calcRacaoSaco(sobra, n_gatos, qtde_gr);

  printf("Após 5 dias, sobrarão: %.3f Kg de ração.\n", sobra);

  return 0;
}
