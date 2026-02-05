#include <stdio.h>
// #include <stdlib.h>

/*
    Faça um programa que calcule a média de salários de uma empresa, pedindo ao
   usuário a quantidade de funcionários e o salário de cada funcionário. Ao
   final, o programa deve imprimir a média dos salários informados, o salário
   mais alto e o salário mais baixo.
*/

int main() {
  int qtdFuncionários;
  float salárioMaior, salárioMenor, salárioTotal = 0, salário;
  
  printf("Quantidade de funcionários: ");
  scanf("%d", &qtdFuncionários);

  for (int idFuncionário = 1; idFuncionário <= qtdFuncionários; idFuncionário++) {
    printf("Salário do %dº funcionário: R$", idFuncionário);
    scanf("%f", &salário);

    if (idFuncionário == 1)
      salárioMaior = salárioMenor = salário;
    else if (salário > salárioMaior)
      salárioMaior = salário;
    else if (salário < salárioMenor)
      salárioMenor = salário;

    salárioTotal += salário;
  }

  printf("\nMédia salarial: R$%.2f\nMaior salário: R$%.2f\nMenor salário: R$%.2f\n\n", salárioTotal/qtdFuncionários, salárioMaior, salárioMenor);

  return 0;
}
