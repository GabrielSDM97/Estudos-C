#include <stdio.h>
#include <stdbool.h>
#include <string.h>
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
  bool a = true;
  bool b = false;
  bool c = a || b;
  printf("%s\n", b ? "true" : "false");

  int teste1[4] = {12, 7, 4, 5 };

  printf("%d\n", teste1[1]);

  soma(1,2);

  printf("%d\n\n", 1 % 10);

  int númeroTeste = 1;
  char palavraTeste[100];
  while (númeroTeste != 0) {
    printf("Palavra: ");
    fgets(palavraTeste, 100, stdin);
    printf("Número: ");
    scanf("%d", &númeroTeste);
    getchar();
  }

  return 0;
}