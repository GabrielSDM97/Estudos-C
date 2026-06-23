#include <stdio.h>
#include <stdlib.h>

int main() {
  int *x, *y;

  /* Em "malloc" também podemos, assim como em "calloc", alocar um bloco com
     múltiplas regiões, mas como só temos um parâmetro, devemos fazê-lo
     multiplicando o tamanho em Bytes com um valor int, o qual representa a
     quantidade de regiões no bloco. */
  x = malloc(2 * sizeof(int));
  y = calloc(2, sizeof(int));

  /* IMPORTANTE: Em ambas as funções, as regiões são sequênciais na memória,
     assim como em um vetor, e o retorno sempre será o endereço da primeira
     região. */

  if (x) {
    printf("Memória alocada com sucesso!\n");
    /* A função "malloc" apenas aloca a memória, enquanto "calloc", além de
       alocar, limpa o lixo das regiões alocadas, deixando 0 no lugar. */
    printf("Valor x: %d %d\nValor y: %d %d\n\n", *x, *(x + 1), *y, *(y + 1));
  } else
    printf("Erro na alocação, falta de memória!\n\n");

  return 0;
}