/*
    Desenvolva um algoritmo que peça para que o usuário informe a base e a altura de um 
    retângulo, e um terceiro número inteiro "op". Caso o usuário escolha "op" igual a 0, 
    calcule e mostre o perímetro do retângulo. Caso o usuário insira um valor 1 para "op", 
    calcule e mostre a área do retângulo. Se o usuário inserir um valor diferente de 0 e 1 
    para "op", mostrar a mensagem "Opção inválida.".
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
  float base, altura;   
  int option;
  char resp;    

  do
  {    
    printf("Digite 1 para calcular o per\241metro do ret\203ngulo\n");
    printf("Digite 2 para calcular  \240rea do ret\203ngulo\n");

    printf("Digite sua escolha aqui: "); scanf("%d", &option);

    if ((option < 3) && (option > 0))
    {    
            printf("Informe a base do ret\203ngulo: "); scanf("%f", &base);
            printf("Informe a altura do ret\203ngulo: "); scanf("%f", &altura);

        switch(option)
        {
            case 1:
            printf("A \240rea do ret\203ngulo \202: %.0f\n",  base * altura);
            break;

            case 2:
            printf("O per\241metro do ret\203ngulo \202: %.0f\n",   2*(base+altura));
            break;
        }
    }
    if ((option == 0) || (option > 2))
    {
        printf("Opera\207\306o inv\240lida!\n");
    }
    fflush(stdin);
    printf("Deseja continuar? digite S para sim ou digite N para  n\306o.\n");
    scanf("%c", &resp);
  }
  while((resp == 's') || (resp == 'S'));
  system("pause");
  return 0;
}