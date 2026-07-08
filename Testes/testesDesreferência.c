#include <stdio.h>

typedef struct {
  int num;
} numTeste;

int main() {
  numTeste A, *B, **C;

  A.num = 10;
  B = &A;
  C = &B;

  // Testes de desreferência (*)
  printf("%d %d %d\n", A.num, B->num, (*C)->num);
  printf("%d %d %d\n\n", A.num, (*B).num, (**C).num);

  /* IMPORTANTE! Existe operadores de ponteiros também respeitam ordem de
     precedência, no caso acima temos a seguinte ordem:
     1º Parênteses ()
     2º Acesso a campo ->
     3º Desreferência *

     Ou seja, qualquer coisa entre parênteses é executada primeiro, depois vem o resto. */

  return 0;
}