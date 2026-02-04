#include <stdio.h>
// #include <stdlib.h>

/*
    Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para
   tal, decidiu guardar 1 centavo no primeiro dia, 2 centavos no segundo dia, 4
   centavos no terceiro dia, 8 centavos no quarto dia, e assim por diante. Faça
   um programa para calcular quanto você terá ao final dos 30 dias.
*/

int main() {
  int dia, centavos = 1, centavosFinal = 1;

  for(dia = 2; dia <= 30; dia++) {
    centavos *= 2;
    centavosFinal += centavos;
  }

  printf("\n\nResultado ao fim dos 30 dias: R$%.2f\n\n", centavosFinal * 0.01);

  return 0;
}
