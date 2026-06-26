#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * =====================================================================
 * Algoritmo: Selection Sort (Ordenação por Seleção)
 * =====================================================================
 * Divide o vetor em uma parte ordenada (início) e uma 
 * não ordenada (fim). A cada passo, encontra o menor elemento da parte 
 * não ordenada e o posiciona no final da parte ordenada.
 *
 * Complexidade de Tempo:
 * - O(n²) em TODOS os casos (pior, médio e melhor).
 * A busca pelo menor elemento sempre percorre o resto do vetor, 
 * independentemente de ele já estar ordenado ou não.
 *
 * Propriedades:
 * - In-place: Não requer memória extra.
 * - Trocas:   Realiza no máximo O(n) trocas. Excelente para hardwares
 *             onde a escrita em memória é custosa (ex: Flash, EEPROM).
 * - Instável: Pode alterar a ordem relativa de elementos com valores iguais.
 * =====================================================================
 */

void mergeSort(int vetor[], int tamanho) {
  int i, j, indiceMenor, copia;
  // Loop externo: Define a fronteira da parte ordenada.
  // Paramos em 'size - 1' pois, ao posicionar n-1 elementos, o último já estará no lugar.
  for (i = 0; i < tamanho - 1; i++) {
    // Assume-se inicialmente que o primeiro elemento da parte não ordenada é o menor
    indiceMenor = i;
    // Loop interno: Percorre a parte não ordenada em busca do verdadeiro menor valor
    for (j = i + 1; j < tamanho; j++) {
      if (vetor[j] < vetor[indiceMenor])
        indiceMenor = j; // Atualiza o índice do menor elemento encontrado
    }
    // Swap (Troca): Só ocorre se encontramos um elemento menor que o da posição atual
    if (indiceMenor != i) {
      copia = vetor[i];
      vetor[i] = vetor[indiceMenor];
      vetor[indiceMenor] = copia;
    }
  }
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

  int vet[10], tam = 10;

  preencherVetor(vet, tam);

  printf("Vetor original:\n");
  imprimirVetor(vet, tam);

  mergeSort(vet, tam);
  
  printf("Vetor ordenado:\n");
  imprimirVetor(vet, tam);

  return 0;
}