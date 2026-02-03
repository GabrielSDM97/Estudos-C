#include <stdio.h>
// #include <stdlib.h>

/*
    Leia um valor inteiro N e apresente o quadrado de cada valor par de 1 até N.
*/

int main() {
  int limite;
  printf("Insira um número: ");
  scanf("%d", &limite);
  for (int valor = 1; valor <= limite; valor++) {
    if (valor % 2 == 0)
      printf("%d; ", valor*valor);
  }
  printf("\n\n");
}
