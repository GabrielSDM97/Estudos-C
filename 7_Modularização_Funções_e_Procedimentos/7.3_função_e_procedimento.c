#include <stdio.h>

// O tipo primitivo ao lado do nome da função define o tipo de dado que ela deve retornar (return).
// Função que calcula o tamanho da frase.
int tamanhoString(char texto[100]) {
  int tamanhoString = 0;

  while (texto[tamanhoString] != '\0') {
    tamanhoString++;
  }

  return tamanhoString;
}

// Procedimento que pede uma frase para o usuário e depois mostra a frase na tela.
void imprimirFrase(char enunciado[100]) {
  char frase[100];
  int índice = 0;

  printf("%s", enunciado);
  scanf("%99[^\n]", frase);
  getchar();

  printf("Frase: ");
  // Loop que mostra a frase caractere por caractere.
  while (frase[índice] != '\0') {
    printf("%c", frase[índice]);
    índice++;
  }                       // Chamando a função que calcula tamanho da string
  printf("; Tamanho: %d.\n\n", tamanhoString(frase));
  printf("\n\t\t%s\n", frase);
}

int main() {
  imprimirFrase("Digite uma frase: ");
  return 0;
}
