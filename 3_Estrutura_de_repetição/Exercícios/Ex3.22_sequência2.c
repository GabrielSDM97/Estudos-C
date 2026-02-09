#include <stdio.h>
// #include <stdlib.h>

/*
    Escreva um programa que leia dois valores X e Y. A seguir, mostre uma
   sequência de 1 até Y, passando para a próxima linha a cada X números.
   Exemplo de entrada:
   3 99
   Exemplo de saída:
   1 2 3
   4 5 6
   7 8 9
   10 11 12
   ...
   97 98 99
*/

int main() {
  int X, Y;

  printf("Insira X e Y: ");
  scanf("%d%d", &X, &Y);

  for (int iteração = 1; iteração <= Y; iteração++) {
    printf("%d ", iteração);
    if (iteração % X == 0) {
      printf("\n");
    }
  }

  return 0;
}
