#include <stdio.h>

/*
    Somar todos os elementos de um vetor com recursão.
*/

int somarVetor(int vetor[], int índiceArray) {
  índiceArray > 0 ? printf("%d + ", vetor[índiceArray]) : printf("%d", vetor[índiceArray]);
  if (índiceArray == 0)
    return vetor[índiceArray];
  return vetor[índiceArray] + somarVetor(vetor, índiceArray - 1);
}

int main() {
  int vetor[10] = {2, 5, 1, 4, 10, 3, 6, 9, 7, 8};

  printf(" = %d\n\n",somarVetor(vetor, 9));

  return 0;
}
