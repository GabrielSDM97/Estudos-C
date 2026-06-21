#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Imprimir endereço e conteúdo de cada posição de cada um vetor.
*/

int main() {
  int vetor[10];

  srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    *(vetor + i) = 100 + rand() % 900;
    printf("\tPosição: %d;\tEndereço: %p; \tValor: %d\n", i, vetor + i, *(vetor + i));
  }
  printf("\n");

  // CURIOSIDADE!!!
  /* Nota-se, na impressão do código acima, na parte de endereço, que o último
    caracter sempre é múltiplo de 4, justamente pelo fato do vetor ser do tipo
    "int", o qual possui índices com 4 bytes de tamanho cada. */

  return 0;
}