/*
  Faça um programa que seja capaz de armazenar os dados de um produto: código, nome,
  valor e quantidade. Seu programa deve ser capaz de armazenar 5 produtos. Ao final dos
  cadastros, o usuário deve inserir o código de um produto e o seu programa deve
  imprimir, na tela, as informações daquele produto. Caso o produto não se encontre
  cadastrado, deve-se informar ao usuário a seguinte mensagem: "código não
  encontrado".
*/

#include <stdio.h>
#include <stdbool.h>

struct produto
{
  int codigo;
  char nome[100];
  float valor;
  float qtde;
};

int main()
{
  struct produto lista_prod[5];
  int i, X, p;
  bool achou;

  for (i = 0; i < 5; i++)
  {
    printf("Insira o código do produto %d:\n", i + 1); scanf("%d", &lista_prod[i].codigo);
    printf("Insira o nome do produto %d:\n", i + 1); scanf("%s", lista_prod[i].nome);
    printf("Insira o valor do produto %d:\n", i + 1); scanf("%f", &lista_prod[i].valor);
    printf("Insira a quantidade do produto %d:\n", i + 1); scanf("%f", &lista_prod[i].qtde);
  }

  printf("Insira a chave de busca:\n"); scanf("%d", &X);

  achou = false;
  i = 0;

  while ((i < 5) && (!achou))
  {
    if (lista_prod[i].codigo == X)
    {
      achou = true;
      p = i + 1;
    }
    i++;
  }

  if (achou)
  {
    printf("Nome: %s.\n", lista_prod[i].nome);
    printf("Valor: %.2f.\n", lista_prod[i].valor);
    printf("Quantidade: %.3f.\n", lista_prod[i].qtde);
  }
  else
  {
    printf("Produto não encontrado.\n");
  }

  return 0;
}