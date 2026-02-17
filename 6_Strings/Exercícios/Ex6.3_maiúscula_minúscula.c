#include <ctype.h>
#include <stdio.h>
#include <string.h>

/*
   Faça um programa que converta uma string para maiúsculo ou minúsculo SEM usar as funções strupr e strlwr.
*/

int main() {
  char frase[100], fraseMaiúscula[100], fraseMinúscula[100], letra;
  int opção, tamanhoFrase;

  printf("Digite uma frase: ");
  scanf("%99[^\n]", frase);
  getchar();

  tamanhoFrase = strlen(frase);

  do {
    printf("\n[1]Maiúscula [2]Minúscula: ");
    scanf("%d", &opção);
    switch (opção) {
    case 1:
      for (int índice = 0; índice < tamanhoFrase; índice++)
        fraseMaiúscula[índice] = toupper(frase[índice]);
      printf("Frase original: %s\nMaíusculas: %s\n", frase, fraseMaiúscula);
      break;
    case 2:
      for (int índice = 0; índice < tamanhoFrase; índice++)
        fraseMinúscula[índice] = tolower(frase[índice]);
      printf("Frase original: %s\nMinúsculas: %s\n", frase, fraseMinúscula);
      break;
    default:
      printf("Fim da simulação!\n");
    }
  } while (opção == 1 || opção == 2);
  printf("\n");

  return 0;
}
