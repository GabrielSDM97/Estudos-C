#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* A função "realloc" não aumenta um vetor, mas sim copia os dados do
   vetor e os envia para uma nova região da memória com o novo tamanho definido. */

int *alocarMemória(int size) {
  int *ponteiro = malloc(size * sizeof(int));
  return ponteiro;
}

void imprimirVetor(int *array, int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", *(array + i));
}

void preencherVetor(int *array, int size) {
  for (int i = 0; i < size; i++)
    *(array + i) = 1 + rand() % 99;
}

int main() {
  int tamanho = 10, *vetor = alocarMemória(tamanho);

  srand(time(NULL));

  if (vetor) {
    printf("Alocação efetuada com sucesso!\n");
    printf("Tamanho do vetor: %d\n", tamanho);
    preencherVetor(vetor, tamanho);
    imprimirVetor(vetor, tamanho);
  } else
    printf("Erro na alocação!");

  printf("\n\nInsira um novo tamanho para o vetor: ");
  scanf("%d", &tamanho);
  printf("\n");
  // Sintaxe: realloc(ponteiro, novo tamanho).
  vetor = realloc(vetor, tamanho * sizeof(int));
  // Nova verificação de realocação de memória.
  if (vetor) {
    printf("Realocação efetuada com sucesso!\n");
    printf("Tamanho do vetor: %d\n", tamanho);
    imprimirVetor(vetor, tamanho);
  } else
    printf("Erro na realocação!\n");
  printf("\n\n");

  return 0;
}