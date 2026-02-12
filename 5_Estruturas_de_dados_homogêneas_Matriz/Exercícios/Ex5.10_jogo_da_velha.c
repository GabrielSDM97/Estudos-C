#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

/*
   Faça um programa para jogar o jogo da velha com seu amigo. Ao final, imprima
   o resultado do jogo e pergunte se deseja jogar novamente.
*/

int main() {
  int linha, coluna, vitoriaX, vitoriaO, scoreX = 0, scoreO = 0, fimJogo = 0;
  char jogodaVelha[3][3], limpeza, jogador;

  do {

    // Opção de início
    while (jogador != 'x' && jogador != 'o') { 
      printf("\nDeseja iniciar com 'x' ou 'o'? ");
      scanf(" %c", &jogador);
      if (jogador != 'x' && jogador != 'o')
        printf("Opção inválida, tente novamente!");
    }
    printf("\n");

    // Matriz do jogo da velha
    printf("\t1\t2\t3 <- Colunas\n");
    for (int linha = 0; linha < 3; linha++) {
      for (int coluna = 0; coluna < 3; coluna++)
        if (jogodaVelha[linha][coluna] != 'x' && jogodaVelha[linha][coluna] != 'o') {
          if (coluna == 0)
            printf("Linha %d     |\t", linha+1);
          else if (coluna == 1)
            printf("    |");
          else if (coluna == 2)
            printf("\t \t");
        }
        else if (jogodaVelha[linha][coluna] == 'x' || jogodaVelha[linha][coluna] == 'o') {
          if (coluna == 0)
            printf("Linha %d %c   |\t", linha+1, jogodaVelha[linha][coluna]);
          else if (coluna == 1)
            printf("%c   |", jogodaVelha[linha][coluna]);
          else if (coluna == 2)
            printf("\t%c\t", jogodaVelha[linha][coluna]);
        }
      if (linha < 2)
        printf("\n\t-----------------");
      printf("\n");
    }
    printf("\n");

    // Verificador de linhas
    for (int linha = 0; linha < 3; linha++) { 
      if (jogodaVelha[linha][0] == 'x' && jogodaVelha[linha][1] == 'x' && jogodaVelha[linha][2] == 'x')
        vitoriaX = 1;
      else if (jogodaVelha[linha][0] == 'o' && jogodaVelha[linha][1] == 'o' && jogodaVelha[linha][2] == 'o')
        vitoriaO = 1;
    }
    if (vitoriaX == 1 || vitoriaO == 1) {
      fimJogo = 1;
    }

    // Verificador de colunas
    if (fimJogo == 0) {
      for (int coluna = 0; coluna < 3; coluna++) { 
        if (jogodaVelha[0][coluna] == 'x' && jogodaVelha[1][coluna] == 'x' && jogodaVelha[2][coluna] == 'x')
          vitoriaX = 1;
        else if (jogodaVelha[0][coluna] == 'o' && jogodaVelha[1][coluna] == 'o' && jogodaVelha[2][coluna] == 'o')
          vitoriaO = 1;
      }
      if (vitoriaX == 1 || vitoriaO == 1) {
        fimJogo = 1;
      }
    }

    // Verificador da diagonal principal
    if (fimJogo == 0) {
      if (jogodaVelha[0][0] == 'x' && jogodaVelha[1][1] == 'x' && jogodaVelha[2][2] == 'x')
        vitoriaX = 1;
      else if (jogodaVelha[0][0] == 'o' && jogodaVelha[1][1] == 'o' && jogodaVelha[2][2] == 'o')
        vitoriaO = 1;
      if (vitoriaX == 1 || vitoriaO == 1) {
        fimJogo = 1;
      }
    }

    // Verificador da  diagonal secundária
    if (fimJogo == 0) {
      if (jogodaVelha[0][2] == 'x' && jogodaVelha[1][1] == 'x' && jogodaVelha[2][0] == 'x')
        vitoriaX = 1;
      else if (jogodaVelha[0][2] == 'o' && jogodaVelha[1][1] == 'o' && jogodaVelha[2][0] == 'o')
        vitoriaO = 1;
      if (vitoriaX == 1 || vitoriaO == 1) {
        fimJogo = 1;
      }
    }

    // Verificador de empate
    if (fimJogo == 0) {
      int empate = 1;
      for (int linha = 0; linha < 3; linha++) { 
        for (int coluna = 0; coluna < 3; coluna++)
          if (jogodaVelha[linha][coluna] != 'x' && jogodaVelha[linha][coluna] != 'o') {
            empate = 0;
            break;
          }
        if (empate == 0)
          break;
        else if (linha == 2)
          fimJogo = 1;
      }
    }

    // Engine do jogo
    if (fimJogo == 0) {
      int validaçãoLinha, validaçãoColuna, erro;
      do {
        erro = 0;
        printf("Digite a coordenada de '%c': ", jogador);
        validaçãoLinha = scanf("%d", &linha);
        validaçãoColuna = scanf("%d", &coluna);
        if (validaçãoLinha == 0 || validaçãoColuna == 0 || linha < 1 || linha > 3 || coluna < 1 || coluna > 3) {
          erro = 1;
          do { // Loop que remove todos os caracteres do buffer.
            limpeza = getchar();
          } while (limpeza != '\n'); // Quando chega na quebra de linha (Gerado após apertar ENTER), finaliza a limpeza.
          printf("Valor inválido, tente novamente!\n");
        }
        else if (jogodaVelha[linha-1][coluna-1] == 'x' || jogodaVelha[linha-1][coluna-1] == 'o') {
          erro = 1;
          printf("Coordenada já preenchida, tente novamente!\n");
        }
        else if (jogador == 'x'){
          jogodaVelha[linha-1][coluna-1] = jogador;
          jogador = 'o';
        }
        else if (jogador == 'o'){
          jogodaVelha[linha-1][coluna-1] = jogador;
          jogador = 'x';
        }
      } while(erro == 1);
    } // Decisões após jogo finalizado (empate/vitória)
    else if (fimJogo == 1) {
      int validaçãojogarNovamente, jogarNovamente, erro;
      if (vitoriaX == 1) {
        printf("\nParabens Jogador 'x', você venceu!\n");
        scoreX += 1;
      }
      else if (vitoriaO == 1) {
        printf("\nParabens Jogador 'o', você venceu!\n");
        scoreO += 1;
      }
      else if (vitoriaX == vitoriaO == 0)
        printf("\nEMPATE!!!\n");
      do {
        erro = 0;
        printf("\nDeseja jogar novamente? [1 - Sim] [0 - Não]: ");
        validaçãojogarNovamente = scanf("%d", &jogarNovamente);
        if (validaçãojogarNovamente == 0 || (jogarNovamente != 0 && jogarNovamente != 1)) {
          erro = 1;
          do {
            limpeza = getchar();
          } while (limpeza != '\n');
          printf("Valor inválido, tente novamente!\n");
        }
      } while (erro == 1);
      if (jogarNovamente == 0) 
        fimJogo = 1;
      else if (jogarNovamente == 1) {
        jogador = ' ';
        fimJogo = vitoriaO = vitoriaX = 0;
        for (int linha = 0; linha < 3; linha++)
          for (int coluna = 0; coluna < 3; coluna++)
            jogodaVelha[linha][coluna] = ' ';
      }
    }
  } while (fimJogo == 0);
  printf("\n--------------------------\n");
  printf("| Score: 'x': %d | 'o': %d |", scoreX, scoreO);
  printf("\n--------------------------\n");

  return 0;
}
