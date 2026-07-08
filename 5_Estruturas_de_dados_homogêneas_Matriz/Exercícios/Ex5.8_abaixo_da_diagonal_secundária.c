#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa que imprima na tela apenas os valores abaixo da diagonal secundária de uma matriz 4 x 4.
*/

int main() {
  int matriz[4][4], diagonalSecundária = 3;

  srand(time(NULL));

  for (int linha = 0; linha < 4; linha++)
    for (int coluna = 0; coluna < 4; coluna++)
      matriz[linha][coluna] = 1 + rand() % 100;

  for (int linha = 0; linha < 4; linha++) {
    for (int coluna = 0; coluna < 4; coluna++)
      coluna > diagonalSecundária ? printf("\t%d", matriz[linha][coluna]) : printf("\t.");
    diagonalSecundária--;
    printf("\n");
  }
  printf("\n");

  return 0;
}
