#include <stdio.h>

int main() {

  FILE *cadastros = fopen("ArquivoDeTexto.txt", "w");
  char nome[100];
  int idade, continuar = 1;
  float altura;

  if (cadastros) {
    while (continuar) {
      printf("Digite seu nome, idade e altura: ");
      scanf("%99[^\n]%d%f", nome, &idade, &altura);
      /* A função "fprintf" grava dados formatados em um arquivo. O primeiro 
         argumento ("cadastros") é o arquivo de destino, e o restante funciona 
         de forma idêntica ao "printf". */
      fprintf(cadastros, "%s %d %.2f\n", nome, idade, altura);
      printf("Deseja continuar? ");
      scanf("%d", &continuar);
      getchar();
    }
    fclose(cadastros);
  } else
    printf("ERRO! Arquivo não foi criado.");

  return 0;
}