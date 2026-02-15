#include <stdio.h>

int main() {
  int índice = 0;
  char frase[40];

  /* Toda string termina com '\0', ou seja, se tivermos um vetor com 10 índices e 5 caracteres,
     no 6º índice teremos '\0' e apartir do 7º índice, índices vazios ou índices com lixo de memória. */

  printf("Digite uma frase: ");
  fgets(frase, 40, stdin);

  /* Para evitar a impressão do caractere do fim da string, utilizamos uma estrutura de repetição 
     para imprimir caractere por caractere da string parando a impressão no momento em que for detectado o caractere de escape '\0'. */

  while (frase[índice] != '\0') {
      printf("%d = %c\n", índice, frase[índice]);
      índice ++;
  }
  printf("\n");

  /* Podemos ver que, no penúltimo índice da string, pois o último sempre será '\0', é imprimido '\n' do buffer de teclado, para evitar isso, 
     temos duas opções: */

  // Opção 1 ('scanf' com '%[^\n])
  printf("(Opção 1) Digite outra frase: ");
  scanf("%39[^\n]", frase);

  getchar(); // Limpando o '\n' residual

  índice = 0;
  while (frase[índice] != '\0') {
    printf("%d = %c\n", índice, frase[índice]);
    índice++;
  }
  printf("\n");

  // Opção 2 ('fgets' com 'while (x != '\n)')
  printf("(Opção 2) Digite outra frase: ");
  fgets(frase, 39, stdin);

  índice = 0;
  while (frase[índice] != '\n') {
    índice++;
  }
  frase[índice] = '\0'; // Trocando a quebra de linha por '\0'.

  índice = 0;
  while (frase[índice] != '\0') {  // Loop padrão que finaliza ao detectar o último índice da string, ou seja, '\0'.
    printf("%d = %c\n", índice, frase[índice]);
    índice++;
  }
  printf("\n");

  return 0;
}
