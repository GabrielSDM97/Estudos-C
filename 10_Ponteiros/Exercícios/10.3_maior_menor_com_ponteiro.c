#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Encontrar com ponteiros o maior e menor elemento de um vetor.
*/

void gerarNúmeros(int *vetor, int tamanho){
  for (int i = 0; i < tamanho; i++) {
    *(vetor + i) = 1 + rand() % 999;
  }
}

void analiseMaiorMenor(int *vetor, int tamanho, int *maior, int *menor) {
  *maior = *menor = *vetor;
  for (int i = 0; i < tamanho; i++) {    
    if (*(vetor + i) > *maior)
      *maior = *(vetor + i);
    else if (*(vetor + i) < *menor)
      *menor = *(vetor + i);
  }
}

int main() {
  srand(time(NULL));
  int vetor[10], maior, menor;

  gerarNúmeros(vetor, 10);
  analiseMaiorMenor(vetor, 10, &maior, &menor);

  printf("\nMaior valor: %d; Menor valor: %d\n\n", maior, menor);

  return 0;
}