/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Cada degrau de uma escada tem X cm de
  altura. Faça uma função que receba essa altura, em centímetros, e a altura que o usuário
  deseja alcançar ao subir a escada, em metros. A função deve retornar o número de
  degraus necessários para se atingir a altura desejada (desprezando a altura do próprio
  usuário). Em seguida, crie um algoritmo para que o usuário possa informar os dados de
  entrada da função e, ao final, calcule e mostre o número de degraus.
*/

#include <stdio.h>

int calcDegraus(int a_deg, float a_esc)
{
  return (a_esc * 100) / a_deg;
}

int main(int argc, int const *argv[])
{
  float escada;
  int degrau, n_degraus;

  printf("Insira a altura de cada degrau:\n"); scanf("%d", &degrau);
  printf("Insira a altura da escada (m):\n"); scanf("%f", &escada);

  n_degraus = calcDegraus(degrau, escada);

  printf("Número de degraus: %d.\n", n_degraus);

  return 0;
}