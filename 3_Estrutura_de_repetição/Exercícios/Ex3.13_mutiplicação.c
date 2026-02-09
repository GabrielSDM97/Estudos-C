#include <stdio.h>
// #include <stdlib.h>

/*
    Faça um programa que peça ao usuário dois números inteiros e apresente o
   resultado na multiplicação entre os dois números sem utilizar a operação de
   multiplicação.
*/

int main() {
  int multiplicador, multiplicando, produto = 0;

  printf("Insira dois números inteiros: ");
  scanf("%d%d", &multiplicador, &multiplicando);

  for (int contador = 1 ; contador <= multiplicador; contador++)
    produto += multiplicando;
  printf("%d * %d = %d\n\n", multiplicador, multiplicando, produto);

  return 0;
}
