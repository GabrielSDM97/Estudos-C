#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em
    seguida, troque o 1º elemento com o último, o 2º com o penúltimo, ... até o
    10º com o 11º. Imprima o vetor N modificado.
*/

int main() {

  int A[20], B[20];
  
  srand(time(NULL));

  for (int índice = 0; índice < 20; índice++) {
    // Diferentemente de Python, é possível fazer duas ou mais arrays receberem os mesmo valores e ainda ficarem independentes.
    A[índice] = B[índice] = 1 + rand() % 1000;
    printf("%d\n", A[índice]);
  }

  printf("\n\n");
  for (int índice = 0; índice < 20; índice++){
    A[índice] = 1 + rand() % 1000;
    // Como podemos ver, A recebeu novos valores, porém B continuou com os valores recebidos no loop anterior a esse.
    printf("%d\n", B[índice]);
  }
}
