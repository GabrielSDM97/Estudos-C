#include <stdio.h>
// #include <stdlib.h>

int main() {
  int abc;
  printf("Teste: ");
  abc = getchar();
  printf("getchar= %c\n", abc);
  abc = getc(stdin);
  printf("getc= %c\n", abc);
  abc = fgetc(stdin);
  printf("fgetc= %c", abc);
  if (abc == 3)
    printf("AAAAAAAAAAAAAAAAAA");
}