#include <stdio.h>

/*
    Descobrir o maior e o menor elemento de um vetor com recursão.
*/

int maiorValorVetor(int vetor[], int maiorValor, int índice) {
  if (índice == 9)
    maiorValor = vetor[índice];
  else if (vetor[índice] > maiorValor)
    maiorValor = vetor[índice];
  else if (índice == 0)
    return maiorValor;
  return maiorValorVetor(vetor, maiorValor, índice - 1);
}

int menorValorVetor(int vetor[], int maiorValor, int índice) {
  if (índice == 9)
    maiorValor = vetor[índice];
  else if (vetor[índice] < maiorValor)
    maiorValor = vetor[índice];
  else if (índice == 0)
    return maiorValor;
  return menorValorVetor(vetor, maiorValor, índice - 1);
}

int main() {
  int vetor[10] = {2, 5, 1, 4, 10, 3, 6, 9, 7, 8};

  printf("Maior valor no vetor: %d\nMenor valor no vetor: %d\n\n",
         maiorValorVetor(vetor, 0, 9), menorValorVetor(vetor, 0, 9));
  
  return 0;
}

