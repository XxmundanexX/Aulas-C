#include "stdio.h"
#include "string.h"

#define TAM 50

struct tipo_pessoa
{
  int idade;
  float peso;
  char nome[TAM];
};

  typedef struct tipo_pessoa tipo_pessoa;

int main(int argc, char const *argv[])
{

  //criando e inicializando

  tipo_pessoa pes={0,0.0,"Teste"};

  printf("Início: \n");
  printf("idade: %d\n", pes.idade);
  printf("peso: %.2f\n", pes.peso);
  printf("nome: %s\n", pes.nome);

  //Atribuindo valor aos campos

  pes.idade=10;
  pes.peso=99.99;
  strcpy(pes.nome, "Texto");

  printf("\nAlterando valores via código: \n");
  printf("idade: %d\n", pes.idade);
  printf("peso: %.2f\n", pes.peso);
  printf("nome: %s\n", pes.nome);

  //Solicitando inserções via teclado

  printf("\nInsira sua idade: "); scanf("%d", &pes.idade); fflush(stdin);
  printf("Insira seu peso: "); scanf("%f", &pes.peso); fflush(stdin);
  printf("Isira seu nome: "); fgets(pes.nome, TAM, stdin); fflush(stdin);

  printf("\nAlterando com dados do Usuário: \n");
  printf("idade: %d\n", pes.idade);
  printf("peso: %.2f\n", pes.peso);
  puts(pes.nome);

  return 0;
}