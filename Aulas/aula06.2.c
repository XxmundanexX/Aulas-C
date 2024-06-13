#include <stdio.h>

int main ()

{

 int dados = 10;
 printf ("Antes do incremento: %d\n", dados);

 dados ++;
 printf ("Depois do incremento: %d\n", dados);

 dados --;
 printf ("Depois do decremento: %d\n", dados);
 
 dados += 3;
 printf ("Depois do incremento em 3 unidades: %d\n", dados);
 
 dados -=2;
 printf ("Depois do decremento em 2 unidades: %d\n", dados);
 
 dados *=10;
 printf ("Depois de multiplicar por 10: %d\n", dados);
 
 dados /= 2;
 printf ("Depois de dividir por 2: %d", dados);

}