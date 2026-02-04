#include <stdio.h>
// #include <stdlib.h>

/*
    -- Versão 1 --
    Faça um programa que some os números ímpares de 1 a 1000 e imprima a
    resposta.

    -- Versão 2 --
    Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
    Restrição:
    → O bloco de repetição deve executar no máximo 500 vezes.
*/

int main() {
  int somaImpar = 0, iterações = 0;

  printf("-- Versão 1 --\n");
  for (int num = 1; num <= 1000; num++) {
    iterações += 1;
    if (num % 2 != 0)
      somaImpar += num;
  }
  printf("Iterações: %d; Soma de ímpares = %d;\n\n", iterações, somaImpar);


  somaImpar = iterações = 0;

  printf("-- Versão 2 --\n"); 
  for (int num = 1; num <= 1000; num += 2) {
    iterações += 1;
    somaImpar += num;
  }
  printf("Iterações: %d; Soma de ímpares = %d;\n\n", iterações, somaImpar);

  return 0;
}
