#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa que some o conteúdo de dois vetores de tamanho 25 e
   armazene o resultado em um terceiro vetor. Imprima os três vetores na tela.
*/

int main() {
  int vetor1[25], vetor2[25], vetor3[25];

  srand(time(NULL));

  for (int índice = 0; índice < 25; índice++) {
    vetor1[índice] = 1 + rand() % 100;
    vetor2[índice] = 1 + rand() % 100;
  }

  for (int índice = 0; índice < 25; índice++) {
    vetor3[índice] = vetor1[índice] + vetor2[índice];
    printf("%d + %d = %d\n", vetor1[índice], vetor2[índice], vetor3[índice]);
  }
                    
  return 0;
}
