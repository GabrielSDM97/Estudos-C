/* Os símbolos <> indicam bibliotecas do sistema/standard library que o
   compilador busca em diretórios padrão pré-configurados. */
#include <stdio.h>
#include <stdlib.h>
/* As aspas "" indicam ao compilador buscar primeiro no diretório atual do
   arquivo, e depois nos diretórios padrão. Ideal para arquivos do próprio projeto. */
#include "../Header/15.2_pilha.h"

/* Use o comando "gcc 15.2_main.c 15.2_pilha.c -o programa && ./programa" para
   compilar os 2 arquivos de códigos funcionais "main.c" e "15.2_pilha.c"
   para que o linker encontre as definições das funções declaradas no header "15.2_pilha.h". */

int main() {
  Nó *pilha = criarPilha(), *valorDesempilhado;
  int opção, valor;

  do {
    printf("\n\t0 - Sair\n\t1 - Empilhar\n\t2 - Desempilhar\n\t3 - Imprimir\n\n");
    printf("Sua escolha: ");
    scanf("%d", &opção);
    switch (opção) {
    case 0:
      printf("Até logo!\n\n");
      break;
    case 1:
      printf("Digite um valor a ser empilhado: ");
      scanf("%d", &valor);
      empilhar(&pilha, valor);
      break;
    case 2:
      if (pilha) {
        printf("Valor desempilhado: %d", (valorDesempilhado = desempilhar(&pilha))->valor);
        free(valorDesempilhado);
        break;
      }
      printf("A pilha está vazia!\n");
      break;
    case 3:
      if (pilha) {
        printf("Topo: ");
        imprimir(pilha);
        break;
      }
      printf("A pilha está vazia!\n");
      break;
    default:
      printf("Opção errada, tente novamente!\n");
    }
  } while (opção != 0);
  return 0;
}