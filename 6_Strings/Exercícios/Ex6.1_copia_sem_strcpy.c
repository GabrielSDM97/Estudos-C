#include <stdio.h>

/*
    Faça um programa para fazer uma cópia de uma string sem usar a função
    strcpy.
*/

int main() {
  char frase[100], cópiaFrase[100];
  int índice = 0;

  printf("Digite uma frase: ");
  scanf("%99[^\n]", frase);
  getchar();

  printf("Frase: %s\nCópia: %s\n\n", frase, cópiaFrase);

  while (frase[índice] != '\0') {
    cópiaFrase[índice] = frase[índice];
    índice++;
  }

  printf("Frase: %s\nCópia: %s\n\n", frase, cópiaFrase);

  return 0;
}
