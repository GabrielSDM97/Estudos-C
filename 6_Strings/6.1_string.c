#include <stdio.h>

// String é uma sequência de caracteres.

int main() {
  // Utiliza-se vetores ou matrizes para fazer uma string.
  // Utiliza-se aspas duplas para definir uma string em um vetor sem precisar separar cada caractere por índice.
  char texto[10] = {"Gabriel"};
  int índice = 0;
  
  // A máscara '%s' é utilizada para imprimir strings.
  printf("%s\n\n", texto);

  return 0;
}
