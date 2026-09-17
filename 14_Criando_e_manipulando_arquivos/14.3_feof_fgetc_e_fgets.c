#include <stdio.h>

int main() {

  FILE *cadastros = fopen("ArquivoDeTexto.txt", "r");
  char nomes[100];
  int i, teste;

  if (cadastros) {
    /* A função "feof()" retorna 0 se o ponteiro não estiver no fim do arquivo.
       Ao chegar no fim, retorna um valor diferente de zero (geralmente 1). */
    for (i = 0; !feof(cadastros); i++) {
      // A função "fgetc" pega um caractere por vez e avança o ponteiro para o próximo caractere.
      nomes[i] = fgetc(cadastros);
    }
    nomes[i] = '\0';

    /* Apesar da função "feof" ser eficiente para detectar o fim de um arquivo,
      existem dois problemas ao usá-la como condição final no laço acima:
      1º O "fgetc" acaba pegando o caractere EOF (-1) antes do "feof" detectar,
      e o atribui ao último índice do vetor.
      2º Quando o "feof" detecta o EOF, o contador "i" já foi incrementado,
      fazendo com que "nomes[i] = '\0'" (fora do loop) atribua o '\0' a um
      índice após o que recebeu o EOF. */

    // A função "fseek()" move o ponteiro no arquivo.
    // SEEK_SET: Início do arquivo.
    // SEEK_CUR: Atual posição do ponteiro.
    // SEEK_END: Fim do arquivo.
    fseek(cadastros, 0, SEEK_SET);

    // ---- Corrigindo o problema de "feof" ----
    /* Para corrigir o problema da função "feof", basta colocar na condição de repetição
       de um laço o próprio vetor "nomes[i]" e que seja diferente do valor de EOF, pois, quando este receber o valor de EOF,
       finaliza o laço, e, fora do loop, o índice que tem o valor de EOF recebe "\0". */
    for (i = 0; (nomes[i] = fgetc(cadastros)) != EOF; i++) { }
    nomes[i] = '\0';

    printf("\nfgetc:\n%s\n", nomes);

    fseek(cadastros, 0, SEEK_SET);

    /* A função "fgets" pega strings até descobrir uma quebra de linha "\n",
       ou até chegar no limite de tamanho (no caso abaixo, 100), ou até
       chegar no fim do arquivo. O ponteiro do arquivo é avançado a cada
       caractere lido da string; quando a função termina, o ponteiro já fica
       posicionado no início da próxima linha. Ela também retorna o endereço
       inicial do vetor que recebeu a string. O "while" abaixo com o "fgets"
       verifica se o retorno não é NULL, o que garante que paramos de imprimir
       quando chegamos ao fim do arquivo. Note que linhas vazias (que contêm
       apenas o "\n") também serão impressas. */
    printf("\nfgets:\n");
    while (fgets(nomes, 100, cadastros)) {
      printf("%s", nomes);
    }

    fclose(cadastros);

  } else
    printf("ERRO! Arquivo não foi criado.");

  printf("\n");
  return 0;
}