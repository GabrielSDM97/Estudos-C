#include <stdio.h>
#include <stdlib.h>
#include "../Header/15.3_fila.h"

Fila *criarFila() {
  // Cria região na memória para controlar início e fim da fila.
  Fila *fila = malloc(sizeof(Fila));
  // Tanto o início quanto fim começam sem nenhum valor (NULL).
  fila->nóInicial = NULL;
  fila->nóFinal = NULL;
  return fila;
}

void enfileirar(Fila *fila, int valor) {
  // Cria região na memória para o novo nó na fila.
  Nó *nóNovo = malloc(sizeof(Nó));
  if (nóNovo) {
    nóNovo->valor = valor;
    /* Insere NULL para que o campo "próximo" não aponte para lixo de memória
       enquanto um novo nó não é criado. */
    nóNovo->próximoNó = NULL;
    // Verifica se existe um nó inicial na fila.
    if (fila->nóInicial) {
      /* Através do endereço do nó anterior apontado pelo ponteiro "nóFinal", o campo
         "próximoNó" é acessado e atualizado com o endereço do novo nó criado. */
      fila->nóFinal->próximoNó = nóNovo;
      // O campo "nóFinal" é atualizado com o endereço do novo nó adicionado no fim da fila.
      fila->nóFinal = nóNovo;
    }
    /* Se a condição acima não for atendida, significa que não há nó inicial,
       acionando a estrutura abaixo a qual atribui o endereço do novo nó tanto
       ao campo "nóInicial" quanto ao campo de "nóFinal". */
    else {
      fila->nóInicial = nóNovo;
      fila->nóFinal = nóNovo;
    }
  } else
    printf("Erro na alocação de memória!\n\n");
}

Nó *desenfileirar(Fila *fila) {
  // Atribui o endereço do nó inicial ao ponteiro "removerNó".
  Nó *removerNó = fila->nóInicial;
  // Verifica se existe um nó inicial na fila através do endereço atribuido a "removerNó".
  if (removerNó)
    /* Atribui o endereço do próximo nó ao "nóInicial", efetivamente removendo o
       primeiro nó inserido na fila. */
    fila->nóInicial = removerNó->próximoNó;
  // Retorna o endereço do nó removido para ser liberado na memória.
  return removerNó;
}

void imprimir(Nó *início) {
  // Condição de parada da recursão: verifica se o nó atual existe (não é nulo).
  if (início) {
    printf("%d ", início->valor);
    // Avança para o próximo nó através do campo "próximoNó".
    imprimir(início->próximoNó);
  }
}