#include"stdio.h"

int main(int argc, char const *argv[])
{
  char s[10];

  printf("Escreva algo: (Forma convencional)"); scanf("%s", s); fflush(stdin);
  printf("Sua resposta: %s\n\n", s);

  //na forma aprimorada você controla melhor os espaços sem ocupar espaços de memória que não foram permitidos.
  printf("Escreva algo: (Forma aprimorada)"); scanf("%9[^\n]s", s); fflush(stdin); 
  printf("Sua resposta: %s\n\n", s);
  return 0;
}