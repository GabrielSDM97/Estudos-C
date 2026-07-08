#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * =====================================================================
 * Algoritmo: Insertion Sort (Ordenação por Inserção)
 * =====================================================================
 * Ideia Central: Constrói a parte ordenada inserindo um elemento de cada
 * vez na posição correta. Análogo a organizar cartas de baralho na mão.
 *
 * Complexidade:
 * - Pior caso:  O(n²) - Vetor em ordem inversa
 * - Melhor caso: O(n)  - Vetor já ordenado
 * Espaço: O(1) - In-place
 *
 * Propriedades:
 * - Estável:    Mantém ordem de elementos iguais
 * - In-place:   Não usa memória extra
 * - Adaptativo: Extremamente eficiente para vetores "quase" ordenados
 * - Ideal para: Pequenos conjuntos de dados (usado em algoritmos híbridos)
 * =====================================================================
 */

void insertionSort(int vetor[], int tamanho) {
  int i, chave, j;
  // Percorre o vetor a partir do segundo elemento (índice 1)
  // O elemento na posição 0 já está trivialmente ordenado
  for (i = 1; i < tamanho; i++) {
    chave = vetor[i];  // Elemento a ser inserido na parte ordenada
    j = i - 1;         // Último elemento da parte ordenada
    // Desloca elementos maiores que a chave uma posição para a direita
    // Abre "espaço vazio" para inserir a chave na posição correta
    while (j >= 0 && vetor[j] > chave) { 
      vetor[j + 1] = vetor[j];  // Move elemento para a direita
      j--;
    }
    vetor[j + 1] = chave;  // Insere na posição correta ('j + 1')
  }
}

void imprimirVetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++)
    printf("%d ", vetor[i]);
  printf("\n\n");
}

void preencherVetor(int array[], int size) {
  for (int i = 0; i < size; i++) {
    array[i] = rand() % 100;
  }
}

int main() {
  srand(time(NULL));

  int tam = 20, vet[tam];

  preencherVetor(vet, tam);

  printf("Vetor original:\n");
  imprimirVetor(vet, tam);

  insertionSort(vet, tam);
  
  printf("Vetor ordenado:\n");
  imprimirVetor(vet, tam);

  return 0;
}