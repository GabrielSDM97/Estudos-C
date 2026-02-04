#include <stdio.h>
// #include <stdlib.h>

/*
    Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria
   qualquer preço. O monge, necessitando de alimentos, indagou à rainha sobre o
   pagamento, se poderia ser feito com grãos de trigo dispostos em um tabuleiro
   de xadrez (que possui 64 casas), de tal forma que o primeiro quadro deveria
   conter apenas um grão e os quadros subsequentes, o dobro do quadro anterior.
   Crie um programa para calcular o total de grãos de trigo que o monge recebeu.
*/

int main() {
  long long int trigoCasa = 1, totalTrigo = 1;

  for (int casaXadrez = 2; casaXadrez <= 64; casaXadrez++) {
    trigoCasa *= 2;
    totalTrigo += trigoCasa;
    printf("%lld; ", totalTrigo);
  }

  printf("O monge recebeu %lld grãos de trigo.\n\n", totalTrigo);

}
