#include <stdio.h>
#include <string.h>

// Além das funções, temos um procedimento importando da biblioteca string.h, chamado de 'strcat()'.
// Este procedimento serve para concatenar strings.

int main() {
  char vet1[20] = {"Olá "}, vet2[20] = {"Mundo!"};

  strcat(vet1, vet2); // Concatenando a string 'vet2' ao fim da string 'vet1'.

  printf("vet1: %s\nvet2: %s\n", vet1, vet2);

  /* IMPORTANTE!!!
     Tenha certeza de que a primeira array tenha espaço suficiente para receber a outra array, 
     do contrário outras regiões da memória serão utilizadas, o que é um grande risco, já que essas regiões podem 
     estar sendo utilizadas por outros programas, acarretando em perda de dados, erros, etc.. */

  return 0;
}
