#include <stdio.h>

/*
    Converter um número decimal em binário usando recursão.
*/

int decBinário(int binário[], int negativo, int númeroDecimal, int índice) {
  if (númeroDecimal == 1) {
    binário[índice] = 1;
    if (negativo)
      binário[índice] = -1;
    for (índice = índice; índice >= 0; índice--) {
      printf("%d", binário[índice]);
    }
    return printf("\n\n");
  }

  binário[índice] = númeroDecimal % 2;

  return decBinário(binário, negativo,númeroDecimal/2,  índice + 1);
}

int main() {
  int binário[100], negativo = 0, índices, númeroDecimal;

  printf("Digite um número decimal: ");
  scanf("%d", &númeroDecimal);

  printf("\n%d = ", númeroDecimal);

  if (númeroDecimal < 0) {
    númeroDecimal *= -1;
    negativo = 1;
  }
  
  índices = decBinário(binário, negativo, númeroDecimal, 0);

  return 0;
}
