#include <stdio.h>

/*
  Modularização e procedimentos quebra um programa em partes menores, facilitando o gerenciamento, e podendo reutilizar tais códigos.
*/

int main() {

  /* Função:
  retorno/tipo nomeFunção(parâmetro1, parâmetro2, etc...) {
    Argumentos...
    return valor;
  }
  */

  /* Procedimento:
  void nomeProcedimento(parâmetro1, parâmetro2, etc...) {
    Argumentos...
  }
  */

  // FUNÇÃO tem retorno, PROCEDIMENTO não.


  int teste = 0;

  // A função 'printf' ao ser atribuida a uma variável de tipo 'int' retorna a quantidade de caracteres inserida nela.
  teste = printf("Olá mundooo!\n");

  // Como podemos ver abaixo, a primeira máscara retorna a quantidade de caracteres do argumento/função "printf".
  // O segundo "printf" retorna a quantidade de caracteres do argumento/variável 'teste'.
  printf(" --> %d\n\n", printf("\n\t%d", teste));

  // Nota-se que caracteres de escape "\n, \t, etc..." são considerados como 1 caractere. 
  // Já máscaras "%d, %c, etc..." são consideradas como 2 caracteres.

  return 0;
}
