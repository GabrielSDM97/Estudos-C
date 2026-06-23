#include <stdio.h>
#include <stdlib.h>

/*
   --- HEAP vs STACK ---
   
   STACK (Pilha): Memória automática onde variáveis locais são armazenadas.
                  Liberada automaticamente quando a função termina.
   
   HEAP (Montículo): Memória dinâmica gerenciada manualmente com malloc/calloc/realloc.
                     Precisa ser liberada explicitamente com free().
   
   IMPORTANTE: O free() só funciona em memória alocada no HEAP.
*/

int main() {
  int *p;
  p = malloc(5 * sizeof(int));
  *p = 10;

  printf("Endereço: %p Antes: %d\n\n", p, *p);
  // A função "free(ponteiro)" libera memória alocada por malloc, calloc ou realloc.
  free(p);
  printf("Endereço: %p Depois: %d\n\n", p, *p);

  return 0;
}