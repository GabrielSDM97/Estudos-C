#include <stdio.h>
#include <stdlib.h>

int main() {
  int *x, *y;

  /* "malloc" recebe um único parâmetro (tamanho total em bytes), então
     multiplicamos a quantidade de elementos pelo tamanho de cada um. */
  x = malloc(2 * sizeof(int));
  // "calloc" recebe dois parâmetros separados (quantidade, tamanho).
  y = calloc(2, sizeof(int));

  if (x) {
    printf("Memória alocada com sucesso!\n");
    // "malloc" apenas aloca memória (contém lixo).
    // "calloc" aloca e inicializa todas as regiões com zero.
    printf("Valor x: %d %d\nValor y: %d %d\n\n", *x, *(x + 1), *y, *(y + 1));
  } else
    printf("Erro na alocação, falta de memória!\n\n");

  return 0;
}