/* Fila = Estrutura de dados onde o primeiro dado inserido é o primeiro a
   sair (First In First Out = FIFO). */

/* Uma fila é composta por nós, onde cada nó tera um valor e o ponteiro para o
   PRÓXIMO nó na fila. */

/* IMPORTANTE: O algorítmo de fila abaixo é uma das formas de fazer tal estrutura.
   Existem muitas outras maneiras de fazê-la. */

/* Use o comando "gcc main.c fila.c -o programa && ./programa" para
   compilar os 2 arquivos de códigos funcionais "main.c" e "fila.c"
   para que o linker encontre as definições das funções declaradas no header "fila.h". */

#include "../Header/fila.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  Nó *valorDesenfileirado;
  Fila *fila = criarFila();
  int opção, valor;

  do {
    printf("\n\t0 - Sair\n\t1 - Enfileirar\n\t2 - Desenfileirar\n\t3 - Imprimir\n\n");
    printf("Sua escolha: ");
    scanf("%d", &opção);
    switch (opção) {
    case 0:
      printf("Até logo!\n\n");
      break;
    case 1:
      printf("Digite um valor a ser enfileirado: ");
      scanf("%d", &valor);
      enfileirar(fila, valor);
      break;
    case 2:
      if (fila->nóInicial) {
        printf("Valor desenfileirado: %d\n",
               (valorDesenfileirado = desenfileirar(fila))->valor);
        free(valorDesenfileirado);
        break;
      }
      printf("A fila está vazia!\n");
      break;
    case 3:
      if (fila->nóInicial) {
        printf("Início: ");
        imprimir(fila->nóInicial);
        break;
      }
      printf("A fila está vazia!\n");
      break;
    default:
      printf("Opção inválida, tente novamente!\n");
    }
  } while (opção != 0);
  return 0;
}
