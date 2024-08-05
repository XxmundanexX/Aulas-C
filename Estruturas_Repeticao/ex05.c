/*
  Charlinho tem 11 anos, mede 1,40 metros de altura e cresce em média 2,1 centímetros
  ao ano. Seu irmão, Bossa, aos 14 anos, tem 1,45 metros de altura e cresce em média 1,1
  centímetro por ano. Elabore um programa que conte quantos anos serão necessários
  para que a altura de Charlinho ultrapasse a de Bossa.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  int charlinhoIdade=11, bossaIdade=14;
  float charlinhoMede=140, bossaMede=145;
  float charlinhoCresce=2.1, bossaCresce=1.1;
  int anos;

  for (anos=1; charlinhoMede<bossaMede; anos++)
  {
    bossaMede=bossaMede+bossaCresce;
    charlinhoMede=charlinhoMede+charlinhoCresce;
  }
  printf("serao necessarios: %d anos", anos);
  return 0;
}
