#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa que imprima a diagonal secundária de uma matriz 7 x 7.
*/

int main() {
  int matriz[7][7], diagonalSecundária = 6;

  srand(time(NULL));

  for (int linha = 0; linha < 7; linha++)
    for (int coluna = 0; coluna < 7; coluna++)
      matriz[linha][coluna] = 1 + rand() % 100;

  for (int linha = 0; linha < 7; linha++) {
    for (int coluna = 0; coluna < 7; coluna++)
      coluna == diagonalSecundária ? printf("\t%d", matriz[linha][coluna]) : printf("\t.");
    diagonalSecundária--;
    printf("\n"); 
  }
  printf("\n");

  return 0;
}
