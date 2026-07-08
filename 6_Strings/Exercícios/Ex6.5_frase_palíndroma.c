#include <stdio.h>
#include <string.h>

/*
    Faça um programa para descobrir se uma frase é palíndroma com a linguagem C.
*/

int main() {
  char frase[100] = {"a base do teto desaba"}, copiaFrase[100], *ponteiro;
  /* A array 'fraseJunta' necessita ter "" como caractere inicial, do contrário, ao usar essa array como destino em 'strcat()', 
     por não ter nenhum caractere inicial, a função 'strcat()' detectaria qualquer lixo de memória como caractere inicial. */ 
  char fraseJunta[100] = {""};
  int palíndromo, tamanhoFrase;

  // Fazendo uma copia da frase original, já que a original será dividida em tokens.
  strcpy(copiaFrase, frase);

  ponteiro = strtok(frase, " ");
  // Concatenando tokens da string 'frase' na array 'fraseJunta'.
  while (ponteiro) { 
    strcat(fraseJunta, ponteiro);
    ponteiro = strtok(NULL, " ");
  }

  tamanhoFrase = strlen(fraseJunta) - 1;

  for (int índice = 0, índiceInverso = tamanhoFrase; índice <= tamanhoFrase; índice++, índiceInverso--){
    if (fraseJunta[índice] != fraseJunta[índiceInverso]) {
      palíndromo = 0;
      break;
    }
    palíndromo = 1;
  }

  if (palíndromo == 1)
    printf("A frase '%s' é um palíndromo.\n\n", copiaFrase);
  else if (palíndromo == 0)
    printf("A frase '%s' não é um palíndromo.\n\n", copiaFrase);
    
  return 0;
}
