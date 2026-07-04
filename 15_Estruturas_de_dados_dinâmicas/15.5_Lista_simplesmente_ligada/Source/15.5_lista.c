#include "../Header/15.5_lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista *criarLista() {
  Lista *lista = malloc(sizeof(Lista));
  if (lista) {
    lista->nóInicial = NULL;
    lista->tamanhoLista = 0;
  }
  return lista;
}

void inserirInício(Lista *lista, int valor) {
  Nó *nóNovo = malloc(sizeof(Nó));
  if (nóNovo) {
    nóNovo->valor = valor;
    // O campo próximo do novo nó recebe o endereço do atual nó inicial.
    nóNovo->próximoNó = lista->nóInicial;
    // O novo nó se torna o nó inicial.
    lista->nóInicial = nóNovo;
    lista->tamanhoLista++;
  } else
    printf("Erro na alocação de memória!\n");
}

void inserirFim(Lista *lista, int valor) {
  Nó *nóNovo = malloc(sizeof(Nó));
  if (nóNovo) {
    nóNovo->valor = valor;
    nóNovo->próximoNó = NULL;
    // Caso especial: a lista está vazia.
    if (lista->nóInicial == NULL)
      lista->nóInicial = nóNovo;
    // Caso geral: a lista já possui elementos, devemos encontrar o final.
    else {
      // O "nóAnterior" inicia no primeiro nó para percorrer a lista.
      Nó *nóAnterior = lista->nóInicial;
      // Percorre até que o "nóAnterior" seja o último (cujo próximo é NULL).
      while (nóAnterior->próximoNó)
        nóAnterior = nóAnterior->próximoNó;
      // O "nóAnterior" agora aponta para o novo nó, que se torna o novo fim da lista.
      nóAnterior->próximoNó = nóNovo;
    }
    lista->tamanhoLista++;
  } else
    printf("Erro na alocação de memória!\n");
}

void inserirOrdenado(Lista *lista, int valor) {
  Nó *nóNovo = malloc(sizeof(Nó));
  if (nóNovo) {
    nóNovo->valor = valor;
    // Caso especial: a lista está vazia ou o novo valor é menor que o primeiro da lista.
    if (lista->nóInicial == NULL || lista->nóInicial->valor > nóNovo->valor) {
      nóNovo->próximoNó = lista->nóInicial;
      lista->nóInicial = nóNovo;
    } 
    // Caso geral: o novo valor deve ser inserido no meio ou no fim da lista.
    else {
      Nó *nóAnterior = lista->nóInicial;
      /* Percorremos a lista enquanto o próximo nó existir e seu valor for menor 
         que o valor a ser inserido (buscando a posição correta). */
      while (nóAnterior->próximoNó && nóAnterior->próximoNó->valor < nóNovo->valor)
        nóAnterior = nóAnterior->próximoNó;
      /* Conectamos o novo nó ao próximo nó de valor maior,
         ou ao NULL caso não exista nó de valor maior. */
      nóNovo->próximoNó = nóAnterior->próximoNó;
      // O "nóAnterior" agora aponta para o novo nó.
      nóAnterior->próximoNó = nóNovo;
    }
    lista->tamanhoLista++;
  }
}

Nó *pesquisar(Nó *início, int valor) {
  // Percorre a lista enquanto não chegar ao fim e não encontrar o valor procurado.
  while (início && início->valor != valor)
    início = início->próximoNó;
  // Retorna o endereço do nó encontrado ou NULL caso o valor não exista na lista.
  return início;
}

Nó *remover(Lista *lista, int valor) {
  Nó *removerNó = NULL;
  // Verifica se a lista não está vazia antes de tentar remover.
  if (lista->nóInicial) {
    // Caso especial: o nó a ser removido é exatamente o primeiro da lista.
    if (lista->nóInicial->valor == valor) {
      removerNó = lista->nóInicial;
      // O início da lista passa a apontar para o segundo nó, "desligando" o primeiro.
      lista->nóInicial = removerNó->próximoNó;
      lista->tamanhoLista--;
    } 
    // Caso geral: o nó a ser removido está no meio ou no fim da lista.
    else {
      Nó *nóAnterior = lista->nóInicial;
      // Percorre a lista em busca do nó imediatamente anterior ao que será removido.
      while (nóAnterior->próximoNó && nóAnterior->próximoNó->valor != valor)
        nóAnterior = nóAnterior->próximoNó;
      // Se o valor foi encontrado (o próximo nó não é NULL)...
      if (nóAnterior->próximoNó) {
        removerNó = nóAnterior->próximoNó;
        // O "nóAnterior" passa a apontar para o nó seguinte ao removido, "pulando" o alvo.
        nóAnterior->próximoNó = removerNó->próximoNó;
        lista->tamanhoLista--;
      }
    }
  }
  // Retorna o endereço do nó removido para que a memória possa ser liberada (free) posteriormente.
  return removerNó;
}

void imprimir(Nó *início) {
  while (início) {
    printf("%d ", início->valor);
    início = início->próximoNó;
  }
  printf("\n");
}