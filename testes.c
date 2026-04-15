#include <stdio.h>
#include <stdbool.h>
// #include <stdlib.h>

int soma(int num1, int num2) {
  return printf("%d\n\n",num1 + num2);
}

int main() {
  /*int abc;
  printf("Teste: ");
  abc = getchar();
  printf("getchar= %c\n", abc);
  abc = getc(stdin);
  printf("getc= %c\n", abc);
  abc = fgetc(stdin);
  printf("fgetc= %c", abc);
  if (abc == 3)
    printf("AAAAAAAAAAAAAAAAAA");*/
  printf("x\n");

  int teste[4] = {12, 7, 4, 5 };

  printf("%d\n", teste[1]);

  soma(1,2);

  printf("%d\n\n", 1 % 10);

  return 0;
}