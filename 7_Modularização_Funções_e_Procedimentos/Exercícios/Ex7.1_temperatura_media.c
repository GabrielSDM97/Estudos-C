#include <stdio.h>

/*
    Faça um programa usando funções e procedimentos que receba a temperatura
   média de cada mês do ano, armazenando-as em um vetor. Ao final, mostre a
   maior e a menor temperatura do ano e em que mês ocorreram (mostrar o mês por
   extenso: janeiro, fevereiro ...). Desconsidere empates.
*/

void mêsEscolha(int mêsEscolhido) {
  switch (mêsEscolhido+1){
  case 1:
    printf("Janeiro");
    break;
  case 2:
    printf("Fevereiro");
    break;
  case 3:
    printf("Março");
    break;
  case 4:
    printf("Abril");
    break;
  case 5:
    printf("Maio");
    break;
  case 6:
    printf("Junho");
    break;
  case 7:
    printf("Julho");
    break;
  case 8:
    printf("Agosto");
    break;
  case 9:
    printf("Setembro");
    break;
  case 10:
    printf("Outubro");
    break;
  case 11:
    printf("Novembro");
    break;
  case 12:
    printf("Dezembro");
    break;
  }
}

void maiorMenorTemp(int temperatura[]) {
  int maior, menor, mêsMaior, mêsMenor;

  for (int mês = 0; mês < 12; mês++) {
    if (mês == 0) {
      maior = menor = temperatura[mês];
      mêsMaior = mêsMenor = mês;
    }
    else if (temperatura[mês] > maior) {
      maior = temperatura[mês];
      mêsMaior = mês;
    }
    else if (temperatura[mês] < menor) {
      menor = temperatura[mês];
      mêsMenor = mês;
    }
  }
  printf("\nMaior temperatura: %d° Mês: ", maior);
  mêsEscolha(mêsMaior);
  printf("\nMenor temperatura: %dº Mês: ", menor);
  mêsEscolha(mêsMenor);
}

int main() {
  int mesesAnálise[12];

  for (int mês = 0; mês < 12; mês++) {
    printf("Temperatura do mês de ");
    mêsEscolha(mês);
    printf(": ");
    scanf("%d", &mesesAnálise[mês]);
  }
  maiorMenorTemp( mesesAnálise);
  printf("\n\n");

  return 0;
}
