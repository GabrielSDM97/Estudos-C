#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Fazer uma função recursiva para calcular a média dos pares de um vetor.
*/

float paresVetor(int vetor[], int índiceFinal, int índice, int contadorPares, int somaPares) {
  if (índice == índiceFinal) {
    printf("= %d/%d ", somaPares, contadorPares);
    float médiaPares = (float)somaPares/contadorPares;
    return médiaPares;
  }
  if (vetor[índice] % 2 == 0) {
    somaPares == 0 ? printf("%d ", vetor[índice]) : printf("+ %d ", vetor[índice]);
    somaPares += vetor[índice];
    contadorPares++;
  }
  return paresVetor(vetor, índiceFinal, índice + 1, contadorPares, somaPares);
}

void inserirValores(int vetor[], int índices) {
  printf("Vetor: ");
  for (int índice = 0; índice < índices; índice++) {
    vetor[índice] = 1 + rand() % 10;
    índice == 0 ? printf("| %d |", vetor[índice]) : printf(" %d |", vetor[índice]);
  }
}

int main() {
  int índices, continuar;

  srand(time(NULL));

  do {
  printf("Quantos índices o vetor terá? ");
  scanf("%d", &índices);

  int vetor[índices];

  inserirValores(vetor, índices);
  printf("\nMédia dos pares do vetor: ");
  printf("= %.2f\n\n", paresVetor(vetor, índices, 0, 0, 0));

  printf("Continuar? [1]Sim: ");
  scanf("%d", &continuar);
  } while (continuar == 1);

  return 0;
}
