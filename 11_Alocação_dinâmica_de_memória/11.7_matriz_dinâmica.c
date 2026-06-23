#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  /* Para fazer uma matriz, é necessário um ponteiro de ponteiro, já que uma
     matriz nada mais é que uma vetor que aponta para outros vetores */
  int **matriz;

  /* Aloca 5 regiões de ponteiros na memória e retorna o endereço do primeiro
     ponteiro. */
  matriz = malloc(5 * sizeof(int *));

  if (matriz) {
    printf("Alocação efetuada com sucesso!\n\n");
    for (int l = 0; l < 5; l++) {
      // Aloca 5 regiões de tipo int na memória e retorna o endereço do primeiro int.
      *(matriz + l) = malloc(5 * sizeof(int));
      if (*(matriz + l) == NULL) {
        printf("Erro na alocação da linha %d!", l);
        return 0;
      }
    }

    // Preenchendo a matriz
    for (int l = 0; l < 5; l++)
      for (int c = 0; c < 5; c++)
        // Aritmética de ponteiros em matriz
        *(*(matriz + l) + c) = 10 + rand() % 90;
    //  *(matriz[l] + c)
    //  *(matriz + l)[c]
    //    matriz[l][c]

    // Imprimindo a matriz
    for (int l = 0; l < 5; l++) {
      for (int c = 0; c < 5; c++)
        printf("%d ", *(*(matriz + l) + c));
      printf("\n");
    }
    printf("\n");

    /* A função "free" libera a memória alocada por "malloc", "calloc", ou
       "realloc" do bloco inteiro, não sendo necessário liberar região por
       região. */
    for (int i = 0; i < 5; i++)
      // Libera o bloco de memória de cada linha (os vetores de inteiros).
      free(*(matriz + i));
    // Libera o bloco de memória do vetor de ponteiros (para o qual 'matriz' aponta)
    free(matriz);

  } else
    printf("Erro de alocação! \n\n");

  return 0;
}