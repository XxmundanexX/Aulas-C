#include <stdio.h>

int main ()

{
  int idade = 0;
  float peso = 0.0;

  printf("O valor inicial da idade: %d.\n", idade);

  printf("Digite uma idade: ");
  scanf("%d", &idade); /*sempre usar & para definir uma variável dentro do scanf*/

  printf("Digite seu peso: ");
  scanf("%f", &peso);

  printf("Entao voce tem: %d anos e pesa %f.", idade, peso);
}