#include <stdio.h>
// #include <stdlib.h>

/*
    Faça um programa para encontrar o menor número inteiro que seja divisível
   por todos os números inteiros entre 1 e 10.
*/

int main() {
  int número = 0;

  while (1) {
    número += 1;

    int contadorDivisões = 0;
    for (int divisor = 1; divisor <= 10; divisor++) {
      if (número % divisor == 0)
        contadorDivisões++;
    }

    if (contadorDivisões == 10) {
      printf("O menor número inteiro que seja divisível por todos os números inteiros entre 1 e 10 é: %d\n\n", número);
      break;
    }
  }

  return 0;
}