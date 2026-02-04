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
  float salárioAlto, salárioBaixo, salárioTotal = 0, salário;
  
  printf("Quantidade de funcionários: ");
  scanf("%d", &qtdFuncionários);

  for (int funcionário = 1; funcionário <= qtdFuncionários; funcionário++) {
    printf("Salário do %dº funcionário: R$", funcionário);
    scanf("%f", &salário);

    if (funcionário == 1)
      salárioAlto = salárioBaixo = salário;
    else if (salário > salárioAlto)
      salárioAlto = salário;
    else if (salário < salárioBaixo)
      salárioBaixo = salário;

    salárioTotal += salário;
  }

  printf("\nMédia salarial: R$%.2f\nSalário mais alto: R$%.2f\nSalário mais baixo: R$%.2f\n\n", salárioTotal/qtdFuncionários, salárioAlto, salárioBaixo);

  return 0;
}
