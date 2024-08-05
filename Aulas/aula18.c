#include "stdio.h"

int main(int argc, char const *argv[])
{
  char s[10];

  printf("(leitura com gets) escreva algo: "); gets(s); fflush(stdin);
  puts(s);
  puts("");

  printf("(leitura com fgets) escreva algo: "); fgets(s, 10, stdin); fflush(stdin);
  puts("Resultado:");
  puts(s);

  return 0;
}

//string não se altera com "=" e sim com STRCPY(<destino>, <origem>);.

/*
STRCPY: atualiza uma string
STRCAT: junta duas strings
STRLEN: mostra o tamanho da string
STRCMP: compara duas strings pra saber se são iguais ou não
*/