#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * =====================================================================
 * Algoritmo: Insertion Sort (Ordenação por Inserção)
 * =====================================================================
 * Constrói a parte ordenada do vetor inserindo um elemento 
 * de cada vez na posição correta. É análogo a organizar cartas de baralho 
 * na mão: pegamos uma carta e a encaixamos entre as que já estamos segurando.
 *
 * Complexidade de Tempo:
 * - Pior caso:  O(n²)  (Vetor em ordem inversa)
 * - Melhor caso: O(n)  (Vetor já ordenado — apenas uma comparação por elemento)
 * - Médio caso: O(n²)
 *
 * Propriedades:
 * - Estável:    Mantém a ordem relativa de elementos com valores iguais.
 * - In-place:   Não requer memória extra, apenas deslocamentos.
 * - Adaptativo: Extremamente eficiente para vetores "quase" ordenados,
 *               pois faz poucas comparações e deslocamentos.
 * - Ideal para: Pequenos conjuntos de dados (muitas bibliotecas usam 
 *               Insertion Sort para vetores pequenos em algoritmos híbridos).
 * =====================================================================
 */

void mergeSort(int vetor[], int tamanho) {
  int i, chave, j;
  // Loop externo: Percorre o vetor a partir do segundo elemento (índice 1)
  // O elemento na posição 0 já está trivialmente ordenado.
  for (i = 1; i < tamanho; i++) {
    // Armazena o elemento atual que será inserido na parte ordenada
    // Precisamos guardá-lo porque vamos deslocar elementos maiores para a direita
    chave = vetor[i];
    // Índice do último elemento da parte ordenada (imediatamente antes da chave)
    j = i - 1;
    // Loop interno: Desloca elementos maiores que a chave uma posição para a direita
    // Isso abre um "espaço vazio" para inserirmos a chave na posição correta
    while (j >= 0 && vetor[j] > chave) { 
      vetor[j + 1] = vetor[j]; // Move o elemento para a direita
      j--;                     // Avança para o próximo elemento da parte ordenada
    }
    // Insere a chave no espaço que foi aberto pelo deslocamento.
    // Note que 'j' parou na posição do elemento menor ou igual à chave, 
    // então a posição correta é 'j + 1'.
    vetor[j + 1] = chave; 
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

  mergeSort(vet, tam);
  
  printf("Vetor ordenado:\n");
  imprimirVetor(vet, tam);

  return 0;
}