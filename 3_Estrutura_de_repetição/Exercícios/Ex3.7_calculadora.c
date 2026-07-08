#include <stdio.h>
// #include <stdlib.h>

/*
    Escreva um programa em C que funcione como uma calculadora. O programa deve
    apresentar um menu ao usuário da seguinte forma:
    1 – Somar
    2 – Subtrair
    3 – Multiplicar
    4 – Dividir
    0 – Sair
*/

int main() {
  int opção;
  float número1, número2, resultado;

  do {

    do {
      printf("~~~~~~~~~~~~~~~~\n");
      printf("1 - Somar\n");
      printf("2 - Subtrair\n");
      printf("3 - Multiplicar\n");
      printf("4 - Dividir\n");
      printf("0 - Sair\n");
      printf("~~~~~~~~~~~~~~~~\n");
      printf("Escolha uma das operações acima: ");
      scanf("%d", &opção);
      if (opção < 0 || opção > 4)
        printf("\nOpção inválida, tente novamente!\n");
      else if (opção >= 1 && opção <= 4) {
        printf("Digite 2 números: ");
        scanf("%f%f", &número1, &número2);
      }
    } while(opção < 0 || opção > 4);

    switch (opção) {
    case 1:
      resultado = número1 + número2;
      break;
    case 2:
      resultado = número1 - número2;
      break;
    case 3:
      resultado = número1 * número2;
      break;
    case 4:
      resultado = número1 / número2;
      break;
    case 0:
      resultado = 0;
    }

    if (opção != 0)
      printf("\nResultado: %.2f\n\n", resultado);

  } while (opção != 0);
  printf("\n~~~~ Até mais!!! ~~~~\n\n");

  return 0;
}
