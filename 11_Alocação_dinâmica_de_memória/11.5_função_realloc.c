#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Em programação, existem estruturas de dados estáticas (STACK) e dinâmicas
   (HEAP). Vetores e matrizes, por exemplo, são estruturas de dados estáticas,
   ou seja, se definirmos um tamanho 'x' para um vetor, tal vetor sempre terá
   esse quantidade de regiões. Já uma estrutura de dado dinâmica, oscila a
   quantidade de regiões conforme inserção ou remoção de dados. */

/* Dito isso, a função "realloc" não aumenta um vetor, mas sim copia os dados do
   vetor e os envia para uma nova região da memória com o novo tamanho definido.
 */

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
  // Utilizando realloc(ponteiro, novo tamanho).
  vetor = realloc(vetor, tamanho * sizeof(int));
  // Nova verificação de realocação.
  if (vetor) {
    printf("Realocação efetuada com sucesso!\n");
    printf("Tamanho do vetor: %d\n", tamanho);
    imprimirVetor(vetor, tamanho);
  } else
    printf("Erro na realocação!\n");
  printf("\n\n");

  return 0;
}