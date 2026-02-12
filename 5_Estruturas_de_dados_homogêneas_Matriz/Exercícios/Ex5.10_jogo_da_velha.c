#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

/*
   Faça um programa para jogar o jogo da velha com seu amigo. Ao final, imprima
   o resultado do jogo e pergunte se deseja jogar novamente.
*/

int main() {
  int linha, coluna, rodada = 0, vitória = 0, empate = 0, scoreX = 0, scoreO = 0, scoreEmpate = 0;
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

    // Verificador de linhas e colunas
    for (int linha = 0; linha < 3; linha++) {
      if (jogodaVelha[linha][0] == jogador && jogodaVelha[linha][1] == jogador && jogodaVelha[linha][2] == jogador)
        vitória = 1;
      else if (jogodaVelha[0][linha] == jogador && jogodaVelha[1][linha] == jogador && jogodaVelha[2][linha] == jogador)
        vitória = 1;
    }
      
    // Verificador da diagonal principal e secundária
    if (vitória == 0) {
      if (jogodaVelha[0][0] == jogador && jogodaVelha[1][1] == jogador && jogodaVelha[2][2] == jogador)
        vitória = 1;
      else if (jogodaVelha[0][2] == jogador && jogodaVelha[1][1] == jogador && jogodaVelha[2][0] == jogador)
        vitória = 1;
    }

    // Verificador de empate
    if (rodada == 9)
      empate = 1;

    // Troca de jogadores
    if (vitória == 0 && rodada > 0) {
      if (jogador == 'x')
        jogador = 'o';
      else if (jogador == 'o')
        jogador = 'x';
    }
    
    // Engine do jogo
    if (vitória == 0 && empate == 0) {
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
        else if (jogador == 'x' || jogador == 'o'){
          jogodaVelha[linha-1][coluna-1] = jogador;
          rodada++;
        }
      } while(erro == 1);
    } // Decisões após jogo finalizado (empate/vitória)
    else if (vitória == 1 || empate == 1) {
      int validaçãojogarNovamente, jogarNovamente, erro;
      if (vitória == 1) {
        printf("Parabens Jogador '%c', você venceu!\n", jogador);
        if (jogador == 'x')
          scoreX += 1;
        else if (jogador == 'o')
          scoreO += 1;
      }
      else if (empate == 1) {
        printf("EMPATE!!!\n");
        scoreEmpate += 1;
      }
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
      if (jogarNovamente == 1) {
        jogador = ' ';
        vitória = empate = rodada = 0;
        for (int linha = 0; linha < 3; linha++)
          for (int coluna = 0; coluna < 3; coluna++)
            jogodaVelha[linha][coluna] = ' ';
      }
    }
  } while (vitória == 0 && empate == 0);
  printf("\n---------------------------------------\n");
  printf("| Score: 'x': %d | 'o': %d | empates: %d |", scoreX, scoreO, scoreEmpate);
  printf("\n---------------------------------------\n");

  return 0;
}
