#include <stdio.h>
// #include <stdlib.h>

/*
    Um determinado material radioativo perde metade de sua massa a cada 50
   segundos. Dada a massa inicial, em gramas, faça um programa que determine o
   tempo necessário para que essa massa se torne menor que 0,05 gramas.
*/

int main() {
  int segundos, cinquenta_segundos;
  float massa = 0.05;
  segundos = 0;

  while (massa >= 0.05) {
    massa /= 2;
    segundos += 50;
  }
  printf("O tempo necessário é de %d segundos.\n\n", segundos);
}
