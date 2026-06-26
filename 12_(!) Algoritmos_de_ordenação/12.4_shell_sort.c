#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * =====================================================================
 * Algoritmo: Shell Sort (Ordenação por Inserção com Intervalos)
 * =====================================================================
 * Evolução do Insertion Sort que compara elementos 
 * distantes entre si usando uma sequência de intervalos (gaps). 
 * Começa com gaps grandes para mover elementos rapidamente para perto 
 * de suas posições finais, e vai reduzindo até gap=1 (Insertion Sort puro).
 *
 * Complexidade de Tempo:
 * - Depende da sequência de gaps utilizada:
 *   * Shell (original): O(n²)
 *   * Hibbard: O(n^1.5)
 *   * Knuth: O(n^1.25)
 *   * Sedgewick: O(n^1.33)
 * - Melhor caso: O(n log n)
 *
 * Propriedades:
 * - Instável:    Não mantém a ordem relativa de elementos iguais.
 * - In-place:    Não requer memória extra.
 * - Adaptativo:  Eficiente para vetores "quase" ordenados.
 * - Vantagem:    Quebra a barreira O(n²) dos métodos simples, sendo muito
 *                mais rápido que Insertion/Bubble/Selection para vetores grandes.
 * =====================================================================
 */

void mergeSort(int vetor[], int tamanho) {
  int gap, i, j, chave;
  // Loop externo: Controla a sequência de gaps (intervalos)
  // Começa com size/2 e vai reduzindo pela metade até chegar a 1
  for (gap = tamanho / 2; gap > 0; gap /= 2) {
    // Loop intermediário: Percorre o vetor a partir do índice 'gap'
    // Cada elemento será inserido na posição correta dentro de sua subsequência
    for (i = gap; i < tamanho; i++) {
      // Armazena o elemento atual que será inserido na subsequência
      chave = vetor[i];
      // Loop interno: Desloca elementos maiores que a chave dentro da subsequência
      // A comparação é feita com elementos distantes 'gap' posições
      for (j = i; j >= gap && vetor[j - gap] > chave; j -= gap)
        // Move o elemento para a direita (dentro da subsequência)
        vetor[j] = vetor[j - gap];
      vetor[j] = chave;
    }
  }
  // Quando gap=1, o algoritmo executa um Insertion Sort puro,
  // mas agora o vetor já está "quase ordenado" graças aos gaps anteriores
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

  mergeSort(vet, tam);
  
  printf("Vetor ordenado:\n");
  imprimirVetor(vet, tam);

  return 0;
}