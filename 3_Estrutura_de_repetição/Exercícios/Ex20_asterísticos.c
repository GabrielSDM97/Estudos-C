#include <stdio.h>
// #include <stdlib.h>

/*
    Escreva um programa que gere a saída abaixo.
    Restrições:
    → A instrução “printf” pode ser utilizada no máximo 2 vezes;
    → O \n para saltar linha pode ser utilizado no máximo 2 vezes.
    *
    **
    ***
    ****
    *****
    ******
    *******
    ********
*/

int main() {

  for (int linha = 1; linha <= 8; linha++) {
    for (int coluna = 1; coluna <= linha; coluna++) 
      printf("*");
    printf("\n");
  }

  return 0;
}
