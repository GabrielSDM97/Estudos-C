#include <stdio.h>

int main() {
  // Vetores e matrizes estáticas alocam memória automaticamente na STACK.
  // O nome do array age como um ponteiro para o primeiro elemento.
  char frase[50] = "Ola Mundo!";
  int nums[1][1] = {{2}};

  /* Em um vetor, o endereço do nome do array, e o endereço do primeiro 
     elemento são iguais, pois o vetor é o próprio bloco de memória contíguo na STACK. */
  printf("\n============ Vetor ===========");
  printf("\n&frase: \t%p", &frase);         // Endereço do bloco inteiro
  printf("\nfrase: \t\t%p", frase);         // Nome decai para endereço do 1º índice
  printf("\n&frase[0]: \t%p\n", &frase[0]); // Endereço explícito do 1º índice

  /* Em uma matriz, o endereço do nome do array, o endereço da primeira linha
     e o endereço do primeiro elemento são iguais, pois a matriz é o próprio
     bloco de memória contíguo na STACK. */
  printf("\n=========== Matriz ===========");
  printf("\n&nums: \t\t%p", &nums);               // Endereço do bloco inteiro
  printf("\nnums: \t\t%p", nums);                 // Nome decai para endereço da linha 0
  printf("\n&nums[0]: \t%p", &nums[0]);           // Endereço da linha 0
  printf("\nnums[0]: \t%p", nums[0]);             // Linha 0 decai para endereço do 1º índice
  printf("\n&nums[0][0]: \t%p\n\n", &nums[0][0]); // Endereço explícito do 1º índice

  return 0;
}