#include <stdio.h>

int main () 

{

 int A, B, mais, menos, vezes, dividir;

 printf ("Digite o primeiro valor: ");
 scanf ("%d", &A);

 printf ("Digite o segundo valor: ");
 scanf ("%d", &B);

 mais = A + B;
 menos = A - B;
 vezes = A * B;
 dividir = A / B;

 printf ("Resultados: \n");
 printf ("Soma: %d\n", mais);
 printf ("Subtracao: %d\n", menos);
 printf ("Multiplicacao: %d\n", vezes);
 printf ("Divisao: %d\n", dividir); 
 

}