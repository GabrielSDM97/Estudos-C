#include <stdio.h>
// #include <stdlib.h>

/*
    Faça um programa que peça números ao usuário. Quando o usuário digitar o
   número 0 (zero) o programa deve imprimir na tela quantos números positivos e
   negativos foram digitados.
*/

int main() {
  int número, contadorNum, númerosPositivos = 0, númerosNegativos = 0;

  contadorNum = 0;
   do {
    contadorNum++;
    printf("Digite o %dº número: ", contadorNum);
    scanf("%d", &número);
    if (número > 0)
      númerosPositivos++;
    else if (número < 0)
      númerosNegativos++;
  } while (número != 0);

  printf("\nQuantidade de números positivos: %d\nQuantidade de números negativos: %d\n\n", númerosPositivos, númerosNegativos);

  return 0;
}
