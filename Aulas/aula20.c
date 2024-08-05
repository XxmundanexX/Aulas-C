#include"stdio.h"
#include"string.h"
#include"locale.h"

#define N 20

int main(int argc, char const *argv[])
{
  setlocale(LC_ALL,"Portuguese");
  char s1[N] = {"Lógica de "};
  char s2[N] = {"Programação"};

  printf("Antes do strcat \n\n");
  printf("str1: %s\n", s1);
  printf("str2: %s\n\n", s2);

  strcat(s1,s2);

  printf("Depois do strcat \n\n");
  puts(s1); //s1 recebe e junta ao seu conteúdo oque tem no s1 para si.
  return 0;
}
