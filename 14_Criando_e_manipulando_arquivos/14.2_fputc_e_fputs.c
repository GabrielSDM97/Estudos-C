#include <stdio.h>
#include <string.h>

int main() {

  FILE *cadastros = fopen("ArquivoDeTexto.txt", "r+");
  char nome[100] = "Gabriel Sarmento";
  int i;

  if (cadastros) {
    for (i = 0; nome[i] != '\0'; i++)
      // A função "fputc" insere um caractere por vez no arquivo.
      fputc(nome[i], cadastros);
    fputc('\n', cadastros);

    strcpy(nome, "Maria da Silva");
    
    // A função "fputs" insere strings no arquivo.
    fputs(nome, cadastros);
    fputc('\n', cadastros);

    // Mesclando ambas as funções de escrita para inserir mútiplos nomes com quebra de linha.
    for (i = 1; i <= 2; i++) {
      printf("Digite nome e sobrenome: ");
      scanf("%99[^\n]", nome);
      getchar();
      fputs(nome, cadastros);
      fputc('\n', cadastros);
    }
    // Fecha arquivo
    fclose(cadastros);
    
  } else
    printf("ERRO! Arquivo não foi criado.");

  return 0;
}