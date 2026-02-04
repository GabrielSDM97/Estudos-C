#include <stdio.h>
// #include <stdlib.h>

/*
    Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para
   tal, decidiu guardar 1 centavo no primeiro dia, 2 centavos no segundo dia, 4
   centavos no terceiro dia, 8 centavos no quarto dia, e assim por diante. Faça
   um programa para calcular quanto você terá ao final dos 30 dias.
*/

int main() {
  int dia, centavos;
  double reais;
  centavos = 1;

  for(dia = 1; dia <= 30; dia++) {
    if (dia > 1)
      centavos *= 2;
    printf("%d; ", centavos);
  }
  reais = centavos * 0.01;
  printf("\n\nResultado ao fim dos 30 dias: R$%.2f\n\n", reais);
}
