#include <stdio.h>
// #include <stdlib.h>

/*
    Como garantir que o usuário vai digitar um número?
*/

int main() {
  int validação, número;
  char limpeza;

  printf("Insira um número: ");
  validação = scanf("%d", &número);

  while (validação == 0) { // 0 = 'scanf' de 'int' não conseguiu ler um valor inteiro;

    do { // Loop que remove todos os caracteres do buffer.
      limpeza = getchar();
    } while (limpeza != '\n'); // Quando chega na quebra de linha (Gerado após apertar ENTER), finaliza a limpeza.

    printf("Por favor, insira um valor numérico: ");
    validação = scanf("%d", &número);
  }

  printf("Você inseriu o valor %d!\n\n", número);

  return 0;
}

/* Sem o loop de limpeza de buffer, o loop de validação ficaria se repetindo
infinitamente, já que o 'scanf' ficaria verificando sempre o mesmo caractere e retornando 0. */
