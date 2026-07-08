#include <stdio.h>

/*
    Como calcular o somatório de 1 até n com recursão? N é um valor inteiro informado pelo usuário.
*/

int somatória(int número) {
  número > 1 ? printf("%d + ", número) : printf("%d", número);
  if (número == 1)
    return número;
  return número + somatória(número - 1);
}

int main() {
  int número = 10;

  printf(" = %d\n\n", somatória(número));
      
  return 0;
}