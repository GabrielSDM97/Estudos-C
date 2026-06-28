#include <stdio.h>

// Declarando um procedimento com parâmetro de ponteiro.
void procedimento(int *num) {
  // Utilizando desrefência para acessar e alterar o conteúdo do endereço apontado pelo parâmetro.
  *num = 100;
}

// Pelo fato de o vetor ser um ponteiro, podemos utilizá-lo como parâmetro com "*" também.
void procedimentoVetor(int *vetor /* ou vetor[] */) {
  for (int i = 0; i < 2; i++)
    printf("vetor[%d]: %d\n", i, vetor[i]);
}

int main() {
  int num = 10;
  int vetor[2] = {2, 4};

  printf("Antes: %d\n\n", num);
  // Enviando o endereço da variável pelo parâmetro (Semelhante a passagem por referencia em POO.)
  procedimento(&num);
  printf("Depois: %d\n\n", num);

  procedimentoVetor(vetor);
  printf("\n");

  return 0;
}
