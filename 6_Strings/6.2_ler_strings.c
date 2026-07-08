#include <stdio.h>

int main() {
  char nomeCompleto[40], limparBuffer;

  printf("Insira seu nome completo: ");

  // scanf("%s", ...) lê caracteres até encontrar um espaço em branco (espaço, tab ou enter). O restante da entrada permanece no buffer.
  scanf("%s", nomeCompleto);
  // Não usamos '&' em 'scanf' para strings porque o array já representa o endereço do primeiro elemento (&nomeCompleto[0]). */
  printf("%s\n\n", nomeCompleto);

  do {
    limparBuffer = getchar();
  } while (limparBuffer != '\n');

  /* IMPORTANTE!! Caso seja inserido uma quantidade de caracteres que exceda a quantidade de índices definida no array, 
  o 'scanf' armazenará esse excesso em outras regiões da memória, o que é um grande risco, já que essas regiões podem 
  estar sendo utilizadas por outros programas, acarretando em perda de dados, erros, etc.. */

  // Para evitar tal problema, temos algumas soluções:

  // Solução 1:
  printf("Insira seu nome completo novamente: ");
  scanf("%39[^\n]", nomeCompleto);
            /*  %  - Qualquer caractere
                39 - Lê 39 índices do array
                [^\n] - ^ EXCEÇÃO. Lê tudo até encontrar uma quebra de linha, ou seja, '\n' */
  
  printf("%s\n\n", nomeCompleto);

  getchar(); // Limpando o '\n' residual

  // Solução 2 (Simples e segura):
  printf("Insira seu nome completo novamente: ");
  // parâmetros de 'fgets' - (nomeArray, tamanhoArray, arquivo/biblioteca 'stdin' por padrão para ler buffer do teclado)
  fgets(nomeCompleto, 39, stdin);
  printf("%s\n\n", nomeCompleto);

  // OSERVAÇÃO 1:
  // Ambas as soluções, por lerem todos os índices definidos em seus respectivos parâmetros, leem também espaços em branco, diferentemente de '%s'.

  // OBSERVAÇÃO 2 (ATENÇÃO):
  // A solução 1 ignora a quebra de linha, deixando-a no buffer de teclado.
  // A solução 2 absorve-a, incluindo-a na string.
  
  return 0;
}
