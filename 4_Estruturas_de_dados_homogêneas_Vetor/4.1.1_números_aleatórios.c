#include <stdio.h>
#include <stdlib.h> // Biblioteca necessária para utilizar as funções 'rand()' e 'srand()'
#include <time.h> // Biblioteca necessária par autilizar a função 'time()'

// A função 'rand()', caso não haja uma nova seed gerada com 'srand()', gerará sempre a mesma sequência numérica.

int main() {
  int vetor[50];

  // Necessário para gerar uma nova seed, fazendo com que 'rand()' sempre gere novos números.
  srand(time(NULL)); // Gera uma nova seed com o tempo atual em segundos.

  for (int i = 0; i <= 49; i++) {
    vetor[i] = rand() ; // vetor[i] recebe um número aleatório a cada iteração.
    printf("vetor[%d] = %d\n", i, vetor[i]);
  }
  printf("\n\n");

  // Limitando a geração aleatória
  for (int i = 0; i <= 49; i++) {
    vetor[i] = 100 + rand() % 900 ; // Entre 100 e 999.
    printf("vetor[%d] = %d\n", i, vetor[i]);
  }

  return 0;
}
