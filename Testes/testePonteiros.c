#include <stdio.h>

void imprimirP(int *testePtr, int opção) {
  if (opção == 1) {
    int n2 = 10;
    // Alterando o endereço atribuido ao parâmetro do tipo ponteiro.
    testePtr = &n2;
    printf("2. %d\n\n", *testePtr);
  } else if (opção == 2) {
    int n2 = 10;
    // Alterando o valor do endereço atribuido ao parâmetro do tipo ponteiro.
    *testePtr = n2;
    printf("4. %d\n\n", *testePtr);
  }
}

int main() {
  int n1 = 20, *ponteiro = &n1;
  printf("1. %d\n\n", *ponteiro);

  imprimirP(ponteiro, 1);
  printf("3. %d\n\n", *ponteiro);

  imprimirP(ponteiro, 2);
  printf("5. %d\n\n", *ponteiro);
}