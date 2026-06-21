#include <stdio.h>

int main() {
  // Tanto vetores quanto matrizes são ponteiros, contendo em sí o endereço do primeiro índice.
  char frase[50] = "Ola Mundo!";
  int nums[2][5] = {{2,4,8,16,32},{3,6,12,24,48}};
  char *pFrase;
  int *pNums;
  
  // Vetores, por serem unidimensionais, já posuem o endereço do primeiro índice.
  pFrase = frase; // Equivale a: pFrase = &frase[0];
  /* Já em matrizes, por serem bidimensionais, precisamos especificar a linha para
     saber o endereço do primeiro índice dela. */
  pNums = nums[0]; // Equivale a: pNums = &nums[0][0];

  // Diversas formas de imprimir o endereço do primeiro índice de um vetor ou de uma matriz.
  // Exemplos:
  printf("\n--- Vetor ---");
  printf("\nfrase: \t\t%p\n", frase);
  printf("&frase: \t%p\n", &frase);
  printf("&frase[0]: \t%p\n", &frase[0]);
  printf("Endereço: \t%p Conteúdo: %c\n", pFrase, *pFrase);
  printf("\n--- Matriz ---");
  printf("\nnumeros[0]: \t%p\n", nums[0]);
  printf("&numeros[0]: \t%p\n", &nums[0]);
  printf("&numeros[0][0]: %p\n", &nums[0][0]);
  printf("Endereço: \t%p Conteúdo: %d\n\n", pNums, *pNums);

  return 0;
}