// Se PILHA_H_INCLUDED NÃO estiver definido
#ifndef PILHA_H_INCLUDED
// Define PILHA_H_INCLUDED (evita inclusão múltipla)
#define PILHA_H_INCLUDED

// == Estrutura ==
// Definição da struct (modelo/registro que agrupa dados relacionados)
typedef struct nó {
  int valor;
  struct nó *nóAnterior;
} Nó;

// == Operações/Funções ==
// Aqui ficam as DECLARAÇÕES de que as funções e procedimentos existem
Nó *criarPilha();
void empilhar(Nó **topo, int valor);
Nó *desempilhar(Nó **topo);
void imprimir(Nó *topo);

// Fim do bloco condicional - fecha o #ifndef
#endif // PILHA_H_INCLUDED