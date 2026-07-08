#include <stdio.h>

#include <stdio.h>

/*
 * =====================================================================
 * Algoritmo: Busca Binária (Binary Search)
 * =====================================================================
 * Ideia Central: Busca eficiente em vetores ORDENADOS. Compara o valor
 * procurado com o elemento central e descarta metade do espaço de busca.
 *
 * Complexidade: O(log n) - Divide o espaço pela metade a cada passo
 * Pré-requisito: Vetor deve estar ordenado
 *
 * Propriedades:
 * - Extremamente eficiente: 1 milhão de elementos = apenas 20 comparações
 * - Versão iterativa: O(1) espaço, recomendada para produção
 * - Versão recursiva: O(log n) espaço, mais elegante
 * =====================================================================
 */

void bubbleSort(int vetor[], int tamanho) {
  int j, copia, trocou;
  do {
    trocou = 0;
    for (j = 0; j < tamanho - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        copia = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = copia;
        trocou = 1;
      }
    }
  } while (trocou);
}

// Versão iterativa: mais eficiente, sem overhead de recursão.
int buscaBinariaI(int vetor[], int tamanho, int valor) {
  int meio, inicio = 0;
  int fim = tamanho - 1;

  // Continua enquanto o espaço de busca for válido
  while (inicio <= fim) {
    meio = (inicio + fim) / 2;

    if (vetor[meio] == valor)
      return meio;
    else if (vetor[meio] > valor)
      fim = meio - 1; // Descarta metade direita
    else
      inicio = meio + 1; // Descarta metade esquerda
  }
  return -1;
}

// Versão recursiva: mais elegante, usa O(log n) de pilha.
int buscaBinariaR(int vetor[], int início, int fim, int valor) {
  if (início <= fim) {
    int meio = (início + fim) / 2;

    if (vetor[meio] == valor)
      return meio;
    else if (vetor[meio] > valor)
      return buscaBinariaR(vetor, início, meio - 1, valor);
    else
      return buscaBinariaR(vetor, meio + 1, fim, valor);
  }
  return -1;
}

void imprimir(int vetor[], int tamanho) {
  int i;
  for (i = 0; i < tamanho; i++)
    printf("%d ", vetor[i]);
  printf("\n");
}

int main() {

  int vet[10] = {15, 48, 75, 489, 265, 248, 25, 90, 19, 76};

  bubbleSort(vet, 10);
  imprimir(vet, 10);
  // int retorno = buscaBinariaI(vetor, 10, 100);
  int retorno = buscaBinariaR(vet, 0, 9, 75);

  if (retorno != -1)
    printf("\n\tO valor %d foi encontrado no indice %d!\n\n", vet[retorno],
           retorno);
  else
    printf("\n\tValor não encontrado!\n\n");
  return 0;
}
