#include <stdio.h>

int main() {
  int num = 3;

  // O "%p" AVISA o "printf" que o dado a ser impresso é um endereço de memória.
  // O "&" EXTRAI o endereço da variável e o entrega para o "%p" imprimir.
  printf("\tEndereço: %p\n", &num);

  // O "%d" AVISA o "printf" que o dado a ser impresso é um número inteiro.
  // Como não usamos o "&", o VALOR armazenado na variável é entregue diretamente.
  printf("\tValor: %d\n\n", num);

  // --- Criando um ponteiro ---
  /* O "*" aqui torna a variável um ponteiro que deverá receber o endereço de uma
     variável do tipo int, no caso abaixo, o endereço da variável "num". */
  int *ponteiroNum = &num;

  /* Variáveis do tipo ponteiro também têm seus próprios endereços,
     só que tais endereços apontam para outros endereços. Exemplo: */
  printf("O endereço %p aponta para o endereço %p.\n", &ponteiroNum, ponteiroNum);
  // O "*" (dereferẽncia) aqui busca o conteúdo do endereço de um ponteiro.
  printf("Conteúdo apontado: %d\n\n", *ponteiroNum);
  
  return 0;
}