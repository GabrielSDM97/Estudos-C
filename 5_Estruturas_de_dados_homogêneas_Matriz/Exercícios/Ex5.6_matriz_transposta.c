#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as
   duas matrizes na tela.
*/

int main() {
  int matriz[5][4], matrizTransposta[4][5];

  srand(time(NULL));

  for (int linha = 0; linha < 5; linha++)
    for (int coluna = 0; coluna < 4; coluna++) {
      matriz[linha][coluna] = 1 + rand() % 100;
      matrizTransposta[coluna][linha] = matriz[linha][coluna];
    }

  for (int linha = 0; linha < 5; linha++) {
    for (int coluna = 0; coluna < 4; coluna++) {
      printf("\t%d\t", matriz[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");

  for (int linha = 0; linha < 4; linha++) {
    for (int coluna = 0; coluna < 5; coluna++) {
      printf("\t%d\t", matrizTransposta[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}
