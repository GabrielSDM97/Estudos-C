#include <stdio.h>
// #include <stdlib.h>

/*
    Escreva um programa para ler as notas da primeira e da segunda avaliação de
   um aluno. Calcule e imprima a média semestral. O programa deverá aceitar
   apenas notas válidas no intervalo 0 a 10. Cada nota deve ser validada
   separadamente. Ao final, deve ser impressa a mensagem “novo calculo? (1-sim
   2-nao)”, solicitando ao usuário que informe um código (1 ou 2), indicando se
   ele deseja ou não executar o programa novamente. Se for informado o código 1,
   deve ser repetida a execução de todo o programa para permitir um novo
   cálculo, se for informado o código 2 o programa deve ser encerrado.
*/

int main() {
  float nota1, nota2;
  int opção;

  do {

    do {
      printf("Nota da primeira avaliação: ");
      scanf("%f", &nota1);
      if (nota1 < 0 || nota1 > 10)
        printf("Nota inválida, tente novamente!\n");
    } while (nota1 < 0 || nota1 > 10);

    do {
      printf("Nota da segunda avaliação: ");
      scanf("%f", &nota2);
      if (nota2 < 0 || nota2 > 10)
        printf("Nota inválida, tente novamente!\n");
    } while (nota2 < 0 || nota2 > 10);

    printf("\nMédia semestral: %.1f\n", (nota1 + nota2) / 2);

    do {
      printf("Deseja inserir novas notas? [1] Sim [2] Não: ");
      scanf("%d", &opção);
      if (opção < 1 || opção > 2)
        printf("Opção incorreta, tente novamente!\n");
    } while (opção != 1 && opção != 2);

  } while (opção == 1);

  printf("~~~~ Até logo! ~~~~");

  return 0;
}
