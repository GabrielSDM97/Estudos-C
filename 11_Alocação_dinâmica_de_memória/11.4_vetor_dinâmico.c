#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
VETOR ESTÁTICO: int vetor[10];
• Alocado automaticamente na STACK pelo compilador
• Tamanho fixo e conhecido em tempo de compilação
• Liberação automática ao sair do escopo
• O nome do vetor é o próprio endereço dos dados: (&vetor == vetor)

VETOR DINÂMICO: int *vetor = malloc(10 * sizeof(int));
• Alocado manualmente na HEAP pelo programador
• Tamanho definido em tempo de execução
• Liberação manual obrigatória com free()
• O ponteiro (STACK) aponta para os dados (HEAP): (&vetor != vetor)

Este código demonstra alocação dinâmica, onde a função 'alocarMemória'
retorna um ponteiro para um bloco de memória na HEAP.
*/

// É possível criar funções que retornam ponteiro.
int *alocarMemória(int size) {
  int *ponteiro = malloc(size * sizeof(int));
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