#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em
    seguida, troque o 1º elemento com o último, o 2º com o penúltimo, ... até o
    10º com o 11º. Imprima o vetor N modificado.
*/

int main() {
  int vetorN[20], cópia, primeiroÍndice = 0, segundoÍndice = 19;

  srand(time(NULL));

  for (int índice = 0; índice < 20; índice++) {
    printf("Insira o %dº valor: ", índice+1);
    scanf("%d", &vetorN[índice]);
  }

  printf("\n\nOriginal = ");
  for (int índice = 0; índice < 20; índice++)
    printf("%d; ", vetorN[índice]);

  while (primeiroÍndice < segundoÍndice) {
    cópia = vetorN[primeiroÍndice];
    vetorN[primeiroÍndice] = vetorN[segundoÍndice];
    vetorN[segundoÍndice] = cópia;
    segundoÍndice--;
    primeiroÍndice ++;
  }

  printf("\nInvertido = ");
  for (int índice = 0; índice < 20; índice++)
    printf("%d; ", vetorN[índice]);
  
  return 0;
}
