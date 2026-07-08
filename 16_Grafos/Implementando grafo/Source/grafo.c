#include <stdio.h>
#include "../Header/grafo.h"

// Implementando grafo de matriz de adjacência

// Procedimento para inicializar o grafo
void inicializarGrafo(Grafo *grafo) {
  grafo->num_vertice = 0;
  for (int i = 0; i < QTD_VERTICES; i++) {
    for (int j = 0; j < QTD_VERTICES; j++) {
      grafo->matriz[i][j] = 0; // Inicializa a matriz 0 (sem arestas)
    }
  }
}

// Procedimento para adicionar vértices
void adicionarVertice(Grafo *grafo) {
  if (grafo->num_vertice < QTD_VERTICES) {
    printf("Vértice %d adicionado com sucesso!\n", grafo->num_vertice);
    grafo->num_vertice++;
  } else {
    printf("Não é possível adicionar mais vértices. O limite foi atingido.\n\n");
  }
}

int verticeExiste(int vértice, int numVértice) {
  if (vértice >= 0 && vértice < numVértice)
    return 1;
  else
    return 0;
}

// Procedimento para adicionar aresta entre dois vértices
void adicionarAresta(Grafo *grafo, int vértice1, int vértice2) {
  if (verticeExiste(vértice1, grafo->num_vertice) &&
      verticeExiste(vértice2, grafo->num_vertice)) {
    // Adiciona aresta de vértice1 para vértice2
    grafo->matriz[vértice1][vértice2] = 1;
    // Como o grafo é não direcionado, adiciona também a aresta de vértice2 para vértice1
    grafo->matriz[vértice2][vértice1] = 1;
    printf("Aresta entre %d e %d adicionada com sucesso.\n", vértice1, vértice2);
  } else {
    printf("Vértices inválidos! Aresta não adicionada.\n\n");
  }
    
}

// Procedimento para remover aresta entre dois vértices
void removerAresta(Grafo *grafo, int vértice1, int vértice2) {
  if (verticeExiste(vértice1, grafo->num_vertice) &&
      verticeExiste(vértice2, grafo->num_vertice)) {
    // Remove a resta de vértice1 para vértice2
    grafo->matriz[vértice1][vértice2] = 0;
    // Remove a resta de vértice2 para vértice1
    grafo->matriz[vértice2][vértice1] = 0;
    printf("Aresta entre %d e %d removida com sucesso.\n", vértice1, vértice2);
  } else {
    printf("Vértices inválidos! Aresta não removida.\n\n");
  }
}

// Procedimento para exibir a matriz da adjacência
void exibirMatriz(Grafo *grafo) {
  printf("\nMatriz de adjacência do grafo:\nVértices   ");
  for (int i = 0; i < grafo->num_vertice; i++)
    printf("%d ", i);
  printf("\n");
  for (int i = 0; i < grafo->num_vertice; i++) {
    printf("Vértice %d: ", i);
    for (int j = 0; j < grafo->num_vertice; j++) {
      printf("%d ", grafo->matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

// Procedimento Busca em Largura (BFS - Breadth-First Search)
void bfs(Grafo *grafo, int verticeInicial) {
  int visitado[QTD_VERTICES] = {0};
  int fila[QTD_VERTICES];
  int indiceRemover = 0, indiceEnfileirar = 0;

  visitado[verticeInicial] = 1; // Marca o vértice inicial como visitado e coloca na fila
  fila[indiceEnfileirar++] = verticeInicial; // coloca o vértice inicial na fila

  printf("Busca em Largura (BFS) a partir da vértice %d: ", verticeInicial);

  while (indiceRemover < indiceEnfileirar) {
    int VerticeAtual = fila[indiceRemover++]; // Retira um vértice da fila
    printf("%d ", VerticeAtual);

    // Enfileira os vizinhos não visitado
    for (int i = 0; i < grafo->num_vertice; i++) {
      if (grafo->matriz[VerticeAtual][i] == 1 && !visitado[i]) {
        visitado[i] = 1;
        fila[indiceEnfileirar++] = i;
      }
    }
  }
  printf("\n");
}

// Procedimento Busca em Profundidade (DFS - Depth-First Search)
void dfs(Grafo *grafo, int vertice, int visitado[]) {
  visitado[vertice] = 1;
  printf("%d ", vertice);

  // Recursivamente visita os vizinhos não visitados
  for (int i = 0; i < grafo->num_vertice; i++) {
    if (grafo->matriz[vertice][i] == 1 && !visitado[i]) {
      dfs(grafo, i, visitado);
    }
  }
}