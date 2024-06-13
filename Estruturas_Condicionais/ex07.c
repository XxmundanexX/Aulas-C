/*
  A nota final de um estudante é calculada a
  partir de três notas atribuídas respectivamente a um trabalho de laboratório, a uma
  avaliação semestral e a um exame final. A média das três notas mencionadas
  anteriormente obedece aos pesos a seguir:
  
  Nota // Peso

  Trabalho de laboratório // 2
  Avaliação semestral // 3
  Exame final // 4
  
  Faça um programa que receba as três notas, calcule e mostre a média ponderada e o
  conceito que segue a tabela abaixo:

  Média ponderada // Conceito
  
  8,0 ~ 10,0 // A
  7,0 ~ 8,0 // B
  6,0 ~ 7,0 // C
  5,0 ~ 6,0 // D
  0,0 ~ 5,0 // E
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
  float num1, num2, num3;
  float peso1=2, peso2=3, peso3=4;
  char resposta;
  
  do
  {
    printf("Insira a nota do trabalho: "); scanf("%f", &num1);
    printf("Insira a nota da avalia\207\306o: "); scanf("%f", &num2);
    printf("Insira a nota do exame final: "); scanf("%f", &num3);
    
    if ((num1>10) || (num2>10) || (num3>10))
    {
      printf("Alguma nota foi digitada incorretamente, revise e tente novamente.\n");
    }

    else
    {
      float mediaPonderada = ((num1*peso1) + (num2*peso2) + (num3*peso3)) / (peso1+peso2+peso3);

      printf("M\202da ponderada: %.2f\n", mediaPonderada);

      if ((mediaPonderada<11) && (mediaPonderada>8))
      {
        printf("Classifica\207\306o A.\n");
      }
            if ((mediaPonderada<8) && (mediaPonderada>7))
      {
        printf("Classifica\207\306o B.\n");
      }
            if ((mediaPonderada<7) && (mediaPonderada>6))
      {
        printf("Classifica\207\306o C.\n");
      }
            if ((mediaPonderada<6) && (mediaPonderada>5))
      {
        printf("Classifica\207\306o D.\n");
      }
            if ((mediaPonderada<5) && (mediaPonderada>=0))
      {
        printf("Classifica\207\306o E.\n");
      }
    }
    
    fflush(stdin);

    printf("Deseja continuar? Digite S para sim ou N para n\306o.\n"); 
    scanf("%c", &resposta);

  } 
  while ((resposta == 'S') || (resposta == 's'));
  return 0;
}