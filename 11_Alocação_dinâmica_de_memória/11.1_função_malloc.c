#include <stdio.h>
#include <stdlib.h> // Funções de alocação dinâmica de memória estão inclusas nessa biblioteca

// Muito utilizada em estrutura de dados mais avançadas e dinâmicas.

int main() {
  int *valor;
  /* A função "malloc" aloca uma região com a quantidade de Bytes definida em seu
     parâmetro, se conseguir, retorna o endereço da região, se não
     conseguir, retorna NULL. */
  valor = malloc(sizeof(int));

  // Condicional que verifica se a alocação de memória ocorreu corretamente. 
  // Faz-se sempre necessária ao alocar memória.
  if (valor) {
    printf("Memória alocada com sucesso!\n");
    printf("Endereço do ponteiro: \t\t%p \nEndereço alocado pelo malloc:   %p\n", &valor, valor);
    // Antes de atribuir o valor 35.
    printf("\nValor: %d\n", *valor);
    // Atribuindo um valor para o endereço alocado pelo malloc.
    *valor = 35;
    // Depois de atribuir o valor 35.
    printf("\nValor: %d\n\n", *valor);
  } else
    printf("Erro na alocação, falta de memória!\n");

  // Forçando um erro.
  valor = NULL;

  if (valor) {
    printf("Memória alocada com sucesso!\n");
  } else
    printf("Erro na alocação, falta de memória!\n\n");

  return 0;
}