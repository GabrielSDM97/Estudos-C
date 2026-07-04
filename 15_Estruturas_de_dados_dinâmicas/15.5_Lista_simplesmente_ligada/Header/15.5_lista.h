#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct nó {
  int valor;
  struct nó *próximoNó;
} Nó;

typedef struct {
  Nó *nóInicial;
  int tamanhoLista;
} Lista;

Lista *criarLista();
void inserirInício(Lista *lista, int valor);
void inserirFim(Lista *lista, int valor);
void inserirOrdenado(Lista *lista, int valor);
Nó *pesquisar(Nó *início, int valor);
Nó *remover(Lista *lista, int valor);
void imprimir(Nó *início);

#endif