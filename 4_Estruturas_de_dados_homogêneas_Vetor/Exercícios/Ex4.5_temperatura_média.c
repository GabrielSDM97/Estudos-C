#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

/*
    Faça um programa que receba a temperatura média de cada mês do ano,
   armazenando-as em um vetor. Ao final, mostre a maior e a menor temperatura
   do ano e em que mês ocorreram (mostrar o mês por extenso: janeiro, fevereiro...).
   Desconsidere empates.
*/

int main() {
  int temperatura[12], maiorTemperatura, menorTemperatura;

  for (int mês = 0; mês < 12; mês++) {
    printf("Insira a temperatura média do mês %d: ", mês + 1);
    scanf("%d", &temperatura[mês]);
    if (mês == 1)
      maiorTemperatura = menorTemperatura = temperatura[mês];
    else if (temperatura[mês] > maiorTemperatura)
      maiorTemperatura = temperatura[mês];
    else if (temperatura[mês] < menorTemperatura)
      menorTemperatura = temperatura[mês];
  }

  for (int mês = 0; mês < 12; mês++) {
    if (temperatura[mês] == maiorTemperatura) {
      printf("\nMaior média de temperatura: %dCº; Mês: ", maiorTemperatura);
      switch (mês) {
      case 0:
        printf("Janeiro");
        break;
      case 1:
        printf("Fevereiro");
        break;
      case 2:
        printf("Março");
        break;
      case 3:
        printf("Abril");
        break;
      case 4:
        printf("Maio");
        break;
      case 5:
        printf("Junho");
        break;
      case 6:
        printf("Julho");
        break;
      case 7:
        printf("Agosto");
        break;
      case 8:
        printf("Setembro");
        break;
      case 9:
        printf("Outubro");
        break;
      case 10:
        printf("Novembro");
        break;
      case 11:
        printf("Dezembro");
        break;
      }
      printf(";\n");
      break;
    }
  }
  
  for (int mês = 0; mês < 12; mês++) {
    if (temperatura[mês] == menorTemperatura) {
      printf("\nMenor média de temperatura: %dCº; Mês: ", menorTemperatura);
      switch (mês) {
      case 0:
        printf("Janeiro");
        break;
      case 1:
        printf("Fevereiro");
        break;
      case 2:
        printf("Março");
        break;
      case 3:
        printf("Abril");
        break;
      case 4:
        printf("Maio");
        break;
      case 5:
        printf("Junho");
        break;
      case 6:
        printf("Julho");
        break;
      case 7:
        printf("Agosto");
        break;
      case 8:
        printf("Setembro");
        break;
      case 9:
        printf("Outubro");
        break;
      case 10:
        printf("Novembro");
        break;
      case 11:
        printf("Dezembro");
        break;
      }
      printf(";\n\n");
      break;
    }
  }

  return 0;
}
