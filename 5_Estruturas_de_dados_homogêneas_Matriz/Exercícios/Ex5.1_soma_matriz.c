#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.
*/

int main() {
  int matriz[5][7], soma = 0;

  srand(time(NULL));

  for (int linha = 0; linha < 5; linha++) {

    for (int coluna = 0; coluna < 7; coluna++) {
      matriz[linha][coluna] = 1 + rand() % 3;
      soma += matriz[linha][coluna];
      linha == 4 && coluna == 6 ? printf("\t%d \t= %d", matriz[linha][coluna], soma) : printf("\t%d \t+", matriz[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}
