#include <stdio.h>
// #include <stdlib.h>

/*
    Faça um programa que peça números ao usuário. Quando o usuário digitar o
   número 0 (zero) o programa deve imprimir na tela quantos números positivos e
   negativos foram digitados.
*/

int main() {
  int número, contador, númerosPositivos = 0, númerosNegativos = 0;

  contador = 0;
  while (número != 0) {
    contador += 1;
    printf("Digite o %dº número: ", contador);
    scanf("%d", &número);
    if (número > 0)
      númerosPositivos += 1;
    else if (número < 0)
      númerosNegativos += 1;
  }

  printf("\n\nQuantidade de números positivos: %d\nQuantidade de números negativos: %d\n\n", númerosPositivos, númerosNegativos);

  return 0;
}
