#include <stdio.h>

/*
    Faça um programa em C usando funções e procedimentos para descobrir todos os números primos entre 1 e 500.
*/

void numPrimos() {
  int divisões;
  for (int dividendo = 1; dividendo <= 500; dividendo++) {
    divisões = 0;
    for (int divisor = 1; divisor <= dividendo; divisor++)
      if (dividendo % divisor == 0)
        divisões++;
    if (divisões == 2)
      printf("%d; ", dividendo);
  }
}

int main() {
  printf("Números primos entre 1 e 500:\n");
  numPrimos();
  printf("\n\n");
  return 0;
}
