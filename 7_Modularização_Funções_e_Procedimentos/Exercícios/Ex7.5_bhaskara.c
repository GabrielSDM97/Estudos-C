#include <stdio.h>
#include <math.h>

/*
    Faça um programa para resolver uma equação do segundo grau com a fórmula de Bhaskara.
*/

void fórmulaBhaskara(char enunciado[100]) {
  float a, b, c, x1, x2, delta;
  
  printf("%s", enunciado);
  scanf("%f%f%f", &a, &b, &c);
  if (a == 0) {
    printf("Erro: não é uma equação do 2º grau (a = 0).\n\n");
    return;
  }
  delta = (b * b) - (4 * a * c);

  if (delta > 0) { // Duas raízes reais distintas.
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("Raízes reais distintas --> x1 = %.3f; x2 = %.3f.\n\n", x1, x2);
  } else if (delta == 0) { // Duas raízes reais iguais.
    x1 = x2 = -b / (2 * a);
    printf("Raizes reais iguais --> x1 & x2 = %.3f.\n\n", x1);
  } else if (delta < 0) // Nenhuma raiz real (raízes complexas).
    printf("Nenhuma raiz real.\n\n");
}

int main() {

  fórmulaBhaskara("Digite os coeficientes A, B e C: ");

  return 0;
}
