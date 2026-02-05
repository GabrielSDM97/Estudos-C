#include <stdio.h>
// #include <stdlib.h>

/*
    Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10
   metro e cresce 3 centímetros por ano. Construa um programa que calcule e
   imprima quantos anos serão necessários para que Zé seja maior que Chico.
*/

int main() {
  float chicoAltura = 1.5, zéAltura = 1.1;
  int anos = 0;

  while(zéAltura <= chicoAltura) {
    chicoAltura += 0.02;
    zéAltura += 0.03;
    anos++;
  }
  printf("Foram necessários %d anos para que Zé ficasse mais alto que Chico.\n\n", anos);

  return 0;
}