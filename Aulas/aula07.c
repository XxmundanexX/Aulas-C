/* - Operadores racionais
   -  Maior (>): >
   - Maior ou igual (>=): >=
   - Menor (<): <
   - Menor ou igual (<=): <=
   - Igual (=): ==
   - Diferente (): !=
*/

#include<stdio.h>

int main(int argc, char const *argv[])

{
  float nota;

  printf("Insira a nota: ");
  scanf("%f", &nota);

  if (nota >= 7.0) /* Comando if: se a condição é verdadeira, o bloco é executado, senão, é ignorado.*/
  {
   printf("Aprovado(a)!\n");
  }
  return 0;
}