#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * =====================================================================
 * Algoritmo: Shell Sort (Ordenação por Inserção com Intervalos)
 * =====================================================================
 * Ideia Central: Evolução do Insertion Sort que compara elementos distantes
 * usando intervalos (gaps). Começa com gaps grandes para mover elementos
 * rapidamente, reduzindo até gap=1 (Insertion Sort puro em vetor quase ordenado).
 *
 * Complexidade:
 * - Depende da sequência de gaps: O(n²) a O(n^1.25)
 * - Melhor caso: O(n log n)
 * Espaço: O(1) - In-place
 *
 * Propriedades:
 * - Instável:    Não mantém ordem de elementos iguais
 * - In-place:    Não usa memória extra
 * - Adaptativo:  Eficiente para vetores "quase" ordenados
 * - Quebra barreira O(n²) dos métodos simples
 * =====================================================================
 */

void shellSort(int vetor[], int tamanho) {
  int gap, i, j, chave;
  // Loop externo: Controla a sequência de gaps (começa com tamanho/2, reduz pela metade)
  for (gap = tamanho / 2; gap > 0; gap /= 2) {
    // Loop intermediário: Percorre o vetor a partir do índice 'gap'
    for (i = gap; i < tamanho; i++) {
      chave = vetor[i];  // Elemento a ser inserido na subsequência
      // Loop interno: Desloca elementos maiores que a chave (distância 'gap')
      for (j = i; j >= gap && vetor[j - gap] > chave; j -= gap)
        vetor[j] = vetor[j - gap];
      vetor[j] = chave;  // Insere na posição correta
    }
  }
  // Quando gap=1, executa Insertion Sort puro em vetor já "quase ordenado"
}

void imprimirVetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++)
    printf("%d ", vetor[i]);
  printf("\n\n");
}

void preencherVetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    vetor[i] = rand() % 100;
  }
}

int main() {
  srand(time(NULL));

  int tam = 10, vet[tam];

  preencherVetor(vet, tam);

  printf("Vetor original:\n");
  imprimirVetor(vet, tam);

  shellSort(vet, tam);
  
  printf("Vetor ordenado:\n");
  imprimirVetor(vet, tam);

  return 0;
}