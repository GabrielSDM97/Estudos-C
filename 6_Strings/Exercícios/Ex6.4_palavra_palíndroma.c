#include <ctype.h>
#include <stdio.h>
#include <string.h>

/*
    Faça um programa para descobrir se uma palavra é palíndroma com a linguagem C?
*/

int main() {
  char palavra[30] = {"omississimo"};
  int tamanhoPalavra, palíndromo;

  tamanhoPalavra = strlen(palavra) - 1;
  
  for (int índice = 0, índiceInverso = tamanhoPalavra; índice <= tamanhoPalavra; índice++, índiceInverso--) {
    if (palavra[índice] != palavra[índiceInverso]) {
      palíndromo = 0;
      break;
    }
    palíndromo = 1;
  }

  if (palíndromo == 1)
    printf("A palavra '%s' é um palíndromo.\n\n", palavra);
  else if (palíndromo == 0)
    printf("A palavra '%s' não é um palíndromo.\n\n", palavra);
    
  return 0;
}
