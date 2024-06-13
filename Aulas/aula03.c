/* Especificadores de formato: printf.

d: Números inteiros em base decimal 
x: Números inteiro em base hexadecimal 
f: Números reias, com casas depois da vírgula(com casas decimais) 
.<num>f: Especifica quantos digitos serão impressos após a vírgula 
e: Números em notação cientifica (com casas decimais) 
c: Caracteres alfanuméricos (texto) 
s: sequencia de caracteres alfa numéricos (texto) */

/* Especificadores de escape: printf 

\a: Toca o alarme sonoro padrão do sistema
\b: Backspace
\n: Quebra de linha
\t: Tabulação horizontal (TAB) 
\r: Retorna ao início da linha
\0: Caractere nulo
\v: Tabulação vertical
\\: Caractere \
\': Caractere '
\": Caractere "
\?: Caractere ?
%%: Caractere %
\123: Caractere relacionado ao código *123* em octal (ASCII)
\X12: Caractere relacionado ao código *12* em hexadecimal (ASCII) */

#include <stdio.h>

int main()

{
  printf("Oi, tudo bem? Tenho 6 anos e programo.\n");
  
  printf("Valor inteiro: %d.\n", 10);
  printf("Valor real: %f.\n", 3.14159265);
  printf("Valor real, com apenas duas casas: %.2f.\n", 3.14159265);
  printf("Dados de texto: %c.\n", 'a');
  printf("Dados de texto: %s.\n", "testando");
}