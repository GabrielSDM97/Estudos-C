#include <stdio.h>
#include <string.h>

int main() {
  char frase[100] = "Carro novo na garagem.";
  char *ponteiro;

  // Primeira chamada: inicia a tokenização da string 'frase'
  // Delimitadores: espaço em branco, ponto e vírgula (" .,")
  // A função substitui os delimitadores por '\0' e retorna o endereço do primeiro token
  ponteiro = strtok(frase, " .,");

  // Loop para exibir todos os tokens encontrados até o final da string
  while (ponteiro != NULL) {
    // Imprime o token atual (palavra completa, não apenas o primeiro caractere)
    printf("%s\n", ponteiro);

    /* Continua a tokenização da mesma string 'frase'
       Usamos NULL para indicar que devemos continuar da posição onde paramos anteriormente
       A função mantém internamente a posição atual na string original */
    ponteiro = strtok(NULL, " .,");
  }
  printf("\n");

  return 0;
}
