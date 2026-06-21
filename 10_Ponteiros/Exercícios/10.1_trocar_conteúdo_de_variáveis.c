#include <stdio.h>

/*
    Trocar o conteúdo de duas variáveis entre si por meio de ponteiros.
*/

int main() {
  int num1 = 10, num2 = 20, cópia;
  int *num1P = &num1, *num2P = &num2;

  printf("\tAntes da troca:  num1: %d; num2: %d\n", num1, num2);

  cópia = *num1P;
  *num1P = *num2P;
  *num2P = cópia;

  printf("\tDepois da troca: num1: %d; num2: %d\n\n", num1, num2);
  
  return 0;
}

