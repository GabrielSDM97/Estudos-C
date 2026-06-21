#include <stdio.h>

/*
    Recrie a função "strcpy" utilizando ponteiros,
    mas com uma diferença, o destino deverá ser struct, não char.
*/

typedef struct {
  char Frase[100];
} Copia;

void Strcpy(Copia *dest, const char *src) {
  for (int i = 0; *(src + i) != '\0'; i++) {
    dest->Frase[i] = *(src + i);
  }
}

int main() {
  char fraseOriginal[100];
  Copia copiaFrase;

  printf("Digite uma frase: ");
  scanf("%99[^\n]", fraseOriginal);
  getchar();

  Strcpy(&copiaFrase, fraseOriginal);

  printf("\nFrase original: %s\n\t Cópia: %s\n\n", fraseOriginal, copiaFrase.Frase);

  return 0;
}