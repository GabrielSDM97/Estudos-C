#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaLinha(int matriz[][5], int linha, int colunas) {
  int soma = 0;
  for (int coluna = 0; coluna < colunas; coluna++)
    soma += matriz[linha][coluna];
      
  return soma;
}

void somaTodasLinhas(int matriz[][5], int linhas, int colunas) {
  printf("\t--- Somatória por linha ---\n");
  for (int linha = 0; linha < linhas; linha++) {
    printf("\tLinha [%d] = %d\n", linha+1, somaLinha(matriz, linha, colunas));
  }
  printf("\n");
}

void preencherMatriz(int matriz[][5], int linhas, int colunas) {
  for (int linha = 0; linha < linhas; linha++)
    for (int coluna = 0; coluna < colunas; coluna++)
      matriz[linha][coluna] = 1 + rand() % 1000;
}

void imprimirMatriz(int matriz[][5], int linhas, int colunas) {
  printf("\n");
  for (int linha = 0; linha < linhas; linha++) {
    for (int coluna = 0; coluna < colunas; coluna++)
      printf("\t%d", matriz[linha][coluna]);
    printf("\n");
  }
  printf("\n");
}

int main() {
  int linhas = 10, colunas = 5, soma;
  int matriz[linhas][colunas];

  srand(time(NULL));

  printf("\tMatriz %dx%d\n", linhas, colunas);
  // -- Passagem de parâmetro por referência (matriz/vetor) --
  /* Ocorre ao enviar vetores ou matrizes em um parâmetro de uma função. São enviadas copias dos endereços 
     das posições do vetor/matriz, e não cópias dos valores, ou seja, caso os valores sejam alterados, o efeito será global, 
     independentemente em qual função forem feitas tais alterações. */
  preencherMatriz(matriz, linhas, colunas);
  imprimirMatriz(matriz, linhas, colunas);
  somaTodasLinhas(matriz, linhas, colunas);
  // 'matriz' é uma passagem de parâmetro por referência, já 'linhas' e 'colunas' são passagens de parâmetros por valores .

  /* IMPORTANTE! Para que não ocorra nenhum erro, a matriz a ser enviada deve sempre ter a mesma quantidade de colunas que
     a quantidade padrão definida no parâmetro da/do função/procedimento. Exemplo correto de aplicação:
    
     void procMatriz(int matriz[][3]) {}
     
     int main (){
      int matriz[10][3];
      
      procMatriz(matriz)
     }
  */

  return 0;
}

/* É possível também fazer parâmetros dinâmicos de matriz, exemplo:

   void procedimento(int linhas, int colunas, int matriz[linhas][colunas]) {} */


/*
void(mat[][6]) - matriz[3][3]
          00   -  00
          01   -  01
          02   -  02
          03   -  x 10
          04   -  x 11
          05   -  x 12

          10   -  20
          11   -  21
          12   -  22
          13   -  x ?
          14   -  x ?
          15   -  x ?

          20   -  ?
          21   -  ?
          22   -  ?
          23   -  x ?
          24   -  x ?
          25   -  x ?
*/
