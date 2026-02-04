#include <stdio.h>
// #include <stdlib.h>

/*
    Leia um valor inteiro N e apresente o quadrado de cada valor par de 1 até N.
*/

int main() {
  int limite;
  printf("Insira um número: ");
  scanf("%d", &limite);
  for (int valor = 2; valor <= limite; valor += 2)
    printf("%d² = %d;\n", valor, valor*valor);
  printf("\n\n");

  return 0;
}
