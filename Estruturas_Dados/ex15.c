/*
  Faça um programa que seja capaz de armazenar os dados de uma pessoa: nome, idade,
  peso e altura. Seu programa deve ser capaz de armazenar 5 pessoas. Ao final dos
  cadastros, o seu programa deve imprimir, na tela, todas as informações de todas as
  pessoas. Seu programa deve mostrar, também, o nome da pessoa mais magra, nome da
  pessoa mais baixa e a média das idades de todas as pessoas.
*/

#include <stdio.h>
#include <string.h>

struct pessoa
{
  char nome[100];
  int idade;
  float peso;
  float altura;
};

int main()
{
  struct pessoa pessoas[5];
  float p_magra, a_baixa, m_idade;
  char n_magra[100], n_baixa[100];
  int i;

  for (i = 0; i < 5; i++)
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

  p_magra = pessoas[0].peso;
  a_baixa = pessoas[0].altura;
  m_idade = pessoas[0].idade;
  strcpy(n_magra, pessoas[0].nome);
  strcpy(n_baixa, pessoas[0].nome);

  for (i = 1; i < 5; i++)
  {
    if (pessoas[i].peso < p_magra)
    {
      p_magra = pessoas[i].peso;
      strcpy(n_magra, pessoas[i].nome);
    }
    if (pessoas[i].altura < a_baixa)
    {
      a_baixa = pessoas[i].altura;
      strcpy(n_baixa, pessoas[i].nome);
    }
    m_idade += pessoas[i].idade;
  }
  
  m_idade /= 5;

  printf("Pessoa mais magra: %s.\n", n_magra);
  printf("Pessoa mais baixa: %s.\n", n_baixa);
  printf("Média das idades: %.2f.\n", m_idade);

  return 0;
}