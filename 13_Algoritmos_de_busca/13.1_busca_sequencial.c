#include <stdio.h>

/* Esse algorítmo de busca é o mais simples, funciona sozinho, e não precisa de
   algoritmo de ordenação, porém é o menos eficiente pois percorre todo o vetor
   em busca de um valor. */

int buscaSequencial(int vetor[], int tamanho, int valor) {
  int i;

  for (i = 0; i < tamanho; i++)
    // Retorna o índice que contenha o valor buscado.
    if (vetor[i] == valor)
      return i;
  // Do contrário, retorna -1.
  return -1;
}

int main() {

  int tam = 10;
  int vet[10] = {15, 48, 75, 92, 158, 469, 75, 1, 52, 44};

  // É enviado o vetor, o tamanho, e o valor a ser buscado para a função de
  // busca sequencial.
  int indiceRetorno = buscaSequencial(vet, tam, 1);

  // Caso retorne um valor diferente de -1, mostra-se o índice que contem o
  // valor buscado.
  if (indiceRetorno != -1)
    printf("\n\tO valor %d foi encontrado no indice %d!\n\n",
           vet[indiceRetorno], indiceRetorno);
  // Do contrário, mostra-se que o valor não foi encontrado.
  else
    printf("\n\tValor não encontrado!\n\n");
  return 0;
}
