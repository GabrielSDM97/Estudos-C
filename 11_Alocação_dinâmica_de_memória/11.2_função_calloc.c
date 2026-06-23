#include <stdio.h>
#include <stdlib.h>

int main() {
  int *valor;
  /* A função "calloc" aloca um bloco com "n" regiões definidas no primeiro
     parâmetro, onde cada região tera o tamanho em Bytes definido no segundo
     parâmetro. Se conseguir, retorna o endereço da primeira região onde ocorreu
     a alocação, se não conseguir, retorna NULL. */
  valor = calloc(1, sizeof(int));

  if (valor) {
    printf("Memória alocada com sucesso!\n");
    printf(
        "Endereço do ponteiro: \t\t%p \nEndereço alocado pelo malloc:   %p\n\n",
        &valor, valor);
  } else
    printf("Erro na alocação, falta de memória!\n\n");

  return 0;
}