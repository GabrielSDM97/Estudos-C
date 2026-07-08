#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

/*
    Dada uma matriz 4 x 4 faça um programa que diga se ela é um quadrado mágico ou não.
*/

int main() {
  int tamanhoMatriz = 4, matriz[4][4] = {{16,2,3,13},{5,11,10,8},{9,7,6,12},{4,14,15,1}};
  int valorLinhaAtual, valorColunaAtual, valorReferência, valorDiagonal, somaDiagonal, quadradoMágico = 1;

  for (int linha = 0; linha < tamanhoMatriz; linha++) { // Verificação de Linhas
    valorLinhaAtual = 0;
    for (int coluna = 0; coluna < tamanhoMatriz; coluna++)
      valorLinhaAtual += matriz[linha][coluna];
    printf("Linha[%d]: %d\n", linha, valorLinhaAtual);
    if (linha == 0)
      valorReferência = valorLinhaAtual;
    else if (linha > 0 && valorLinhaAtual != valorReferência)
      quadradoMágico = 0;
  }

  for (int coluna = 0; coluna < tamanhoMatriz; coluna++) { // Verificação de Colunas
    valorColunaAtual = 0;
    for (int linha = 0; linha < tamanhoMatriz; linha++)
      valorColunaAtual += matriz[linha][coluna];
    printf("Coluna[%d]: %d\n", coluna, valorColunaAtual);
    if (valorColunaAtual != valorReferência)
      quadradoMágico = 0;
  }

  valorDiagonal = 0;
  somaDiagonal = 0;
  for (int linha = 0; linha < tamanhoMatriz; linha++) { // Verificação da Diagonal Principal
    for (int coluna = 0; coluna < tamanhoMatriz; coluna++)
      if (valorDiagonal == coluna)
        somaDiagonal += matriz[linha][coluna];
    valorDiagonal++;
  }
  printf("Diagonal Principal: %d\n", somaDiagonal);
  if (somaDiagonal != valorReferência)
    quadradoMágico = 0;

  valorDiagonal = 3;
  somaDiagonal = 0;
  for (int linha = 0; linha < tamanhoMatriz; linha++) { // Verificação da Diagonal Secundária
    for (int coluna = 0; coluna < tamanhoMatriz; coluna++)
      if (valorDiagonal == coluna)
        somaDiagonal += matriz[linha][coluna];
    valorDiagonal--;
  }
  printf("Diagonal Secundária: %d\n", somaDiagonal);
  if (somaDiagonal != valorReferência)
    quadradoMágico = 0;

  if (quadradoMágico == 1)
    printf("\nO quadrado É mágico!\n\n");
  else if (quadradoMágico == 0)
    printf("\nO quadrado NÃO É mágico!\n\n");

  for (int linha = 0; linha < tamanhoMatriz; linha++) { // Matriz
    for (int coluna = 0; coluna < tamanhoMatriz; coluna++)
      printf("%d\t", matriz[linha][coluna]);
    printf("\n\n\n");
  }

  return 0;
}
