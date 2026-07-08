#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o
    vetor antes e após a ordenação.
*/

int main() {
  int vetor[100], cópia, troca;

  srand(time(NULL));

  for (int índice = 0; índice < 100; índice++){
    vetor[índice] = 1 + rand() % 100;
    printf("| %d ", vetor[índice]);
  }

  printf("\n");

  do {
    troca = 0;
    for (int índice = 0; índice < 99; índice++)
      if (vetor[índice] > vetor[índice + 1]) {
        cópia = vetor[índice];
        vetor[índice] = vetor[índice + 1];
        vetor[índice + 1] = cópia;
        troca = 1;
      }
  } while (troca == 1);

  printf("\n");

  for (int índice = 0; índice < 100; índice++)
    printf("| %d ", vetor[índice]);

  printf("\n\n");

  return 0;
}
