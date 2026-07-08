// Aqui ficam as DEFINIÇÕES de como as funções e procedimentos funcionam.

/* IMPORTANTE: O algorítmo de pilha abaixo é uma das formas de fazer tal estrutura.
   Existem muitas outras maneiras de fazê-la. */

// Incluindo arquivos de cabeçalho.
#include "../Header/pilha.h"
#include <stdio.h>
#include <stdlib.h>

/* O valor NULL poderia ser inserido diretamente no ponteiro "pilha" em "main()", 
   porém isso violaria os princípios de TAD, pois dados não devem ser manipulados diretamente, 
   e sim através de funções e procedimentos. */
Nó *criarPilha() { return NULL; }

// push (Empilhar)
void empilhar(Nó **topo, int valor) {
  Nó *nóNovo = malloc(sizeof(Nó));
  if (nóNovo) {
    nóNovo->valor = valor;
    nóNovo->nóAnterior = *topo;
    *topo = nóNovo;
  } else
    printf("\n\tErro na alocação de memória!");
}

// pop (Desempilhar)
Nó *desempilhar(Nó **topo) {
  if (*topo) {
    Nó *remover = *topo;
    *topo = remover->nóAnterior;
    return remover;
  }
  return NULL;
}

void imprimir(Nó *topo) {
  if (topo) {
    printf("%d ", topo->valor);
    imprimir(topo->nóAnterior);
  }
}