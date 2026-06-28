#include <stdio.h>

int main() {

  FILE *cadastros = fopen("ArquivoDeTexto.txt", "r");
  char nome[100];
  int idade, retorno, i;
  float altura;

  if (cadastros) {
    /* A função "fscanf" funciona como o "scanf", mas lê de um arquivo em vez
     do teclado. O seu retorno é um número inteiro que indica a quantidade
     de itens lidos com sucesso (neste caso, o máximo seria 3: string, int e
     float). Se a leitura falhar (por exemplo, ao chegar no fim do arquivo), a
     função retorna a constante EOF (geralmente -1) e as variáveis não são
     alteradas. */
    while((retorno = fscanf(cadastros, "%s%d%f", nome, &idade, &altura)) != EOF)
      printf("\tRetorno: %d\tNome: %s\tIdade: %d\tAltura: %.2f\n", retorno, nome, idade, altura);
    fclose(cadastros);
  } else
    printf("ERRO! Arquivo não foi criado.");
  printf("\n");

  return 0;
}