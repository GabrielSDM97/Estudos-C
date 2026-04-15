#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Criar, inserir valores, inverter e imprimir o vetor original e o invertido apenas com recursão.
*/

void imprimirVetor(int vetor[], int contador, int tamanhoVetor) {
  if (contador < tamanhoVetor) {
    printf("[%d]%d;\n", contador, vetor[contador]);
    imprimirVetor(vetor, contador + 1, tamanhoVetor);
  }
}

void inverterVetor(int vetor[], int índice, int índiceInvertido) {
  if (índice < índiceInvertido) {
    int cópia = vetor[índice];
    vetor[índice] = vetor[índiceInvertido];
    vetor[índiceInvertido] = cópia;
    inverterVetor(vetor, índice + 1, índiceInvertido - 1);
  }
}

void inserirValoresVetor(int vetor[], int índice, int tamanhoVetor) {
  if (índice < tamanhoVetor) {
    vetor[índice] = 1 + rand() % 100;
    inserirValoresVetor(vetor, índice + 1, tamanhoVetor);
  }
}

int main() {
  int índices;

  srand(time(NULL));

  printf("Quantos índices você quer no vetor? ");
  scanf("%d", &índices);

  int vetor[índices];

  printf("\n");
  inserirValoresVetor(vetor, 0, índices);
  printf("Vetor original: \n");
  imprimirVetor(vetor, 0, índices);

  printf("\n");
  inverterVetor(vetor, 0, índices - 1);
  printf("Vetor invertido: \n");
  imprimirVetor(vetor, 0, índices);

  printf("\n");
  return 0;
}
