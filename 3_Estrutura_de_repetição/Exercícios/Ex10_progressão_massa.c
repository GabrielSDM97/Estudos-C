#include <stdio.h>
// #include <stdlib.h>

/*
    Um determinado material radioativo perde metade de sua massa a cada 50
   segundos. Dada a massa inicial, em gramas, faça um programa que determine o
   tempo necessário para que essa massa se torne menor que 0,05 gramas.
*/

int main() {
  int tempoSegundos = 0, opção;
  float massaGramas;

  do {
    tempoSegundos = 0;
    printf("Insira um peso em gramas para um material radioativo: ");
    scanf("%f", &massaGramas);
    
    while (massaGramas >= 0.05) {
      massaGramas /= 2;
      tempoSegundos += 50;
      printf("Tempo: %d segundos; Massa em gramas: %.2f \n", tempoSegundos, massaGramas);
    }

    printf("\nTempo total: %d Segundos", tempoSegundos);
    
    printf("\n\nDeseja continuar? [Qualquer número]Sim; [0]Não: ");
    scanf("%d", &opção);
  } while (opção != 0);

  printf("\n~~~~ Até logo! ~~~~");

  return 0;
}
