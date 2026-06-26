#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * =====================================================================
 * Algoritmo: Quick Sort (Ordenação Rápida)
 * =====================================================================
 * Ideia Central: Escolhe um pivô, particiona o vetor (menores à esquerda,
 * maiores à direita) e aplica recursivamente nas duas partições.
 *
 * Complexidade:
 * - Melhor/Médio: O(n log n) - Pivô divide balanceadamente
 * - Pior caso:    O(n²)      - Pivô sempre extremo (vetor já ordenado)
 * Espaço: O(log n) - Pilha de recursão
 *
 * Propriedades:
 * - Instável:    Não mantém ordem de elementos iguais
 * - In-place:    Não usa memória extra para o vetor
 * - Mais rápido na prática para arrays (excelente uso de cache)
 * =====================================================================
 */

// Troca dois elementos de posição
void trocar(int *a, int *b) {
  int copia = *a;
  *a = *b;
  *b = copia;
}

// Particiona o vetor e retorna o índice final do pivô
int particionar(int vetor[], int início, int fim) {
  int pivo = vetor[fim];  // Pivô: último elemento
  int i = início;         // Fronteira dos elementos menores
  // Move elementos menores que o pivô para a esquerda
  for (int j = início; j < fim; j++) {
    if (vetor[j] <= pivo) {
      trocar(&vetor[i], &vetor[j]);
      i++;
    }
  }
  // Coloca o pivô na posição correta (entre menores e maiores)
  trocar(&vetor[i], &vetor[fim]);
  return i;
}

// Função principal: particiona e ordena recursivamente
void quickSort(int vetor[], int início, int fim) {
  if (início < fim) {
    int meio = particionar(vetor, início, fim);  // Índice do pivô
    
    quickSort(vetor, início, meio - 1);   // Ordena partição esquerda
    quickSort(vetor, meio + 1, fim);      // Ordena partição direita
  }
}

void imprimirVetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++)
    printf("%d ", vetor[i]);
  printf("\n\n");
}

void preencherVetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    vetor[i] = rand() % 9;
  }
}

int main() {
  srand(time(NULL));

  int tam = 4, vet[tam];

  preencherVetor(vet, tam);

  printf("Vetor original:\n");
  imprimirVetor(vet, tam);

  quickSort(vet, 0, tam - 1);
  
  printf("Vetor ordenado:\n");
  imprimirVetor(vet, tam);

  return 0;
}