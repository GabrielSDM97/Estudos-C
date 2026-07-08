/*
   A árvore binária de busca é altamente eficiente: a cada comparação,
   eliminamos metade dos elementos restantes. Visualmente, assemelha-se a uma
   árvore invertida, onde partimos da raiz (topo) e seguimos por dois caminhos
   (subárvores esquerda e direita). Cada nó pode gerar até dois novos caminhos,
   formando ramificações que se encerram ao encontrarem NULL.

   Regra de organização: valores menores vão à esquerda, valores maiores à
   direita.

   Exemplo visual:

           50
          /  \
        35    75
       /  \
     10    40
          /
        30

   Perceba que: 10 e 30 são menores que seus pais (estão à esquerda),
                40 e 75 são maiores que seus pais (estão à direita).

   Nós Folha:
   São os nós que não têm filhos (apontam para NULL em ambos os lados).
   No exemplo acima, os nós 10, 30 e 75 são folhas.
   São os "frutos" da árvore e os mais fáceis de remover.

   IMPORTANTE: A teoria sobre árvore binária é muito extensa, o objetivo aqui é
   demonstrar um algorítmo eficiente e fácil de compreender o funcionamento
   dessa estrutura. Lembrando que o algorítimo abaixo é uma das formas de fazer
   tal estrutura. Existem muitas outras maneiras de fazê-la.
*/

/* Use o comando "gcc main.c árvore_binária.c -o programa && ./programa" para
   compilar os 2 arquivos de códigos funcionais "main.c" e "árvore_binária.c" para
   que o linker encontre as definições das funções declaradas no header
   "árvore_binária.h". */

#include "../Header/árvore_binária.h"
#include <stdio.h>

int main() {
  Nó *raiz = criarRaiz();
  int opção, valor;
  do {
    printf("\n\t0 - Sair\n\t1 - Inserir\n\t2 - Pesquisar\n\t3 - Remover\n\t4 - "
           "Imprimir\n");
    printf("\tEscolha uma opção: ");
    scanf("%d", &opção);
    switch (opção) {
    case 0:
      printf("\n\tSaindo...\n");
      break;
    case 1:
      printf("\n\tDigite um valor a ser inserido: ");
      scanf("%d", &valor);
      raiz = inserir(raiz, valor);
      break;
    case 2:
      printf("\n\tDigite um valor a ser pesquisado: ");
      scanf("%d", &valor);
      Nó *busca = buscar(raiz, valor);
      if (busca) {
        printf("\n\tValor %d encontrado", busca->valor);
        break;
      }
      printf("Valor %d não encontrado!", valor);
      break;
    case 3:
      printf("\n\tDigite um valor a ser removido: ");
      scanf("%d", &valor);
      raiz = remover(raiz, valor);
      break;
    case 4:
      imprimir(raiz);
      break;
    default:
      printf("\n\tOpção inválida!");
    }
  } while (opção != 0);
  return 0;
}