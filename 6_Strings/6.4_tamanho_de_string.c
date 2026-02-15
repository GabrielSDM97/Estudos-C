#include <stdio.h>
#include <string.h> // Biblioteca que importa diversas funções relacionadas à string.

// Dentre as funções e procedimentos temos a função 'strlen()' a qual lê o tamanho de uma string.

int main() {
  int tamanhoString;
  char frase[40];

  printf("Digite uma frase: ");
  scanf("%39[^\n]" , frase);

  /*
  // Outra maneira com 'fgets'

  int índice = 0;

  fgets(frase, 39, stdin);

  // Loop necessário para remover '\n' da string antes da função 'strlen()' fazer a contagem.
  while (frase[índice] != '\n')
    índice++;
  frase[índice] = '\0';
  */

  tamanhoString = strlen(frase);

  printf("Tamanho da array: %d\n\n", tamanhoString);

  return 0;
}
