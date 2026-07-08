#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * =====================================================================
 * Algoritmo: Merge Sort (Ordenação por Intercalação)
 * =====================================================================
 * Divide o vetor ao meio recursivamente até sub-vetores 
 * de 1 elemento, depois intercala (funde) as metades ordenadas.
 *
 * Complexidade: O(n log n) em todos os casos
 * Espaço: O(n) - Requer memória auxiliar
 *
 * Propriedades:
 * - Estável:    Mantém ordem de elementos iguais
 * - Não in-place: Usa memória extra
 * - Ideal para: Listas encadeadas e ordenação externa (arquivos grandes)
 * =====================================================================
 */

// Intercala duas metades ordenadas em uma única parte ordenada
void merge(int vetor[], int início, int meio, int fim) {
  int i, j, k, n1 = meio - início + 1; // Tamanho da metade esquerda
  int n2 = fim - meio;                 // Tamanho da metade direita
  
  // Aloca vetores auxiliares para as duas metades
  int *esquerda = malloc(n1 * sizeof(int));
  int *direita = malloc(n2 * sizeof(int));

  // Copia as metades para os vetores auxiliares
  for (i = 0; i < n1; i++)
    esquerda[i] = vetor[início + i];
  for (j = 0; j < n2; j++)
    direita[j] = vetor[meio + 1 + j];
  
  // Índices para percorrer as metades e o vetor original
  i = 0;          // Metade esquerda
  j = 0;          // Metade direita
  k = início;     // Vetor original

  // Compara e copia o menor elemento de cada metade
  while (i < n1 && j < n2) {
    if (esquerda[i] <= direita[j])
      vetor[k++] = esquerda[i++];
    else
      vetor[k++] = direita[j++];
  }

  // Copia elementos restantes da metade esquerda (se houver)
  while (i < n1)
    vetor[k++] = esquerda[i++];
  
  // Copia elementos restantes da metade direita (se houver)
  while (j < n2)
    vetor[k++] = direita[j++];
  
  // Libera memória alocada
  free(esquerda);
  free(direita);
}

// Função principal: divide recursivamente e intercala
void mergeSort(int vetor[], int início, int fim) {
  if (início < fim) {
    int meio = início + (fim - início) / 2; // Evita overflow
    
    mergeSort(vetor, início, meio);      // Ordena metade esquerda
    mergeSort(vetor, meio + 1, fim);     // Ordena metade direita
    merge(vetor, início, meio, fim);     // Intercala as metades
  }
}

void imprimirVetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++)
    printf("%d ", vetor[i]);
  printf("\n\n");
}

void preencherVetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    vetor[i] = rand() % 99;
  }
}

int main() {
  srand(time(NULL));

  int tam = 10, vet[tam];

  preencherVetor(vet, tam);

  printf("Vetor original:\n");
  imprimirVetor(vet, tam);

  mergeSort(vet, 0, tam - 1);

  printf("Vetor ordenado:\n");
  imprimirVetor(vet, tam);

  return 0;
}