/*
  Faça um programa que seja capaz de armazenar os dados de três pessoas: nome, idade,
  peso e altura. Ao final, o algoritmo deve mostrar, na tela, o nome e a idade da primeira
  pessoa e o peso e altura da última pessoa.
*/

#include <stdio.h>
struct pessoa
{
  char nome[100];
  int idade;
  float peso;
  float altura;
};

int main()
{
  struct pessoa pessoas[3];
  int i;

  for (i = 0; i < 3; i++)
  {
    printf("Digite o nome %d:\n", i + 1);
    scanf("%s", &pessoas[i].nome);
    printf("Insira a idade %d:\n", i + 1);
    scanf("%d", &pessoas[i].idade);
    printf("Digite o peso %d:\n", i + 1);
    scanf("%f", &pessoas[i].peso);
    printf("Insira a altura %d:\n", i + 1);
    scanf("%f", &pessoas[i].altura);
  }
  printf("Nome da primeira pessoa: %s.\n", pessoas[0].nome);
  printf("Idade da primeira pessoa: %d.\n", pessoas[0].idade);
  printf("Peso da última pessoa: %.3f.\n", pessoas[2].peso);
  printf("Altura da da última pessoa: %.2f.\n", pessoas[2].altura);

  return 0;
}