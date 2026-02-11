#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  // Padrão --> tipo matriz[linhas][colunas]
  // Matriz quadrada: Número de linhas = Número de colunas.
  int matriz1[2][3] = {{1,2,3},{2,4,6}}; // {linha1{coluna1, coluna2, etc...}, linha2{etc...}}
  int matriz2[3][3] = {0}; // Inicializa todas as posições dessa matriz com 0.
  int matriz3[3][6];


  // ---- Printando valores de uma matriz ----
  // -- Sem laço de repetição --
  printf("\t%d ", matriz1[0][0]);
  printf("\t%d ", matriz1[0][1]);
  printf("\t%d ", matriz1[0][2]);
  printf("\n");
  printf("\t%d ", matriz1[1][0]);
  printf("\t%d ", matriz1[1][1]);
  printf("\t%d ", matriz1[1][2]);
  printf("\n\n");

  // -- Com laço de repetição --
  // matriz1
  for (int linha = 0; linha < 2; linha++) { // Loop de linha
    for (int coluna = 0; coluna < 3; coluna++) { // Loop de coluna
      printf("\t%d", matriz1[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");

  // matriz2
  for (int linha = 0; linha < 3; linha++) {
    for (int coluna = 0; coluna < 3; coluna++) { 
      printf("\t%d", matriz2[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");


  // -- Lendo valores e inserido em uma matriz --
  for (int linha = 0; linha < 3; linha++)
    for (int coluna = 0; coluna < 6; coluna++) {
      printf("Linha[%d], Coluna[%d]: Valor: ", linha, coluna);
      scanf("%d", &matriz3[linha][coluna]);
    }
  printf("\n");
  
  for (int linha = 0; linha < 3; linha++) {
    for (int coluna = 0; coluna < 6; coluna++) { 
      printf("\t%d", matriz3[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");

  // -- Trocando valores de uma matriz --
  matriz3[0][2] = 0;
  matriz3[2][1] = 0;
  // etc...

  return 0;
}