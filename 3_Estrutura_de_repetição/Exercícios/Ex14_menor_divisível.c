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
    if (número % 1 == 0 && número % 2 == 0 && número % 3 == 0 &&
        número % 4 == 0 && número % 5 == 0 && número % 6 == 0 &&
        número % 7 == 0 && número % 8 == 0 && número % 9 == 0 &&
        número % 10 == 0) {
      printf("O menor número inteiro que seja divisível por todos os números inteiros entre 1 e 10 é: %d\n\n", número);
      break;
      }
    }

  return 0;
}