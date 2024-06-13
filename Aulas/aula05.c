#include <stdio.h>
#define texto "Entrada e saida de dados." /*contantes*/

int main ()
 
 {

  printf ("%s\n", texto);

  int idade = 0;
  float altura = 0.0;
  char nome [50] = "";

  printf ("Digite aqui sua idade: ");
  scanf ("%d", &idade);

  printf ("Digite sua altura: ");
  scanf("%f", &altura);
  
  printf ("Digite seu nome: ");
  scanf("%s", nome);

  printf ("Os dados informados, foram: \n");
  printf ("idade: %d.\n", idade);
  printf ("altura: %.2f.\n", altura);
  printf ("nome: %s.", nome);
  
 }