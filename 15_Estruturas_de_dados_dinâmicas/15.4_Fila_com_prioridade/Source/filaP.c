#include "../Header/filaP.h"
#include <stdio.h>
#include <stdlib.h>

Fila *criarFila() {
  Fila *fila = malloc(sizeof(Fila));
  fila->nóInicial = NULL;
  fila->nóFinal = NULL;
  return fila;
}

void enfileirarComPrioridade(Fila *fila, Nó *novo) {
  /* Se o valor do primeiro nó da fila for menor que 60, o novo nó assume o seu
     lugar, efetivamente iniciando a fila prioritária. */
  if (fila->nóInicial->valor < 60) {
    novo->próximoNó = fila->nóInicial;
    fila->nóInicial = novo;
  }
  // Se já existir um nó inicial com valor maior ou igual a 60.
  else {
    Nó *nóAuxiliar = fila->nóInicial;
    // Verifica se existe um próximo nó e se ele é da fila prioritária.
    while (nóAuxiliar->próximoNó && nóAuxiliar->próximoNó->valor >= 60)
      /* Movimenta para o endereço do próximo nó até encontrar um que não
         seja da fila prioritária. */
      nóAuxiliar = nóAuxiliar->próximoNó;
    /* Atualiza o endereço atribuido a "próximoNó" do nó atual para o primeiro nó
       fora da fila prioritária. */
    novo->próximoNó = nóAuxiliar->próximoNó;
    /* Atualiza o campo "próximoNó" do nó onde o "nóAuxiliar" parou, conectando-o ao
       novo nó. */
    nóAuxiliar->próximoNó = novo;
  }
}

void enfileirarSemPrioridade(Fila *fila, Nó *novo) {
  // Verifica se há um "nóFinal" válido.
  if (fila->nóFinal) {
    fila->nóFinal->próximoNó = novo;
    fila->nóFinal = novo;
  }
  // Caso não tenha, atribui o endereço do primeiro nó a ambos "nóInicial" e "nóFinal".
  else {
    fila->nóInicial = novo;
    fila->nóFinal = novo;
  }
}

void enfileirar(Fila *fila, int valor) {
  Nó *nóNovo = malloc(sizeof(Nó));
  if (nóNovo) {
    nóNovo->valor = valor;
    nóNovo->próximoNó = NULL;
    /* A lógica prioritária é aplicada aqui: quando o valor inserido for
       menor que 60 ou o nó inicial for NULL, ocorre o enfileiramento padrão. */
    if (valor < 60 || fila->nóInicial == NULL)
      enfileirarSemPrioridade(fila, nóNovo);
    /* Agora, quando o valor for maior ou igual a 60, teremos o enfileiramento
       com prioridade. */
    else
      enfileirarComPrioridade(fila, nóNovo);
  } else
    printf("Erro na alocação de memória!\n\n");
}

Nó *desenfileirar(Fila *fila) {
  Nó *removerNó = fila->nóInicial;
  if (removerNó)
    fila->nóInicial = removerNó->próximoNó;
  return removerNó;
}

void imprimir(Nó *início) {
  if (início) {
    printf("%d ", início->valor);
    imprimir(início->próximoNó);
  }
}