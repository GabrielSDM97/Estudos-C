#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// É possível criar função de tipo ponteiro.
int *alocarMemória(int qtd) {
  int *ponteiro = malloc(10 * sizeof(int));
  return ponteiro;
}

void preencherVetor(int *array, int size) {
  for (int i = 0; i < size; i++)
    // Aritmética de ponteiros em vetor
    *(array + i) = 1 + rand() % 99;
//    array[i]
}

void imprimirVetor(int *array, int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", *(array + i));
}

int main() {
  int *vetor;

  srand(time(NULL));

  vetor = alocarMemória(10);

  if (vetor) {
    printf("Memória alocada com sucesso!\n");
    preencherVetor(vetor, 10);
    imprimirVetor(vetor, 10);
  }
  else
    printf("Erro na alocação!\n");
  printf("\n\n");

  return 0;
}