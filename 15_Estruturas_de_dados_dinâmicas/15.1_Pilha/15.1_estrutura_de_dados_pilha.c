/* Pilha = Estrutura de dados onde o último dado inserido (topo) é o primeiro a
   sair (Last In First Out = LIFO). */

/* Um pilha é composta por nós, onde cada nó tera um valor e o ponteiro para o
   nó ANTERIOR na pilha. */

/* IMPORTANTE: O algorítmo de pilha abaixo é uma das formas de fazer tal
   estrutura. Existem muitas outras maneiras de fazê-la. */

#include <stdio.h>
#include <stdlib.h>

/* Se fez necessário definir um nome para a struct, mesmo tendo apelido, pois o
   ponteiro "nóAnterior" chama essa mesma struct antes mesmo do apelido "Nó" ser
   reconhecido pelo compilador. */
typedef struct nó {
  // Valor do nó
  int valor;
  /* Ponteiro para o nó anterior, que também terá um valor e um ponteiro para o
     seu anterior, criando, assim, um encadeamento. */
  struct nó *nóAnterior;
} Nó;

// Uma pilha começa vazia (NULL)
Nó *criarPilha() { return NULL; }

// push (Empilhar)
void empilhar(Nó **topo, int valor) {
  // Alocação de memória onde o nó ficará.
  Nó *nóNovo = malloc(sizeof(Nó));
  if (nóNovo) {
    // Insere o valor no campo "valor" do novo nó.
    nóNovo->valor = valor;
    // Insere o endereço do nó anterior no campo "nóAnterior" do novo nó.
    nóNovo->nóAnterior = *topo;
    // Atualiza o topo da pilha com o endereço do nó atual.
    *topo = nóNovo;
  } else
    printf("\n\tErro na alocação de memória!");
}

// pop (Desempilhar)
Nó *desempilhar(Nó **topo) {
  // Verifica se existe um elemento na pilha.
  if (*topo) {
    // Atribui o endereço atual do topo ao ponteiro "removerNó".
    Nó *removerNó = *topo;
    /* Atualiza o novo topo com o endereço do nó anterior, efetivamente
       removendo o nó atual da pilha. */
    *topo = removerNó->nóAnterior;
    // Retorna o endereço do nó removido para ser liberado na memória (free)
    return removerNó;
  }
  return NULL;
}

void imprimir(Nó *topo) {
  // Condição de parada da recursão: verifica se o nó atual existe (não é nulo).
  if (topo) {
    // Começa imprimindo o valor do nó do topo da pilha.
    printf("%d ", topo->valor);
    // Depois retrocede para nós anteriores.
    imprimir(topo->nóAnterior);
  }
}

int main() {
  Nó *pilha = criarPilha(), *valorDesempilhado;
  int opção, valor;

  do {
    printf("\n\t0 - Sair\n\t1 - Empilhar\n\t2 - Desempilhar\n\t3 - Imprimir\n\n");
    printf("Sua escolha: ");
    scanf("%d", &opção);
    switch (opção) {
    case 0:
      printf("Até logo!\n\n");
      break;
    case 1:
      printf("Digite um valor a ser empilhado: ");
      scanf("%d", &valor);
      empilhar(&pilha, valor);
      break;
    case 2:
      if (pilha) {
        printf("Valor desempilhado: %d", (valorDesempilhado = desempilhar(&pilha))->valor);
        free(valorDesempilhado);
        break;
      }
      printf("A pilha está vazia!\n");
      break;
    case 3:
      if (pilha) {
        printf("Topo: ");
        imprimir(pilha);
        break;
      }
      printf("A pilha está vazia!\n");
      break;
    default:
      printf("Opção errada, tente novamente!\n");
    }
  } while (opção != 0);
  return 0;
}