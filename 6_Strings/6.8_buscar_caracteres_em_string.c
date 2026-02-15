#include <stdio.h>
#include <string.h>

int main() {
  char palavra[20] = {"Paralelogramo"};
  char *letra; // O '*' indica ao programa que 'caractere' será um ponteiro.

  /* Um ponteiro armazena o endereço de, por exemplo, uma variável, ou seja,
     toda vez que esse ponteiro for impresso ou chamado, ele retornará o valor referente à variável cujo endereço está no ponteiro. */

  // O ponteiro em sí também tem seu endereço na memória.

  // strchr(array, 'caractere') - Armazena a primeira instância de 'caractere' encontrado em array.
  letra = strchr(palavra, 'a'); // O segundo parâmetro armazena o valor inteiro ASCII do caractere 'a'.

  if (letra) {
    // Para imprimir o caractere armazenado no endereço referenciado no ponteiro, utiliza-se '*' também no 'printf'.
    printf("%c\n", *letra);
    printf("%c\n", *(letra + 1)); // Avança para a próxima posição da string na memória.
    printf("%c\n", *(letra - 1)); // Retrocede para a posição anterior da string na memória.
    // Sem utilizar os parênteses, o +1/-1 iria alterar o valor ASCII de 'letra', e não mudar a região da memória.
  }
  else // Se valor for 'NULL'
    printf("Caractere não encontrado!\n");
  printf("\n");

  // strrchr(array, 'caractere') - Armazena a última instância de 'caractere' encontrado em array.
  letra = strrchr(palavra, 'a');
  
  if (letra) {
    printf("%c\n", *letra);
    printf("%c\n", *(letra + 1)); 
    printf("%c\n", *(letra - 1)); 
  }
  else
    printf("Caractere não encontrado!\n");
    
  return 0;
}
