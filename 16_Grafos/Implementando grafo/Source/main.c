#include <stdio.h>
#include "../Header/grafo.h"

/* Use o comando "gcc main.c grafo.c -o programa && ./programa" para
   compilar os 2 arquivos de códigos funcionais "main.c" e "grafo.c" para
   que o linker encontre as definições das funções declaradas no header
   "grafo.h". */

int main() {
  Grafo grafo;
  inicializarGrafo(&grafo);
  int visitado[QTD_VERTICES] = {0};

  // Adicionando vértices
  adicionarVertice(&grafo); // Vértice 0
  adicionarVertice(&grafo); // Vértice 1
  adicionarVertice(&grafo); // Vértice 2
  adicionarVertice(&grafo); // Vértice 3
  // Resultará em erro, pois ultrapassa o limite de vértices.
  adicionarVertice(&grafo); 

  // Adicionando arestas
  adicionarAresta(&grafo, 0, 1);
  adicionarAresta(&grafo, 1, 2);
  adicionarAresta(&grafo, 2, 3);
  adicionarAresta(&grafo, 0, 3);
  // Resultará em erro, pois o vértice 5 não existe.
  adicionarAresta(&grafo, 0, 5);

  bfs(&grafo, 0);

  printf("\nBusca em Profundidade (DFS): ");
  dfs(&grafo, 0, visitado);
  printf("\n");

  // Exibindo a matriz de adjacência
  exibirMatriz(&grafo);
  // Removendo uma aresta
  removerAresta(&grafo, 0, 3);
  // Exibindo a matriz de adjacência após a remoção
  exibirMatriz(&grafo);

  return 0;
}