#include <stdio.h>

int main() {

  FILE *cadastros = fopen("ArquivoDeTexto.txt", "r");
  char nomes[100];
  int i, teste;

  if (cadastros) {
    /* feof() NAO preve o fim do arquivo, ele so avisa DEPOIS que uma
       leitura tentou passar do fim e falhou:
       - retorna 0 enquanto nenhuma leitura falhou;
       - retorna != 0 so depois que fgetc/fgets tentou ler alem do fim. */
    for (i = 0; !feof(cadastros); i++) {
      // fgetc lê 1 caractere e avanca o ponteiro. Se já estava no fim, ele falha e retorna EOF (-1).
      nomes[i] = fgetc(cadastros);
    }
    nomes[i] = '\0';

    /* Por que o loop acima faz 1 volta a mais? Exemplo pratico:
       Suponha i = 3 lendo o ULTIMO caractere valido:
       1. nomes[3] recebe o caractere valido, ponteiro vai para o fim, mas feof ainda e 0.
          Estar NO fim nao e erro, entao o teste !feof deixa entrar de novo.
       2. i vira 4, nomes[4] = fgetc(...) tenta ler ALEM do fim, falha e recebe EOF (-1).
          So AGORA o feof vira 1.
       3. i vira 5, !feof e falso e o loop quebra, mas o estrago ja foi feito:
          nomes[4] tem EOF e nomes[5] recebe '\0', deixando 1 lixo no meio da string. */

    // A função "fseek()" move o ponteiro no arquivo.
    // SEEK_SET: Início do arquivo.
    // SEEK_CUR: Atual posição do ponteiro.
    // SEEK_END: Fim do arquivo.
    fseek(cadastros, 0, SEEK_SET);

    // ---- Forma correta: testar o retorno do fgetc ----
    /* Aqui o teste e feito DEPOIS de cada leitura, na hora certa:
       (nomes[i] = fgetc(...)) != EOF lê e já testa o resultado.
       Quando tentar ler alem do fim e receber EOF, o loop quebra na hora,
       e nomes[i] = '\0' sobrescreve aquele EOF. Sem volta extra, sem lixo. */
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