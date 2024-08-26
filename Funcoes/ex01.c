/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) O custo de um carro novo ao consumidor
  final é o preço de fábrica somado ao percentual de lucro do distribuidor, acrescido dos
  impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de
  fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos.
  Em cada item, crie uma função distinta para calcular e retornar:

  a) o valor correspondente ao lucro do distribuidor;
  b) o valor correspondente aos impostos;
  c) o preço final do veículo.

  Após criar cada uma das funções, desenvolva um algoritmo que declare e invoque cada
  uma das funções, mostrando o lucro do distribuidor, os impostos e o valor final do
  veículo.
*/

#include <stdio.h>

float calcLucroDist(float p_fab, float por_dist)
{
  return p_fab * por_dist / 100.0;
}
float calcImpostos(float p_fab, float por_imp)
{
  return p_fab * por_imp / 100.0;
}
float calcPrecoFinal(float p_fab, float v_dist, float v_imp)
{
  return p_fab + v_dist + v_imp;
}

int main(int argc, int const *argv[])
{
  float preco_f, porce_dist, porc_i, lucr_dist, imp, vlr_f;

  printf("Insira o preço da fábrica:\n"); scanf("%f", &preco_f);
  printf("Insira a porcentagem de lucro do distribuidor:\n"); scanf("%f", &porce_dist);
  printf("Insira a porcentagem de impostos:\n"); scanf("%f", &porc_i);

  lucr_dist = calcLucroDist(preco_f, porce_dist);
  imp = calcImpostos(preco_f, porc_i);
  vlr_f = calcPrecoFinal(preco_f, lucr_dist, imp);

  printf("Lucro do distribuidor: R$ %.2f.\n", lucr_dist);
  printf("Impostos: R$ %.2f.\n", imp);
  printf("Valor final: R$ %.2f.\n", vlr_f);

  return 0;
}