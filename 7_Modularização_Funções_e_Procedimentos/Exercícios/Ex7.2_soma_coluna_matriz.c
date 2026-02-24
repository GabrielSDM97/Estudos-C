#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
    Faça uma função em C que calcule e retorne a soma de uma coluna c de uma matriz.
*/

int somaCol(int linha, int colunas, int matriz[linha][colunas]) {
  int somaColuna = 0;

  for (int coluna = 0; coluna < colunas; coluna++)
    somaColuna += matriz[linha][coluna];
  return somaColuna;
}

int main() {
  int colunas, linhas, somaColuna;

  printf("Linhas e Colunas: ");
  scanf("%d%d", &linhas, &colunas);
  printf("\n");

  int matriz[colunas][linhas];

  srand(time(NULL));

  for (int linha = 0; linha < linhas; linha++) {
    for (int coluna = 0; coluna < colunas; coluna++) {
      matriz[linha][coluna] = 1 + rand() % 1000;
      coluna < colunas-1 ? printf("\t%d\t+", matriz[linha][coluna]) : printf("\t%d\t=", matriz[linha][coluna]);
    }
    somaColuna = somaCol(linha, colunas, matriz);
    printf("\t%d\n", somaColuna);
  }
  printf("\n");
  return 0;
}
