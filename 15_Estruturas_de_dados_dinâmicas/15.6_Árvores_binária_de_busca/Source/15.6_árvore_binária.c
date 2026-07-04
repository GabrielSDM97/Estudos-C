#include "../Header/15.6_árvore_binária.h"
#include <stdio.h>
#include <stdlib.h>

Nó *criarRaiz() { return NULL; }

Nó *inserir(Nó *raiz, int valor) {
  // Caso especial: se a raiz for NULL (árvore vazia ou folha atingida), cria-se um novo nó.
  if (!raiz) {
    Nó *novo = malloc(sizeof(Nó));
    novo->valor = valor;
    novo->esquerda = novo->direita = NULL;
    return novo;
  }
  /* Caso geral: compara o valor e "descemos" recursivamente pela subárvore correta
     até encontrar a posição adequada (um NULL) para inserir. */
  if (valor < raiz->valor)
    raiz->esquerda = inserir(raiz->esquerda, valor);
  else if (valor > raiz->valor)
    raiz->direita = inserir(raiz->direita, valor);
  return raiz;
}

Nó *buscar(Nó *raiz, int valor) {
  // Caso especial: encontra-se o valor ou chegamos em NULL (não existe).
  if (!raiz || raiz->valor == valor)
    return raiz;
  /* Caso geral: decide qual caminho seguir (esquerda ou direita) comparando o valor
     procurado com o nó atual, "descendo" pela árvore até encontrar o alvo.*/
  return valor < raiz->valor ? buscar(raiz->esquerda, valor)
                             : buscar(raiz->direita, valor);
}

/* Encontra o menor valor da subárvore direita (o nó mais à esquerda).
   Este nó remove nós com dois filhos, pois é o sucessor imediato
   do nó removido, mantendo a ordem da árvore binária. */
Nó *menorDireita(Nó *raiz) {
  while (raiz->esquerda)
    raiz = raiz->esquerda;
  return raiz;
}

/*
 Alternativa: buscar o maior valor da subárvore esquerda também funciona,
 pois, assim como buscar o menor valor da subárvore direita, é preservada
 a propriedade de ordem da árvore binária de busca.

 Nó *maiorEsquerda(Nó *raiz) {
  while (raiz->direita)
    raiz = raiz->direita;
  return raiz;
}
*/

/* Remove um valor da árvore, preservando a estrutura binária.
   Primeiro, navega pela árvore até encontrar o nó alvo. */
Nó *remover(Nó *raiz, int valor) {
  Nó *nóAuxiliar;
  // Caso especial 1: nó não encontrado (raiz é NULL).
  if (!raiz) {
    printf("\n\tValor não encontrado...\n");
    return NULL;
  }
  // Percorre a subárvore esquerda em busca do valor a remover.
  if (raiz->valor > valor)
    raiz->esquerda = remover(raiz->esquerda, valor);
  // Percorre a subárvore direita em busca do valor a remover.
  else if (raiz->valor < valor)
    raiz->direita = remover(raiz->direita, valor);
  else {
    /* Caso especial 2: nó com zero (nós folhas) ou um filho, simplesmente "pula" o nó removido,
       conectando seu pai diretamente ao seu único filho (ou NULL se for folha). */
    if (!raiz->esquerda || !raiz->direita) {
      nóAuxiliar = raiz->esquerda ? raiz->esquerda : raiz->direita;
      free(raiz);
      return nóAuxiliar;
    }
    /* Caso geral: nó com dois filhos - substitui o valor do nó removido pelo menor
       valor da subárvore direita (seu sucessor), e remove esse sucessor de sua
       posição original. É como trocar o "cérebro" do nó e depois remover o corpo antigo. */
    nóAuxiliar = menorDireita(raiz->direita);
    /*          -- Alternativa --
    nóAuxiliar = maiorEsquerda (raiz->esquerda); */
    raiz->valor = nóAuxiliar->valor;
    raiz->direita = remover(raiz->direita, nóAuxiliar->valor);
  }
  return raiz;
}

/* Percorre a árvore em Pré-ordem: Raiz → Subárvore Esquerda → Subárvore Direita.
   Útil para copiar a estrutura da árvore ou imprimir a hierarquia. */
void imprimirPreOrdem(Nó *raiz) {
  if (raiz) {
    printf("%d ", raiz->valor);
    imprimirPreOrdem(raiz->esquerda);
    imprimirPreOrdem(raiz->direita);
  }
}

/* Percorre a árvore em Em-ordem: Subárvore Esquerda → Raiz → Subárvore Direita.
   Em uma árvore binária de busca, isso imprime os valores em ordem crescente! */
void imprimirEmOrdem(Nó *raiz) {
  if (raiz) {
    imprimirEmOrdem(raiz->esquerda);
    printf("%d ", raiz->valor);
    imprimirEmOrdem(raiz->direita);
  }
}

/* Percorre a árvore em Pós-ordem: Subárvore Esquerda → Subárvore Direita → Raiz.
   Útil para deletar a árvore (liberar memória) ou calcular expressões matemáticas,
   pois processa os "filhos" antes do "pai". */
void imprimirPosOrdem(Nó *raiz) {
  if (raiz) {
    imprimirPosOrdem(raiz->esquerda);
    imprimirPosOrdem(raiz->direita);
    printf("%d ", raiz->valor);
  }
}

// Exibe a árvore completa usando os três métodos de travessia.
void imprimir(Nó *raiz) {
  printf("\n\tPré ordem: ");
  imprimirPreOrdem(raiz);
  printf("\n\tEm ordem: ");
  imprimirEmOrdem(raiz);
  printf("\n\tPós ordem: ");
  imprimirPosOrdem(raiz);
}