#include "stdio.h"
#include "string.h"
#include "locale.h"

#define N 20

int main(int argc, char const *argv[])
{
  setlocale(LC_ALL,"Portuguese");

  char hardText[N]= ("/exit");
  char senha_usr[N];
  int ok;

  printf("Digite um texto: ");
  gets(senha_usr);

  ok=strcmp(hardText,senha_usr);

  if (ok==0)
  {
    printf("textos iguais.\n");
  }
  else
  {
    printf("textos diferentes.\n");
  }

  return 0;
}