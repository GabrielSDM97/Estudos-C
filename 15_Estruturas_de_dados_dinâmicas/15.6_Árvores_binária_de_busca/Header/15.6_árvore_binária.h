#ifndef ARVOREB_H_INCLUDED
#define ARVOREB_H_INCLUDED

typedef struct nó {
  int valor;
  struct nó *esquerda, *direita;
} Nó;

Nó *criarRaiz();
Nó *inserir(Nó *raiz, int valor);
Nó *buscar(Nó *raiz, int valor);
Nó *menorDireita(Nó *raiz);
Nó *remover(Nó *raiz, int valor);
void imprimirPreOrdem(Nó *raiz);
void imprimirEmOrdem(Nó *raiz);
void imprimirPosOrdem(Nó *raiz);
void imprimir(Nó *raiz);

#endif