#include <stdio.h>

/*
-- Recursão --

Recursão é uma forma especial de repetição onde, em cada iteração, resolvemos um pedaço do problema.

Recursão é apenas possível através de funções e procedimentos.

Uma função recursiva chama a si mesma até resolver um determinado problema, ou parte dele.

Requisitos: 1. Precisa resolver uma parte do problema; 2. Precisa ter um ponto de parada; 3. Precisa chamar a si mesma.

*/

// Exemplo inserindo valores em um vetor e depois os imprimindo, apenas utilizando recursão.

void imprimirVetor(int vetor[], int contador, int tamanhoVetorPreenchido) {
  if (contador < tamanhoVetorPreenchido) {
    printf("%d; ", vetor[contador]);
    imprimirVetor(vetor, contador + 1, tamanhoVetorPreenchido);
  }
}

int inserirValoresVetor(int vetor[], int contador, int tamanhoGeralVetor) {
  int tamanhoVetorPreenchido, verificaTipo;
  if (contador < tamanhoGeralVetor) {
    printf("Insira o valor da posição %d [\"S\" para sair]: ", contador);
    verificaTipo = scanf("%d", &vetor[contador]);
    if (verificaTipo)
      return inserirValoresVetor(vetor, contador + 1, tamanhoGeralVetor);
  }
  printf("\n");
  return tamanhoVetorPreenchido = contador;
}

int main() {
  int tamanhoVetorPreenchido, vetor[100];

  // Uma maneira de calcular o tamanho de uma array numérica.
  size_t tamanhoArray = sizeof(vetor); // Tamanho geral em bytes da array.
  size_t tamanhoElemento = sizeof(vetor[0]); // Tamanho em bytes de um elemento da array.
  size_t comprimentoVetor = tamanhoArray/tamanhoElemento; // Divisão entre tamanho total e unitário, achando a quantidade de elementos na array.
  printf("(Debug) Tamanho total do vetor: %zu\n\n", comprimentoVetor);
  
  tamanhoVetorPreenchido = inserirValoresVetor(vetor, 0, 50);
  imprimirVetor(vetor, 0, tamanhoVetorPreenchido);
  printf("\n\n");

  return 0;
}
