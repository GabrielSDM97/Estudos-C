#include <stdio.h>
// #include <stdlib.h>

/*
    Foi feita uma pesquisa entre os habitantes de uma região e foram coletados
   os dados de idade, sexo (M/F) e salário de X pessoas (x deve ser informado
   pelo usuário). Faça um programa que informe:
    a) a média de salário do grupo;
    b) a maior e a menor idade do grupo;
    c) a quantidade de mulheres com salário até R$2000,00.
*/

int main() {
  int habitante = 0, idade, maiorIdade, menorIdade, qtdMulherSalário = 0;
  char sexo, opção;
  float salário, salárioTotal = 0;

  do {
    habitante += 1;
    printf("\n~~~~ Habitante Nº%d ~~~~\n", habitante);
    printf("Insira os seguintes dados na ordem: idade, sexo[M/F], salário: ");
    scanf("%d %c%f", &idade, &sexo, &salário);

    salárioTotal += salário; // a)

    if (habitante == 1) // b)
      maiorIdade = menorIdade = idade;
    else if (idade > maiorIdade)
      maiorIdade = idade;
    else if (idade < menorIdade)
      menorIdade = idade;

    if ((sexo == 'F' || sexo == 'f') && salário <= 2000.00) // c)
      qtdMulherSalário += 1;

    printf("Deseja continuar? [S/N] ");
    scanf(" %c", &opção);
  } while(opção == 'S' || opção == 's');

  printf("\na) a média de salário do grupo: R$%.2f\n", salárioTotal/habitante);
  printf("b) a maior e a menor idade do grupo: %d anos; %d anos;\n", maiorIdade, menorIdade);
  printf("c) a quantidade de mulheres com salário até R$2000,00: %d\n\n", qtdMulherSalário);

  return 0;
}