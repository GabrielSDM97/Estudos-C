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
    printf("Digite 2 números: ");
    scanf("%f%f", &número1, &número2);

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
    } while(opção < 0 || opção > 4);

    if (opção == 1)
      resultado = número1 + número2;
    else if (opção == 2)
      resultado = número1 - número2;
    else if (opção == 3)
      resultado = número1 * número2;
    else if (opção == 4)
      resultado = número1 / número2;
    else if (opção == 0)
      break;

    printf("\nResultado: %.2f\n\n", resultado);
  } while (1); // Equivale a 'while True' em Python.
  printf("\n~~~~ Até mais!!! ~~~~\n\n");
}
