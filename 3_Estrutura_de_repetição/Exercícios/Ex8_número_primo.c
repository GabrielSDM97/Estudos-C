#include <stdio.h>
// #include <stdlib.h>

/*
    Faça um programa para ler um número inteiro n e dizer se ele é primo ou não.
*/

int main() {
  int número, divisor, divisões, opção;

  do {
    divisões = 0;
    printf("Digite um número: ");
    scanf("%d", &número);

    for (divisor = 1; divisor <= número; divisor++)
      if (número % divisor == 0)
        divisões += 1;
    
    if (divisões == 2)
      printf("O número %d é primo.\n\n", número);
    else if (divisões > 2)
      printf("O número %d não é primo.\n\n", número);

    printf("Deseja continuar? [Qualquer número]Sim; [0]Não: ");
    scanf("%d", &opção);
  } while (opção != 0);

  printf("~~~~ Até logo! ~~~~\n\n");

  return 0;
}
