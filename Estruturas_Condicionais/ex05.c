/*
  Desenvolva um algoritmo que simule uma calculadora. Você deve dar a opção de o
  usuário escolher entre: 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir. O usuário só
  conseguirá processar dois números inteiros por vez.
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
  float primeiroNumero, segundoNumero;
  int option;
  char resp;
  
  do
  {
   printf("Digite 1 para somar;\n");
    printf("Digite 2 para subtrair;\n");
    printf("Digite 3 para multiplicar;\n");
    printf("Digite 4 para dividir;\n\n");

    printf("Digite sua escolha aqui: "); scanf("%d", &option); 

    
    if ((option < 5) && (option > 0))
    {
      printf("Insira o primeiro n\243mero: "); scanf("%f", &primeiroNumero);
      printf("Insira o segundo n\243mero: "); scanf("%f", &segundoNumero);
      
      switch (option)
      {
      case 1:
        printf("A soma dos valores \202: %.0f\n", primeiroNumero + segundoNumero);
        break;
      
      case 2:
        printf("A subtra\207\306o dos valores \202: %.0f\n", primeiroNumero - segundoNumero); 
        break;

      case 3:
        printf("A multiplica\207\306o dos valores \202: %.0f\n", primeiroNumero * segundoNumero);
        break;

      case 4:
        if (primeiroNumero || segundoNumero == 0)
        {
          printf("Divis\306o por zero.\n");
        }
        if (primeiroNumero && segundoNumero != 0)
        {
        printf("A divis\207\306o dos valores \202: %.0f\n", primeiroNumero / segundoNumero);
        }
        break;
      }
    }

    if ((option == 0) || (option > 4))
    {
      printf("Op\207\306o inv\240lida!\n");
    }
    
    printf("Deseja continuar? Digite S para sim ou N para nao: \n");
    scanf(" %c", &resp);
  } 
  while((resp == 's') || (resp == 'S'));
  system("pause");
  return 0;
}
