#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

typedef struct nó {
  int valor;
  struct nó *próximoNó;
} Nó;

typedef struct {
  Nó *nóInicial, *nóFinal;
} Fila;

Fila *criarFila();
void enfileirar(Fila *fila, int valor);
Nó *desenfileirar(Fila *fila);
void imprimir(Nó *início);

#endif