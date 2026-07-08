#include <stdio.h>

// String é uma sequência de caracteres.

int main() {
  // Utiliza-se vetores ou matrizes para fazer uma string.
  // Utiliza-se aspas duplas, com ou sem chaves, para definir uma string em um vetor sem precisar separar cada caractere por índice.
  char texto1[10] = {"Gabriel"};
  char texto2[10] = "José";

  /* É possível criar uma array sem definir a quantidade de índices, fazendo com
  que ela automaticamente defina a quantidade de índices dependendo da quantidade de caracteres inseridos nela. */
  char texto3[] = "Olá mundo!";
  /* IMPORTANTE!!! Não é possível definir uma array dinâmica sem atribuir valores a ela logo de início, 
     Exemplo: char texto[]; <- Isso geraria erro de inicialização de array */

  int índice = 0;
  
  // A máscara '%s' é utilizada para imprimir strings.
  printf("%s\n%s\n%s\n\n", texto1, texto2, texto3);

  return 0;
}
