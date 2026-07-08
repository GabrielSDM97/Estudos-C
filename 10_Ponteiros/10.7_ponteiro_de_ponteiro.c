#include <stdio.h>

int main() {
  int A = 10, *B, **C;

  B = &A;
  C = &B;

  printf("\tEndereço de A: %p; Conteúdo de A: %d;\n", &A, A);
  printf("\tEndereço de B: %p; Conteúdo de B: %p; Conteúdo apontado por B: %d;\n", &B, B, *B);
  printf("\tEndereço de C: %p; Conteúdo de C: %p; Conteúdo apontado por C: %p;\n\n", &C, C, *C);
  return 0;
}