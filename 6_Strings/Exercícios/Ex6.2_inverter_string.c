#include <stdio.h>
#include <string.h>

/*
    Faça um programa para inverter uma string em C. Imprima o resultado.
*/

int main() {
  char frase[100], fraseContrário[100];
  int índiceContrário = 0, tamanhoFrase;

  printf("Digite uma frase: ");
  scanf("%99[^\n]", frase);

  tamanhoFrase = strlen(frase) - 1;

  /*

  */

  for (int índice = tamanhoFrase; índice >= 0; índice--) {
    fraseContrário[índiceContrário] = frase[índice];
    índiceContrário++;
  }
    
  printf("\n\nFrase: %s\nContrário: %s\n\n", frase, fraseContrário);
  
  return 0;
}
