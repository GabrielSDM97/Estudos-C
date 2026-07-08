#include <stdio.h>
#include <string.h>

int main() {
  char frase[100] = "Carro novo na garagem.";
  char *ponteiro;

  // 1º parâmetro: inicia a tokenização da string 'frase'
  // 2º parâmetro: aqui fica os delimitadores. No caso abaixo teremos espaço em branco, ponto e vírgula (" .,").
  // A função substitui toda instância dos delimitadores na string por '\0' e retorna o endereço do primeiro token.
  // Em outras palavras, "strtok" mantem as strings intactas na memória, apenas trocando os caracteres delimitadores por '\0'.
  ponteiro = strtok(frase, " .,");

  // Loop para exibir todos os tokens encontrados até o final da string
  while (ponteiro) { // Enquanto o 'ponteiro' não chegar em NULL (após o último token), essa estrutura de repetição será executada.
    // Imprime o token atual (palavra completa, não apenas o primeiro caractere como seria caso usássemos '*' ao lado de 'ponteiro')
    printf("%s\n", ponteiro);

    /* Continua a tokenização da mesma string 'frase'.
      NULL indica que a função 'strtok()' deve continuar da posição onde ela parou anteriormente.
      A função mantém internamente a posição atual na string original. */
    ponteiro = strtok(NULL, " .,");
  }
  printf("\n");

  return 0;
}
