#include <stdio.h>
// #include <stdlib.h>

/*
   Escreva um programa para ler as coordenadas (X, Y) de uma quantidade
   indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o
   quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos
   uma das coordenadas for NULA (nesta situação sem escrever mensagem alguma).

   Exemplo de entrada:
   2 2
   3 -2
  -8 -1
  -7 1

   Exemplo de saída:
   primeiro quadrante
   quarto quadrante
   terceiro quadrante
   segundo quadrante
*/

int main() {
  int X, Y;

  do {
    printf("Insira as coordenadas X e Y: ");
    scanf("%d%d", &X, &Y);

    if (X > 0 && Y > 0)
      printf("X:%d; Y:%d --> Primeiro quadrante\n\n", X, Y);
    else if (X < 0 && Y > 0)
      printf("X:%d; Y:%d --> Segundo quadrante\n\n", X, Y);
    else if (X < 0 && Y < 0)
      printf("X:%d; Y:%d --> Terceiro quadrante\n\n", X, Y);
    else if (X > 0 && Y < 0)
      printf("X:%d; Y:%d --> Quarto quadrante\n\n", X, Y);

  } while(X != 0 && Y != 0);
  printf("~~~~ Até logo! ~~~~");
      
  return 0;
}
