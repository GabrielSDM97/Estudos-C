#include <stdio.h>
//#include <string.h>


int main() {
  char nomes[5][100];

  for (int linha = 0; linha < 5; linha++) {
    printf("Insira o %dº nome: ", linha+1);
    /* Como o valor inserido, por ser uma string, é uma cadeia de índices,
       só precisamos da linha da matriz para que a string seja registrada na memória. */
    scanf("%99[^\n]", nomes[linha]);
    getchar();
  }
  printf("\n");

  for (int linha = 0; linha < 5; linha++) {
    // O mesmo vale para imprimir strings de uma matriz, precisamos apenas da linha já que a máscara '%s' imprime strings.
    printf("%dº nome: %s\n", linha+1, nomes[linha]);
  }

  return 0;
}
