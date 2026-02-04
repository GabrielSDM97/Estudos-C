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

  int num = 1234567890;
  double res1;
  float res2;
  res1 = num * 0.01;
  res2 = num * 0.01;
  printf("\n\n%.2f;\n%.2f", res1, res2);

}