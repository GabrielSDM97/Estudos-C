#include <stdio.h>
#include <string.h>

int main() {
  int resultado;
  char palavra1[20] = {"Computador"};
  char palavra2[20];

  printf("Palavra 1: %s\nPalavra 2: %s\n", palavra1, palavra2);

  // strcpy(ArrayDestino, ArrayFonte) - Copia strings.
  strcpy(palavra2, palavra1);

  printf("Palavra 1: %s\nPalavra 2: %s\n", palavra1, palavra2);

  return 0;
}
