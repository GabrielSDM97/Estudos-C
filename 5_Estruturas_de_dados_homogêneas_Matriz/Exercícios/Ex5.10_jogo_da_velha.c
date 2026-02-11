#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

/*
   Faça um programa para jogar o jogo da velha com seu amigo. Ao final, imprima
   o resultado do jogo e pergunte se deseja jogar novamente.
*/

int main() {
  int linha, coluna, valorDiagonal, contadorX, contadorO, jogador = 1, fimJogo = 0;
  char jogodaVelha[3][3], limpeza;

  do {

    for (int linha = 0; linha < 3; linha++) {
      for (int coluna = 0; coluna < 3; coluna++)
        jogodaVelha[linha][coluna] != 'x' && jogodaVelha[linha][coluna] != 'o' ? printf(".\t") : printf("%c\t", jogodaVelha[linha][coluna]);
      printf("\n\n");
    }

    for (int linha = 0; linha < 3; linha++) { // Verifica linhas
      contadorX = contadorO = 0;
      for (int coluna = 0; coluna < 3; coluna++) {
        if (jogodaVelha[linha][coluna] == 'x')
          contadorX++;
        else if (jogodaVelha[linha][coluna] == 'o')
          contadorO++;
      }
      if (contadorX == 3 || contadorO == 3) {
        fimJogo = 1;
        break;
      }
    }

    if (fimJogo == 0) {
      for (int linha = 0; linha < 3; linha++) { // Verifica colunas
        contadorX = contadorO = 0;
        for (int coluna = 0; coluna < 3; coluna++) {
          if (jogodaVelha[coluna][linha] == 'x')
            contadorX++;
          else if (jogodaVelha[coluna][linha] == 'o')
            contadorO++;
        }
        if (contadorX == 3 || contadorO == 3) {
          fimJogo = 1;
          break;
        }
      }
    }

    if (fimJogo == 0) {
      valorDiagonal = 0;
      contadorX = contadorO = 0;
      for (int linha = 0; linha < 3; linha++) { // Verifica diagonal principal
        for (int coluna = 0; coluna < 3; coluna++) {
          if (valorDiagonal == coluna) {
            if (jogodaVelha[coluna][linha] == 'x')
              contadorX++;
            else if (jogodaVelha[coluna][linha] == 'o')
              contadorO++;
          }
        }
        valorDiagonal++;
        if (contadorX == 3 || contadorO == 3) {
          fimJogo = 1;
          break;
        }
      }
    }

    if (fimJogo == 0) {
      valorDiagonal = 2;
      contadorX = contadorO = 0;
      for (int linha = 0; linha < 3; linha++) { // Verifica diagonal secundária
        for (int coluna = 0; coluna < 3; coluna++) {
          if (valorDiagonal == coluna) {
            if (jogodaVelha[coluna][linha] == 'x')
              contadorX++;
            else if (jogodaVelha[coluna][linha] == 'o')
              contadorO++;
          }
        }
        valorDiagonal--;
        if (contadorX == 3 || contadorO == 3) {
          fimJogo = 1;
          break;
        }
      }
    }

    if (fimJogo == 0) {
      int empate = 1;
      for (int linha = 0; linha < 3; linha++) { // Verifica empate
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
    
    if (fimJogo == 0) {
      int validaçãoLinha, validaçãoColuna, erro;
      do {
        erro = 0;
        printf("Jogador %d --> Linha e coluna: ", jogador);
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
          printf("Posição já preenchida, tente novamente!\n");
        }
        else if (jogador == 1){
          jogodaVelha[linha-1][coluna-1] = 'x';
          jogador = 2;
        }
        else if (jogador == 2){
          jogodaVelha[linha-1][coluna-1] = 'o';
          jogador = 1;
        }
      } while(erro == 1);
    }
    else if (fimJogo == 1) {
      int validaçãojogarNovamente, jogarNovamente, erro;
      contadorX == 3 ? printf("\nParabens Jogador 1, você venceu!\n") : contadorO == 3 ? printf("\nParabens Jogador 2, você venceu!\n") : printf("\nEMPATE!!!\n");
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
        fimJogo = 0;
        for (int linha = 0; linha < 3; linha++)
          for (int coluna = 0; coluna < 3; coluna++)
            jogodaVelha[linha][coluna] = ' ';
      }
    }

  } while (fimJogo == 0);
  printf("\n~~~~ Até logo! ~~~~\n");

  return 0;
}
