/*
    (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três notas de
    um aluno, calcule e mostre a média aritmética e a mensagem que segue a tabela abaixo.
    Para alunos de exame, calcule e mostre a nota que deverá ser tirada no exame para
    aprovação, considerando que a média no exame é 6,0.

    Média aritmética // Mensagem

        0,0 ~ 3,0    // Reprovado
        3,0 ~ 7,0    // Exame
        7,0 ~ 10,0   // Aprovado
*/

#include"stdio.h"

int main(int argc, char const *argv[])
{
    float num1, num2, num3, mediaAritmetica, notaExame;

    printf("Insira a primeira nota: "); scanf("%f", &num1);
    printf("Insira a segunda nota: "); scanf("%f", &num2);
    printf("Insira a terceira nota: "); scanf("%f", &num3);

    mediaAritmetica = (num1+num2+num3)/3;

    if ((mediaAritmetica>=0.0) && (mediaAritmetica<3.0))
    {
        printf("M\202dia: %.1f\n", mediaAritmetica);
        printf("Reprovado!\n");
    }
    if ((mediaAritmetica>=3.0) && (mediaAritmetica<7.0))
    {
        printf("M\202dia: %.1f\n", mediaAritmetica);
        printf("Exame\n");

        notaExame = 12 - mediaAritmetica;

        printf("\220 preciso tirar %.1f.\n", notaExame);
    }
    if ((mediaAritmetica>=7.0) && (mediaAritmetica<=10.0))
    {
        printf("M\202dia: %.1f\n", mediaAritmetica);
        printf("Aprovado!");
    }
    if (mediaAritmetica>10)
    {
        printf("nota digitada incorretamente.\n");
    }
    return 0;
}
