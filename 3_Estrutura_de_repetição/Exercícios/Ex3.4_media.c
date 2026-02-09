#include <stdio.h>
// #include <stdlib.h>

/*
   Faça um programa que leia as notas referentes às duas avaliações de um
   aluno. Calcule e imprima a média semestral. Faça com que o programa só aceite
   notas válidas (uma nota válida deve pertencer ao intervalo de 0 a 10). Cada
   nota deve ser validada separadamente.
*/

int main() {
  float nota1, nota2;

  printf("Nota da avaliação 1: ");
  scanf("%f", &nota1);
  while (nota1 < 0 || nota1 > 10) {
    printf("Nota inválida, insira uma nova nota: ");
    scanf("%f", &nota1);
  }

  printf("Nota da avaliação 2: ");
  scanf("%f", &nota2);
  while (nota2 < 0 || nota2 > 10) {
    printf("Nota inválida, insira uma nova nota: ");
    scanf("%f", &nota2);
  }

  printf("\nNota 1: %.1f; Nota 2: %.1f\nMédia: %.1f\n\n", nota1, nota2, (nota1+nota2)/2);

  return 0;
}
