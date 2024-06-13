#include<stdio.h>

int main(int argc, char const *argv[])
{
  float nota;

  printf("Insira a nota: ");
  scanf("%f", &nota);

  if (nota >= 4.0 && nota < 7.0) 
  /*
    Disjunção ("e"lógico): && [é verdade quando tudo for verdade]
    Conjunção("ou"lógico): || [é verdade se pelo menos 1 for verdade]
    negação("não"lógico): !   [é verdade quando o operando é falso]
  */
  {
    printf("Tem direito a exame! \n");
  }
  
  return 0;
}