#include <stdio.h>
#include <string.h>

int main() {
  int resultado;
  char palavra1[20] = {"Computador"};
  char palavra2[20];

  printf("Palavra 1: %s\nPalavra 2: %s\n", palavra1, palavra2);

  /* Pelo fato de não ter como atribuir uma string diretamente a uma array após
     sua declaração, utiliza-se "strcpy" para fazê-lo. */
  // strcpy(ArrayDestino, ArrayFonte).
  strcpy(palavra2, palavra1);

  printf("Palavra 1: %s\nPalavra 2: %s\n", palavra1, palavra2);

  return 0;
}
