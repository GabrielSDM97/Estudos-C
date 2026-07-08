#include <stdio.h>

int main() {
  int vet[3] = {2, 4, 6};

  // Aritmética de vetores é o cálculo utilizado para movimentar o ponteiro em uma array.

  // Avança 1 posição no vetor e pega o VALOR (desreferência).
  // Isso é equivalente a vet[1].
  printf("0 = %d\n", *(vet + 1));

  // Pega o VALOR da posição 0 e soma 1 a ele.
  // Isso é equivalente a vet[0] + 1.
  printf("0 = %d\n", *vet + 1);

  return 0;
}