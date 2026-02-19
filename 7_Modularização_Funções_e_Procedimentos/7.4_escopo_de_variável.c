#include <stdio.h>

// Em C, toda variável que estiver fora de um procedimento/função é global.
char letras[4] = {'A', 'B', 'C', 'D'}; // Variável global
// Se uma variável local de mesmo nome que uma global for criada, a local sobreporá à global dentro do escopo da função/procedimento.

void imprimirValor(int num) {
  // 'int num' é um parâmetro/variável de escopo local.
  printf("\t[%c] imprimirValor 1: %d\n\n", letras[1], num);

  num = 35;

  printf("\t[%c] imprimirValor 2: %d\n\n", letras[2], num);
}

int main() {
  // Variável de escopo local
  int número = 50;

  printf("\t[%c] main 1: %d\n\n", letras[0], número);
  
  // -- Passagem de parâmetro por valor --
  /* Este tipo de passagem envia uma CÓPIA do valor inserido no parâmetro. Acontece apenas com variáveis simples. */
  imprimirValor(número);

  /* Como podemos ver, mesmo após alterar o valor enviado lá na função 'imprimirValor()', o valor impresso aqui continua sendo 
     o mesmo que foi definido localmente, comprovando que o valor enviado é apenas uma copia, e não uma referência. */
  printf("\t[%c] main 2: %d\n\n", letras[3], número);

  return 0;
}
