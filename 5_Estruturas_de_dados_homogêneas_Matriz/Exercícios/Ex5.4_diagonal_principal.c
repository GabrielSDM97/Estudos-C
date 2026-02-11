#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa que imprima a diagonal principal de uma matriz 5 x 5.
*/

int main() {
  int matriz[5][5], diagonalPrincipal = 0;

  srand(time(NULL));

  for (int linha = 0; linha < 5; linha++)
    for (int coluna = 0; coluna < 5; coluna++)
      matriz[linha][coluna] = 1 + rand() % 100;

  for (int linha = 0; linha < 5; linha++) {
    for (int coluna = 0; coluna < 5; coluna++)
      coluna == diagonalPrincipal ? printf("\t%d\t", matriz[linha][coluna]) : printf("\t.\t");
    diagonalPrincipal++;
    printf("\n");
  }
  printf("\n");

  return 0;
}

