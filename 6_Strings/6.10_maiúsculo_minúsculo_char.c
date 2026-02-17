#include <stdio.h>
#include <ctype.h> // Importa as funções 'toupper()' e 'tolower()'
 
int main() {
  char letra = 'a';
  char maiúsculo, minúsculo;

  printf("Normal: %c\n", letra);
  maiúsculo = toupper(letra); // Converte um caractere em maiúscula.
  printf("Maiúscula: %c\n", maiúsculo);
  minúsculo = tolower(letra); // Converte um caractere em minúscula.
  printf("Minúscula: %c\n", minúsculo);


  // Não existe função para converter uma string em maiúscula ou minúscula em Linux. É necessário criar uma função para isso.

  char frase[100] = {"Meu carro novo!"};
  char fraseMaiúscula[100], fraseMinúscula[100];
  int iteração = 0;

  printf("\n%s\n", frase);

  // Maiúscula
  while (frase[iteração] != '\0') {
    fraseMaiúscula[iteração] = toupper(frase[iteração]);
    iteração++;
  }
  printf("\n%s\n", fraseMaiúscula);

  // Minúscula
  iteração = 0;
  while (frase[iteração] != '\0') {
    fraseMinúscula[iteração] = tolower(frase[iteração]);
    iteração++;
  }
  printf("\n%s\n\n", fraseMinúscula);

  return 0;
}
