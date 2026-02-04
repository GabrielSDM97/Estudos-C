#include <stdio.h>
// #include <stdlib.h>

/*
    Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.
*/

int main() {
  int qtd_múltiplos = 0;
  
  for (int múltiplo = 7; múltiplo <= 9999; múltiplo += 7) {
    qtd_múltiplos += 1;
    printf("%d, ", múltiplo);
  }
  printf("\n\nQuantidade de múltiplos de 7 entre 1 e 9999: %d\n\n", qtd_múltiplos);

  return 0;
}
