#include <stdio.h>
// #include <stdlib.h>

/*
    Você deve fazer um programa que apresente a sequência conforme o exemplo
   abaixo.
    I=1 J=7
    I=1 J=6
    I=1 J=5
    I=3 J=9
    I=3 J=8
    I=3 J=7
    I=5 J=11
    I=5 J=10
    I=5 J=9
    ...
    I=9 J=15
    I=9 J=14
    I=9 J=13
*/

int main() {
  
  for (int I = 1; I <= 9; I += 2) {
    for (int J = I+6; J >= I+4; J--) {
      printf("I = %d \tJ = %d\n", I, J);
    }
  }

  return 0;
}
