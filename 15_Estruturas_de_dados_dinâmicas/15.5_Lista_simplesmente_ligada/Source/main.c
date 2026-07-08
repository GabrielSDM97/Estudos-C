/* Estrutura mais flexível que pilha e fila, já que podemos inserir/remover nós
   em qualquer lugar da estrutura, não apenas no fim ou no início como é em fila
   e pilha. */

// Lista simplesmente ligada: Cada nó tem um ponteiro para o próximo nó.

/* Lista duplamente ligada: Cada nó tem um ponteiro tem dois ponteiros,
   apontando para o nó anterior e o posterior. */

/* Lista circular: Cada nó tem um ponteiro para o próximo nó e o último nó
   aponta para o primeiro nó da fila. */

/* IMPORTANTE: O algorítmo de lista simplesmente ligada abaixo é uma das
   formas de fazer tal estrutura. Existem muitas outras maneiras de fazê-la. */

/* Use o comando "gcc main.c lista.c -o programa && ./programa" para
   compilar os 2 arquivos de códigos funcionais "main.c" e "lista.c" para
   que o linker encontre as definições das funções declaradas no header
   "lista.h". */

#include "../Header/lista.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  Lista *lista = criarLista();
  int opção, valor;

  do {
    printf("\n\t0 - Sair\n\t1 - Inserir início\n\t2 - Inserir fim\n\t3 - "
           "Inserir ordenado\n\t4 - Remover\n\t5 - Imprimir\n\t6 - Pesquisar");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opção);
    switch (opção) {
    case 0:
      printf("\nAté logo!\n");
      break;
    case 1:
      printf("\nDigite o valor a ser inserido no início: ");
      scanf("%d", &valor);
      inserirInício(lista, valor);
      break;
    case 2:
      printf("\nDigite o valor a ser inserido no fim: ");
      scanf("%d", &valor);
      inserirFim(lista, valor);
      break;
    case 3:
      printf("\nDigite o valor a ser inserido ordenado: ");
      scanf("%d", &valor);
      inserirOrdenado(lista, valor);
      break;
    case 4:
      printf("\nLista %d: ", lista->tamanhoLista);
      imprimir(lista->nóInicial);
      printf("Digite o valor a ser removido: ");
      scanf("%d", &valor);
      Nó *nó = remover(lista, valor);
      if (nó) {
        printf("Valor %d removido!\n", nó->valor);
        free(nó);
        break;
      }
      printf("\nValor %d não foi encontrado!\n", valor);
      break;
    case 5:
      printf("\nLista %d: ", lista->tamanhoLista);
      imprimir(lista->nóInicial);
      break;
    case 6:
      printf("\nDigite o valor a ser pesquisado: ");
      scanf("%d", &valor);
      Nó *Nó = pesquisar(lista->nóInicial, valor);
      if (Nó) {
        printf("\nValor %d encontrado!\n", Nó->valor);
        break;
      }
      printf("\nValor %d não foi encontrado!\n", valor);
      break;
    default:
      printf("\nOpção inválida, tente novamente!\n\n");
    }
  } while (opção != 0);
  return 0;
}