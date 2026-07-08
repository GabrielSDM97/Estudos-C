#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

/*
    Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10
   tipos de objetos diferentes. O vendedor recebe um salário de R$1100,00
   acrescido de 5% do valor total de suas vendas. O valor unitário dos objetos
   deve ser informado e armazenado em um vetor; a quantidade vendida de cada
   objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
   receba os preços e as quantidades vendidas, armazenando-os em seus
   respectivos vetores. Depois, determine e mostre:

    a) A quantidade vendida, valor unitário e valor total de
    cada objeto. Ao final, deverão ser mostrados o valor total das vendas e o
   valor da comissão que será paga ao vendedor.

    b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
    empatados).

*/

int main() {
  char objetos[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
  float valorUnitário[10], valorTotal = 0, maiorQtdVenda;
  int qtdVendas[10];

  for (int índice = 0; índice < 10; índice++) {
    printf("\nValor unitário do objeto '%c': R$", objetos[índice]);
    scanf("%f", &valorUnitário[índice]);
    printf("Quantidade vendida: ");
    scanf("%d", &qtdVendas[índice]);
    if (índice == 0)
      maiorQtdVenda = qtdVendas[índice];
    else if (qtdVendas[índice] > maiorQtdVenda)
      maiorQtdVenda = qtdVendas[índice];
  }

  for (int ítem = 0; ítem < 10; ítem++) {
    printf("\n----- Objeto '%c' -----\n", objetos[ítem]);
    printf("Vendas = %d;\n", qtdVendas[ítem]);
    printf("Valor unitário = R$%.2f;\n", valorUnitário[ítem]);
    printf("Valor total = R$%.2f;\n", qtdVendas[ítem] * valorUnitário[ítem]);
    valorTotal += qtdVendas[ítem] * valorUnitário[ítem];
  }

  printf("\n----- Dados do vendedor -----\nVendas: R$%.2f;", valorTotal);
  printf("\nComissão: R$%.2f;", valorTotal * 0.05);

  printf("\n\n----- Objeto(s) mais vendidos -----\n");
  for (int índice = 0; índice < 10; índice++)
    if (qtdVendas[índice] == maiorQtdVenda)
      printf("Índice[%d] -> Objeto: '%c'; Valor unitário = R$%.2f\n", índice, objetos[índice], valorUnitário[índice]);

  return 0;
}
