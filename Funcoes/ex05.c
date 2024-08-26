/*
  (Adaptado de ASCENCIO e CAMPOS, 2008) Sabe-se que o quilowatt de energia custa um
  milésimo do salário mínimo. Faça um procedimento que receba o valor do salário
  mínimo e quantidade de quilowatts consumida por uma residência. O procedimento
  deve calcular e retornar através de passagem de parâmetros por referência:
  a) o valor, em reais, de cada quilowatt;
  b) o valor, em reais, a ser pago por essa residência;
  c) o valor, em reais, a ser pago com desconto de 15%.
  Sabendo disso, desenvolva um algoritmo que peça para o usuário inserir o valor do
  salário mínimo e a quantidade de quilowatts consumida. Invoque o respectivo
  procedimento e mostre, na tela, as informações dos itens a), b) e c).
*/

#include <stdio.h>

void calcKW(float v_sal, float q_kw, float *v_kw, float *v_rs, float *v_dsc)
{
  *v_kw = v_sal / 1000.0;
  *v_rs = *v_kw * q_kw;
  *v_dsc = *v_rs - (*v_rs) * 0.15;
}

int main(int argc, int const *argv[])
{
  float val_sal, qtde_kw, val_kw, val_reais, val_desc;

  printf("Insira o salário mínimo:\n"); scanf("%f", &val_sal);
  printf("Insira a quantidade de KW gastos:\n"); scanf("%f", &qtde_kw);

  calcKW(val_sal, qtde_kw, &val_kw, &val_reais, &val_desc);

  printf("Valor de 1 KW (em R$): %.2f.\n", val_kw);
  printf("Valor a ser pago: R$ %.2f.\n", val_reais);
  printf("Valor com desconto de 15%%: R$ %.2f.\n", val_desc);

  return 0;
}