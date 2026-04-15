#include <stdio.h>

/*
    Faça um programa em C que lê um número inteiro e apresente seu equivalente em binário.
*/

void decBinário(int decimal) {
  int posInversa = 0, negativo = 0, binário[100];

  if (decimal < 0) {
    decimal = decimal * -1;
    negativo = 1;
  }

  while (decimal > 1) { // Gera o código binário inversamente.
    binário[posInversa] = decimal % 2;
    decimal = decimal / 2;
    posInversa++;
  }

  if (negativo) // Número binário de todo início de sequência acima/abaixo de 0 -> (2/1)
    binário[posInversa] = -1;
  else if (negativo == 0)
    binário[posInversa] = 1;

  for (int posição = posInversa; posInversa >= 0; posInversa--) { // Organiza na ordem correta.
    printf("%d", binário[posInversa]);
  }
}

int main() {
  int número;

  printf("Digite um número inteiro: ");
  scanf("%d", &número);

  if (número == 0)
    printf("O binário de '%d' é '0'\n\n", número);
  else if (número > 0 || número < 0) {
    printf("O binário de '%d' é '", número);
    decBinário(número);
    printf("'.\n\n");
  }

  return 0;
}
