/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que carregue uma matriz
  10x3 com as três notas de dez alunos. Mostre um relatório com o número do aluno
  (número da linha) e a prova em que cada aluno obteve menor nota. Ao final do relatório,
  mostre quantos alunos tiveram menor nota na prova 1, quantos alunos tiveram menor
  nota na prova 2 e quantos alunos tiveram menor nota na prova 3.
*/

#include "stdio.h"

int main()
{
  float notas[10][3];
  float menor;
  int i, j, p_menor, q1, q2, q3;

  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Insira a nota %d do aluno %d: ", j + 1, i + 1);
      scanf("%f", &notas[i][j]);
    }
  }

  q1 = 0;
  q2 = 0;
  q3 = 0;

  for (i = 0; i < 10; i++)
  {
    printf("Aluno %d\n", i + 1);
    menor = notas[i][0];
    p_menor = 1;
    for (j = 0; j < 3; j++)
    {
      if (notas[i][j] < menor)
      {
        menor = notas[i][j];
        p_menor = j + 1;
      }
    }

    printf("Prova de menor nota: %d\n", p_menor);

    switch (p_menor)
    {
     case 1:
      q1++;
      break;

     case 2:
      q2++;
      break;
      
     case 3:
      q3++;
      break;
    }
  }

  printf("Menores notas na primeira prova: %d.\n", q1);
  printf("Menores notas na segunda prova: %d.\n", q2);
  printf("Menores notas na terceira prova: %d.\n", q3);

  return 0;
}