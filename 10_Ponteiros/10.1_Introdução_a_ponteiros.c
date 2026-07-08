#include <stdio.h>

int main() {
  int num1 = 3, num2 = 4;

  // O "%p" AVISA o "printf" que o dado a ser impresso é um endereço de memória.
  // O "&" EXTRAI o endereço da variável e o entrega para o "%p" imprimir.
  printf("\tEndereço: %p\n", &num1);

  // O "%d" AVISA o "printf" que o dado a ser impresso é um número inteiro.
  // Como não usamos o "&", o VALOR armazenado na variável é entregue
  // diretamente.
  printf("\tValor: %d\n\n", num1);

  // --- Criando um ponteiro ---
  // O "*" na declaração de uma variável atua como o operador de declaração de ponteiro. 
  // Uma variável do tipo ponteiro deve receber o endereço de uma outra variável, no caso abaixo, o endereço da variável "num1".
  // O tipo de dado ao lado de "*" dita o tipo de conteúdo que o endereço apontado deve conter.
  int *ponteiroNum = &num1;

  // --- Desreferência ---
  /* Após a declaração de um ponteiro, utilizar essa mesmo ponteiro com "*" tem uma outra função, que é a de
     acessar diretamente o conteúdo do endereço apontado pelo ponteiro, permitindo também alterá-lo como podemos ver abaixo. */
  *ponteiroNum = 5;

  // Para alterar o endereço apontado por um ponteiro declarado, não se utiliza o "*".
  ponteiroNum = &num2;

  /* Variáveis do tipo ponteiro também têm seus próprios endereços,
     só que tais endereços apontam para outros endereços. Exemplo: */
  printf("O endereço %p aponta para o endereço %p.\n", &ponteiroNum, ponteiroNum);
  // Utilizando desreferência para buscar o conteúdo do endereço de um ponteiro.
  printf("Conteúdo apontado: %d\n\n", *ponteiroNum);

  return 0;
}