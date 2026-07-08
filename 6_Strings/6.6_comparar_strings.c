#include <stdio.h>
#include <string.h>

// Função 'strcmp() - Compara strings.

int main() {
  int resultado;
  char vet1[20] = {"Bala"};
  char vet2[20] = {"Bola"};

  resultado = strcmp(vet1, vet2);
  // -- Significado do resultado da print --
  // 0 = Ambas as strings são iguais.
  // Número negativo = A string no primeiro parâmetro de 'strcmp' vem primeiro alfabeticamente.
  // Número positivo = A string no segundo parâmetro de 'strcmp' vem primeiro alfabeticamente.
  printf("Resultado: %d\n\n", resultado);

  return 0;
}
