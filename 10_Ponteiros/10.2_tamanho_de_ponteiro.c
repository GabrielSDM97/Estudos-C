#include <stdio.h>

int main() {
  char letra;
  int num1;
  float num2;
  double num3;

  char *pLetra = &letra;
  int *pNum1 = &num1;
  float *pNum2= &num2;
  double *pNum3= &num3;

  // Cada tipo de dado tem um tamanho em bytes específico.
  printf("\tchar: %zu;\n\tint: %zu;\n\tfloat: %zu;\n\tdouble: %zu.\n\n",
         sizeof letra , sizeof num1 , sizeof num2 , sizeof num3 );

  // Já ponteiros têm sempre 8 bytes (em SOs 64-bit) ou 4 bytes (em SOs 32-bit).
  printf("\t*char: %zu;\n\t*int: %zu;\n\t*float: %zu;\n\t*double: %zu.\n\n",
         sizeof pLetra , sizeof pNum1 , sizeof pNum2 , sizeof pNum3 );

  return 0;
}