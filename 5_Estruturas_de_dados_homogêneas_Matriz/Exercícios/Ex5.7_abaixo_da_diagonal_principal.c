#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma matriz 4 x 4.
*/

int main() {
  int matriz[4][4], diagonalPrincipal = 0;

  srand(time(NULL));

  for (int linha = 0; linha < 4; linha++)
    for (int coluna = 0; coluna < 4; coluna++) 
      matriz[linha][coluna] = 1 + rand() % 100;

  for (int linha = 0; linha < 4; linha++) {
    for (int coluna = 0; coluna < 4; coluna++)
      coluna < diagonalPrincipal ? printf("\t%d", matriz[linha][coluna]) : printf("\t.");
    diagonalPrincipal++;
    printf("\n");
  }
  printf("\n");

  return 0;
}
