#include <stdio.h>

/*
    Implementar a função potência recursiva que retorne o valor de x elevado a n.
*/

int potência(int base, int exponente) {
  if (exponente == 1)
    return base;
  return base * potência(base, exponente - 1);
}

int main() {
  int base, exponente;

  printf("Base e Exponente: ");
  scanf("%d%d", &base, &exponente);

  printf("%d^%d = %d\n\n", base, exponente, potência(base, exponente));
         
  return 0;
}
