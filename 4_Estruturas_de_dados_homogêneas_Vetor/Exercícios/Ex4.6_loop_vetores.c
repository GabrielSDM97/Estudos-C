#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Faça um programa que gere 10 números reais e os armazene em um vetor. Em
    seguida, leia um código inteiro e faça uma das ações abaixo: 0 – finaliza o
    programa; 1 – imprime o vetor na ordem do início ao fim; 2 – imprime o vetor
    na ordem inversa (do fim para o início). O programa deve funcionar até que o
    usuário digite 0 para finalizar.
*/

int main() {
  int opção;
  float vetorReal[10];

  srand(time(NULL));

  for (int índice = 0; índice < 10; índice++) {
    vetorReal[índice] = 1 + rand() % 200;
  }

  do {
    printf("\n\n[1] Imprimir o vetor na ordem padrão; [2] Imprimir o vetor na ordem inversa; [0] Sair\nSua escolha: ");
    scanf("%d", &opção);
    printf("\n");

    switch (opção) {
    case 0:
      break;
    case 1:
      for (int índice = 0; índice < 10; índice++)
        printf("| %.2f ", vetorReal[índice]);
      break;
    case 2:
      for (int índice = 9; índice > -1; índice--)
        printf("| %.2f ", vetorReal[índice]);
      break;
    default:
      printf("Opção incorreta, tente novamente!");
    }

  } while (opção != 0);
  printf("~~~~ Até logo! ~~~~\n\n");

  return 0;
}
