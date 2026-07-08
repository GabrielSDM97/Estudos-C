#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo
   valores ao usuário. Em seguida, calcule e salve num segundo vetor o quadrado
   de cada elemento do primeiro vetor. Por fim, imprima os dois vetores.
*/

int main() {

  srand(time(NULL));

  int vetorInteiros[10], vetorQuadrado[10];

  for (int índice = 0; índice < 10; índice++)
    vetorInteiros[índice] = 10 + rand() % 90;

  for (int índice = 0; índice < 10; índice++)
    vetorQuadrado[índice] = vetorInteiros[índice] * vetorInteiros[índice];

  for (int índice = 0; índice < 10; índice++)
    printf("Ìndice %d --> Vetor1: %d --> Vetor1²: %d\n", índice, vetorInteiros[índice], vetorQuadrado[índice]);

  return 0;              
}
