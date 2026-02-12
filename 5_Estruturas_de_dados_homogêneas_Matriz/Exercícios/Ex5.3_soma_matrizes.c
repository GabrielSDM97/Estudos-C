#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das
    matrizes e salvar em uma matriz C. Imprima as três matrizes.
*/

int main() {
  int matriz = 0, matrizA[3][3], matrizB[3][3], matrizC[3][3];

  srand(time(NULL));

  for (int linha = 0; linha < 3; linha++)
    for (int coluna = 0; coluna < 3; coluna++) {
      matrizA[linha][coluna] = 1 + rand() % 100;
      matrizB[linha][coluna] = 1 + rand() % 100;
      matrizC[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
    }

  do {
    matriz += 1 ;
    for (int linha = 0; linha < 3; linha++) {
      for (int coluna = 0; coluna < 3; coluna++) {
        if (matriz == 1)
          coluna == 0 && linha == 0 ? printf("\t---- Matriz A ----\n \t%d", matrizA[linha][coluna]) : printf("\t%d", matrizA[linha][coluna]);
        else if (matriz == 2)
          coluna == 0 && linha == 0 ? printf("\t---- Matriz B ----\n \t%d", matrizB[linha][coluna]) : printf("\t%d", matrizB[linha][coluna]);
        else if (matriz == 3)
          coluna == 0 && linha == 0 ? printf("\t---- Matriz C ----\n \t%d", matrizC[linha][coluna]) : printf("\t%d", matrizC[linha][coluna]);
      }
      printf("\n");
    }
    printf("\n");
  } while (matriz < 3);
  
  return 0;
}
