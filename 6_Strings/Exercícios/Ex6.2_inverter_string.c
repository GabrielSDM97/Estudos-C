#include <stdio.h>
#include <string.h>

/*
    Faça um programa para inverter uma string em C. Imprima o resultado.
*/

int main() {
  char frase[100], fraseInversa[100];
  int tamanhoFrase;

  printf("Digite uma frase: ");
  scanf("%99[^\n]", frase);

  tamanhoFrase = strlen(frase) - 1;

  for (int índiceInverso = tamanhoFrase, índice = 0; índiceInverso >= 0; índiceInverso--, índice++) {
    fraseInversa[índice] = frase[índiceInverso];
  }
    
  printf("\n\nFrase: %s\nContrário: %s\n\n", frase, fraseInversa);
  
  return 0;
}
