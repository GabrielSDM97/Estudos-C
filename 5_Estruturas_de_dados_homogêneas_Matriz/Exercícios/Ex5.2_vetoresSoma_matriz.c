#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
    Crie um programa que preencha uma matriz 5×10 com números inteiros. Em
    seguida faça:
    a) some cada uma das linhas armazenando o resultado em um vetor;
    b) some cada uma das colunas armazenando o resultado em um vetor;
    c) Imprima a matriz e os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.
*/

int main() {
  int matriz[5][10], somaLinha[5] = {0}, somaColuna[10] = {0};

  srand(time(NULL));

  for (int linha = 0; linha < 5; linha++)
    for (int coluna = 0; coluna < 10; coluna++) {
      matriz[linha][coluna] = 1 + rand() % 100;
      somaLinha[linha] += matriz[linha][coluna];
      somaColuna[coluna] += matriz[linha][coluna];
    }

  printf("\t\t----------------------------------------------------------------------------------------- Soma(Linhas)\n");
  
  for (int linha = 0; linha < 5; linha++)
    for (int coluna = 0; coluna < 10; coluna++) {
      if (coluna == 0)
        printf("\t\t|\t%d", matriz[linha][coluna]);
      else if (coluna == 9)
        printf("\t%d\t| %d\n", matriz[linha][coluna], somaLinha[linha]);
      else if (coluna != 0 && coluna != 9)
        printf("\t%d", matriz[linha][coluna]);
    }

  printf("\t\t-----------------------------------------------------------------------------------------\n");

  for (int índice = 0; índice < 10; índice ++)
    índice == 0 ? printf("\tSoma(Colunas)\t%d", somaColuna[índice]) : printf("\t%d", somaColuna[índice]);
  printf("\n\n");
  
  return 0;
}