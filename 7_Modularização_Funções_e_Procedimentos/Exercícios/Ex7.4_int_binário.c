#include <stdio.h>

/*
    Faça um programa em C que lê um número inteiro e apresente seu equivalente em binário.
*/

void intBinário(int quociente) {
  char binárioInverso[100], binário[100];
  int posInversa = 0, negativo = 0;

  if (quociente < 0) {
    quociente = quociente * -1;
    negativo = 1;
  }

  while (quociente > 1) { // Gera o código binário inversamente.
    binárioInverso[posInversa] = quociente % 2;
    quociente = quociente / 2;
    posInversa++;
  }

  if (negativo == 1) // Número binário de todo início de sequência acima/abaixo de 0 -> (2/1)
    binárioInverso[posInversa] = -1;
  else if (negativo == 0)
    binárioInverso[posInversa] = 1; 

  for (int posição = 0; posInversa >= 0; posição++) { // Organiza na ordem correta.
    binário[posição] = binárioInverso[posInversa];
    printf("%d", binário[posição]);
    posInversa--;
  }
  printf("'.\n\n");
}

int main() {
  int número;

  printf("Digite um número inteiro: ");
  scanf("%d", &número);

  if (número == 0)
    printf("O binário de '%d' é '0'\n\n", número);
  else if (número > 0 || número < 0) {
    printf("O binário de '%d' é '", número);
    intBinário(número);
  }

  return 0;
}
