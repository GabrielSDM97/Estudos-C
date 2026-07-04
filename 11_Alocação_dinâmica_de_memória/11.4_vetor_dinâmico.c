#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// É possível criar um ponteiro como função.
int *alocarMemória(int qtd) {
  int *ponteiro = malloc(qtd * sizeof(int));
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
  int *vetor, tamanho = 10;

  srand(time(NULL));

  vetor = alocarMemória(tamanho);

  if (vetor) {
    printf("Memória alocada com sucesso!\n");
    preencherVetor(vetor, tamanho);
    imprimirVetor(vetor, tamanho);
  }
  else
    printf("Erro na alocação!\n");
  printf("\n\n");

  return 0;
}