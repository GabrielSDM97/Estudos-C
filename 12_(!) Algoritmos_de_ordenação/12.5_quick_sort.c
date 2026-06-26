#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * =====================================================================
 * Algoritmo: Quick Sort (Ordenação Rápida)
 * =====================================================================
 * Algoritmo de divisão e conquista que:
 * 1. Escolhe um elemento como pivô (neste caso, o último elemento)
 * 2. Particiona o vetor: menores que o pivô à esquerda, maiores à direita
 * 3. Aplica recursivamente o mesmo processo nas duas subpartições
 *
 * Complexidade de Tempo:
 * - Melhor/Médio caso: O(n log n) - Quando o pivô divide o vetor balanceadamente
 * - Pior caso:         O(n²)       - Quando o pivô é sempre o menor/maior elemento
 *                                     (ex: vetor já ordenado com pivô no final)
 *
 * Propriedades:
 * - Instável:    Não mantém a ordem relativa de elementos iguais.
 * - In-place:    Não requer memória extra para o vetor, mas usa O(log n) 
 *                de espaço na pilha de recursão.
 * - Não adaptativo: Não se beneficia de vetores "quase" ordenados.
 * - Vantagem:    Na prática, é o algoritmo de ordenação mais rápido para 
 *                a maioria dos casos, graças à sua eficiência de cache e 
 *                baixo overhead constante.
 * =====================================================================
 */

// Função auxiliar para trocar dois elementos de posição
void trocar(int *a, int *b) {
  int copia = *a;
  *a = *b;
  *b = copia;
}

// Particiona o vetor e retorna o índice do pivô
int particionar(int vetor[], int início, int fim) {
  // Pivô: último elemento do sub-vetor
  int pivo = vetor[fim];
  // Índice que marca a fronteira dos elementos menores
  int i = início;
  // Percorre o sub-vetor comparando cada elemento com o pivô
  for (int j = início; j < fim; j++)
    // Se o elemento é menor ou igual ao pivô, coloca na partição esquerda
    if (vetor[j] <= pivo) {
      trocar(&vetor[i], &vetor[j]);
      // Avança a fronteira dos menores
      i++;
    }
  // Coloca o pivô na posição correta (entre menores e maiores)
  trocar(&vetor[i], &vetor[fim]);
  // Retorna o índice final do pivô
  return i;
}

// Função principal do Quick Sort (recursiva):
void mergeSort(int vetor[], int início, int fim) {
  if (início < fim) {
    // Particiona o vetor e obtém o índice final do pivô
    int meio = particionar(vetor, início, fim);
    // Ordena recursivamente a partição esquerda (elementos menores que o pivô)
    mergeSort(vetor, início, meio - 1);
    // Ordena recursivamente a partição direita (elementos maiores que o pivô)
    mergeSort(vetor, meio + 1, fim);
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

  mergeSort(vet, 0, tam - 1);
  
  printf("Vetor ordenado:\n");
  imprimirVetor(vet, tam);

  return 0;
}