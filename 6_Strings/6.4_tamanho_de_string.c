#include <stdio.h>
#include <string.h> // Biblioteca que importa diversas funções relacionadas à string.

int main() {
  int tamanhoString;
  char frase[40];

  // Primeira opção de leitura de string
  printf("Digite uma frase: ");
  scanf("%39[^\n]", frase);
  // Limpa o '\n' residual do buffer de teclado.
  getchar();
  // Na biblioteca "string.h" temos a função 'strlen()', a qual lê o tamanho de uma string.
  printf("Tamanho da array: %zu\n\n", strlen(frase));

  /*
  -- 'strlen()' equivale a: --
  tamanhoString = 0;

  while (frase[tamanhoString] != '\0') {
    tamanhoString++;
  }
  */

  // Segunda opção de leitura de string
  int índice = 0;
  printf("Digite uma frase: ");
  fgets(frase, 40, stdin);
  // Loop necessário para remover '\n' da string antes da função 'strlen()' fazer a contagem.
  while (frase[índice] != '\n')
    índice++;
  // A quebra de linha é trocada pelo caracter "\0", removendo-a e atualizando a posição do fim da string.
  frase[índice] = '\0';
  printf("Tamanho da array: %zu\n\n", strlen(frase));
  return 0;
}
