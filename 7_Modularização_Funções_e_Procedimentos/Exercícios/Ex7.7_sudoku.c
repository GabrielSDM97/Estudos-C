#include <stdio.h>
#include <math.h>

/*
    Faça um programa para resolver o jogo Sudoku.
*/

int verificaQuadrante(int matriz[][9], int inícioLinhaQuadrante, int inícioColunaQuadrante, int número) {
  for (int linha = inícioLinhaQuadrante; linha <= inícioLinhaQuadrante + 2; linha++)
    for (int coluna = inícioColunaQuadrante; coluna <= inícioColunaQuadrante + 2; coluna++) {
      if (matriz[linha][coluna] == número) {
        return 0;
      }
    }
  
  return 1;
}

int verificaLinhaColuna(int matriz[][9], int posLinha, int posColuna, int número) {

  // Verifica Linha e Coluna
  for (int índice = 0; índice < 9; índice++) {
    if (matriz[índice][posColuna] == número || matriz[posLinha][índice] == número)
      return 0;
  }
  
  // Verifica 3x3
  int linhaQuadrante = floor(posLinha / 3.0) * 3;
  int colunaQuadrante = floor(posColuna / 3.0) * 3;

  return verificaQuadrante(matriz, linhaQuadrante, colunaQuadrante, número);
}

int main() {
  int matriz[9][9] = {0}, número, validação; // Zera a matriz

  for (int linha = 0; linha < 9; linha++) {
    número = 0; // Tentar depois com número aleatórios
    if (linha % 3 == 0 && linha != 0) printf("-----------------------\n");
    for (int coluna = 0; coluna < 9; coluna++) {
      if (coluna % 3 == 0 && coluna != 0) printf(" |");
      do {
        validação = verificaLinhaColuna(matriz, linha, coluna, número);
        if (validação) {
          matriz[linha][coluna] = número;
          printf(" %d", matriz[linha][coluna]);
          break;
        }
        número++;
        if (número > 9)
          número = 1;
      } while (validação == 0);
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}
