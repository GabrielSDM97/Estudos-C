#include <stdio.h>

/* Em escopo global uma 'static' limita a visibilidade da variável/função
   apenas ao arquivo onde foi declarada. Outros arquivos .c não conseguem
   acessá-la. */

int fatorial(int numero) {
  /* Variáveis locais 'static' são inicializadas apenas uma vez durante uma
     execução e persistem até o fim. */
  static int produto = 1;

  if (!numero)
    return produto;

  produto *= numero;
  
  return fatorial(--numero);
}

int main() {
  int num = 10;
  printf("Fatorial de %d: %d\n\n", num, fatorial(num));
  return 0;
}