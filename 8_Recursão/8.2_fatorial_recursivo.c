#include <stdio.h>

long long int fatorial(int número) {
  if (número == 1) {
    printf("%d", número);
    return 1;
  }
  printf("%d * ", número);
  return número * fatorial(número - 1);
  // Vamos supor que a função acima seja chamada para fazer um fatorial recursivo do número 5.

  /* FASE DE EMPILHAMENTO (chamadas recursivas após o primeiro chamamento de fatorial(número)):
     fatorial(5) → espera resultado de 5 * fatorial(4)      (Primeiro prato - Base da pilha)
     5 * fatorial(4) → espera resultado de 4 * fatorial(3)  (Segundo prato)
     4 * fatorial(3) → espera resultado de 3 * fatorial(2)  (Terceiro prato)
     3 * fatorial(2) → espera resultado de 2 * fatorial(1)  (Quarto prato)
     2 * fatorial(1) → retorna 1 e finaliza a pilha!        (Quinto prato - Topo da pilha)

     FASE DE DESEMPILHAMENTO (retornos):
     fatorial(1) retorna 1;
     fatorial(2) retorna 2 * 1 = 2
     fatorial(3) retorna 3 * 2 = 6
     fatorial(4) retorna 4 * 6 = 24
     fatorial(5) retorna 5 * 24 = 120                                                         */
}

int main() {
  int número = 10;
  printf(" = %lld\n\n", fatorial(número));

  return 0;
}
