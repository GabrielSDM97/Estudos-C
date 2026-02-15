#include <stdio.h>
#include <string.h>

int main() {
  char palavras[100] = {"Paralelogramo Holograma"};
  char substr[100] = {"Holograma"};
  char *ponteiro;

  // strrchr(string, substring) - Verifica se o conteúdo de substring existe em string, retornando a substring ou, caso não exista, NULL.
  ponteiro = strstr(palavras, substr);

  if (ponteiro) {// Se a substring de fato existir na string, o bloco 'if' é executado.
    printf("%c\n", *ponteiro);
    printf("%c\n", *(ponteiro + 1));
    printf("%c\n", *(ponteiro + 2));
  }
  else
    printf("Caractere não encontrado!\n");
  printf("\n");

  return 0;
}
