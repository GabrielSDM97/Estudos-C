#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED
#define QTD_VERTICES 4

// Estrutura do grafo
typedef struct {
  int matriz[QTD_VERTICES][QTD_VERTICES]; // Matriz de adjacência
  int num_vertice;                        // Número de vértices no grafo
} Grafo;

void inicializarGrafo(Grafo *grafo);
void adicionarVertice(Grafo *grafo);
int verticeExiste(int vértice, int numVértice);
void adicionarAresta(Grafo *grafo, int vértice1, int vértice2);
void removerAresta(Grafo *grafo, int vértice1, int vértice2);
void exibirMatriz(Grafo *grafo);
void bfs(Grafo *grafo, int verticeInicial);
void dfs(Grafo *grafo, int vertice, int visitado[]);

#endif