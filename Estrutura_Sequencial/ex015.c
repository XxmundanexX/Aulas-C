/*Sabe-se que:
1 pé = 12 polegadas;
1 jarda = 3 pés;
1 milha = 1760 jardas;
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre
os resultados.
a) polegadas;
b) jardas;
c) milhas.*/

#include <stdio.h>

int main()
{
 float pes, jar, mil, pol;

 printf("Insira a medida em pes:\n");
 scanf("%f", &pes);

 pol = pes*12.0;
 jar = pes/3.0;
 mil = jar/1760.0;

 printf("Polegadas: %f.\n", pol);
 printf("Jardas: %f.\n", jar);
 printf("Milhas: %f.\n", mil);
 return 0;
}