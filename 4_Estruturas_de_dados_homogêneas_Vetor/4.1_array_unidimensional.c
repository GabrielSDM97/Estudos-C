#include <stdio.h>
//#include <stdlib.h>

int main() {

  // Vetores/arrays, assim como variáveis simples, precisam ter o tipo primitivo dos dados que receberão.

  int números[5] = {1, 53, 7}; // Índices vazios retornam 0.
  char caracteres[3] = {'A', '4', 'H'};
  float reais[4] = {1.4, 5, 14.2, 90.38};

  printf("%d\n", números[2] /* array[índice] - Acessando um valor de um vetor através de seu índice */);
  printf("%c\n", caracteres[0]);
  printf("%.2f\n\n", reais[3]);



  // Utilizando laços de repetição para imprimir valores de vetores/arrays

  int listaNumérica[10] = {2, 5, 32, 18, 59, 76, 72, 48, 99, 180};
  char listaCaracteres[7] = {'G','a','b','r','i','e','l'};

  for (int índice = 0; índice <= 9; índice++)
    printf("lista[%d] = %d\n", índice, listaNumérica[índice]);

  for (int índice = 0; índice <= 6; índice++)
    printf("%c", listaCaracteres[índice]);
  printf("\n\n");



  // Lendo múltiplos valores e os adicionando em um vetor/array

  int lista[5];

  for (int índice = 0; índice <= 4; índice++) {
    printf("Digite um número (Adicionando): ");
    scanf("%d", &lista[índice]);
  }

  // Trocando valores do vetor/array anterior

  printf("\n ----- Vetor antes das trocas ---- \n");
  for (int índice = 0; índice <= 4; índice++)
    printf("\nlista[%d] = %d", índice, lista[índice]);
  printf("\n\n");

  for (int índice = 0; índice <= 4; índice++) {
    printf("Digite um número (Ficará no lugar de %d): ", lista[índice]);
    scanf("%d", &lista[índice]);
  }

  printf("\n ----- Vetor depois das trocas ---- \n");
  for (int índice = 0; índice <= 4; índice++)
    printf("\nlista[%d] = %d", índice, lista[índice]);
  printf("\n\n");
  
 return 0;   
}
