#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das
    matrizes e salvar em uma matriz C. Imprima as três matrizes.
*/

int main() {
  int matrizA[3][3], matrizB[3][3], matrizC[3][3];

  srand(time(NULL));

  for (int linha = 0; linha < 3; linha++)
    for (int coluna = 0; coluna < 3; coluna++) {
      matrizA[linha][coluna] = 1 + rand() % 100;
      matrizB[linha][coluna] = 1 + rand() % 100;
      matrizC[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
    }

  for (int linha = 0; linha < 3; linha++) {
    for (int coluna = 0; coluna < 3; coluna++) {
      printf("%d + %d = %d\n", matrizA[linha][coluna], matrizB[linha][coluna], matrizC[linha][coluna]);
    }
    printf("\n");
  }
  
  return 0;
}
