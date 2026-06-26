#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * =====================================================================
 * Algoritmo: Merge Sort (Ordenação por Intercalação/Fusão)
 * =====================================================================
 * Algoritmo de divisão e conquista que:
 * 1. Divide o vetor em duas metades (recursivamente até ter sub-vetores de 1 elemento)
 * 2. Ordena cada metade recursivamente
 * 3. Intercala (merge) as duas metades ordenadas em um único vetor ordenado
 *
 * Complexidade de Tempo:
 * - Melhor/Médio/Pior caso: O(n log n) - Sempre divide ao meio e intercala
 *
 * Complexidade de Espaço:
 * - O(n) - Requer memória auxiliar para a intercalação
 *
 * Propriedades:
 * - Estável:    Mantém a ordem relativa de elementos com valores iguais.
 * - Não in-place: Requer memória extra proporcional ao tamanho do vetor.
 * - Não adaptativo: Não se beneficia de vetores "quase" ordenados.
 * - Vantagem:   Garantia de O(n log n) em todos os casos e estabilidade.
 * - Ideal para: Linked lists, ordenação externa (arquivos grandes) e 
 *               quando a estabilidade é crucial.
 * =====================================================================
 */

/*
 * Função de Intercalação (Merge):
 * Combina duas metades ordenadas do vetor em uma única parte ordenada.
 * 
 * Parâmetros:
 * - início: índice inicial do sub-vetor
 * - meio: índice que divide as duas metades
 * - fim: índice final do sub-vetor
 * 
 * Processo:
 * 1. Copia as duas metades para vetores auxiliares (esquerda e direita)
 * 2. Compara os primeiros elementos de cada metade e copia o menor para o vetor original
 * 3. Repete até esgotar uma das metades
 * 4. Copia os elementos restantes da metade que ainda tem elementos
 */

void merge(int vetor[], int início, int meio, int fim) {
  // Calcula os tamanhos das duas metades  
  int i, j, k, n1 = meio - início + 1; // Tamanho da metade esquerda
  int n2 = fim - meio;                 // Tamanho da metade direita

  // Aloca memória dinamicamente para os vetores auxiliares
  // Necessário porque não sabemos o tamanho em tempo de compilação
  int *esquerda = malloc(n1 * sizeof(int));
  int *direita = malloc(n2 * sizeof(int));

  // Copia os dados das metades para os vetores auxiliares
  // Isso preserva os dados originais durante a intercalação
  for (i = 0; i < n1; i++)
    esquerda[i] = vetor[início + i];
  for (j = 0; j < n2; j++)
    direita[j] = vetor[meio + 1 + j];
  
  // Inicializa os índices para a intercalação
  i = 0;          // Índice atual da metade esquerda
  j = 0;          // Índice atual da metade direita
  k = início;     // Índice onde colocaremos o próximo elemento no vetor original

  // Fase 1: Compara elementos de ambas as metades e copia o menor
  // Continua enquanto ambas as metades tiverem elementos não processados
  while (i < n1 && j < n2) {
    if (esquerda[i] <= direita[j])
      vetor[k++] = esquerda[i++]; // Copia da esquerda e avança ambos os índices
    else
      vetor[k++] = direita[j++];  // Copia da direita e avança ambos os índices
  }

  // Fase 2: Copia elementos restantes da metade esquerda (se houver)
  // Isso ocorre quando a metade direita foi totalmente processada primeiro
  while (i < n1)
    vetor[k++] = esquerda[i++];
  
  // Fase 3: Copia elementos restantes da metade direita (se houver)
  // Isso ocorre quando a metade esquerda foi totalmente processada primeiro
  while (j < n2)
    vetor[k++] = direita[j++];
  
  // Libera a memória alocada dinamicamente para evitar vazamento de memória
  free(esquerda);
  free(direita);
}

/*
 * Função principal do Merge Sort (recursiva):
 * - Caso base: início >= fim (sub-vetor com 0 ou 1 elemento, já ordenado)
 * - Passo recursivo: divide ao meio, ordena cada metade e intercala
 */
void mergeSort(int vetor[], int início, int fim) {
  if (início < fim) {
    // Calcula o ponto médio evitando overflow (melhor que (início + fim) / 2)
    int meio = início + (fim - início) / 2;
    
    // Ordena recursivamente a metade esquerda (do início até o meio)
    mergeSort(vetor, início, meio);
    
    // Ordena recursivamente a metade direita (do meio+1 até o fim)
    mergeSort(vetor, meio + 1, fim);
    
    // Intercala as duas metades já ordenadas
    merge(vetor, início, meio, fim);
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