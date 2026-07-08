#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * =====================================================================
 * Algoritmo: Bubble Sort (Ordenação por Bolha)
 * =====================================================================
 * Compara pares adjacentes e os troca se estiverem na
 * ordem errada. Repete o processo até não haver mais trocas.
 * Os maiores valores "borbulham" para o final do vetor a cada passagem.
 *
 * Complexidade de Tempo:
 * - Pior/Médio caso: O(n²)  (Ineficiente para grandes conjuntos de dados)
 * - Melhor caso:     O(n)   (Vetor já ordenado, graças à flag 'trocou')
 *
 * Propriedades:
 * - Estável:  Mantém a ordem relativa de elementos com valores iguais.
 * - In-place: Não requer memória extra, apenas variáveis auxiliares.
 * =====================================================================
 */

void bubbleSort(int vetor[], int tamanho) {
  int i, copia, trocou;
  // Loop externo: Mantém o algoritmo rodando enquanto houver trocas
  do {
    // Flag de controle: Assume que o vetor já está ordenado nesta passagem
    trocou = 0;
    // Loop interno: Compara o elemento atual (i) com o próximo (i+1)
    for (i = 0; i < tamanho - 1; i++) {
      if (vetor[i] > vetor[i + 1]) {
        // Swap (Troca): Usa variável temporária para inverter as posições
        copia = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = copia;
        /* Sinaliza que houve troca, provando que o vetor ainda não está 100%
           ordenado. */
        trocou = 1;
      }
    }
  // Se 'trocou' for 0, o loop encerra.
  } while (trocou);
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

  bubbleSort(vet, tam);

  printf("Vetor ordenado:\n");
  imprimirVetor(vet, tam);

  return 0;
}