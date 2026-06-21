#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
  int dia, mês, ano;
} Data;

typedef struct {
  char categoria[100];
  char marca[100];
  Data validade, fabricação;
} Produto;

// É possível criar funções que retornem struct.
Produto retornarDatas() {
  Produto datas;

  datas.fabricação.dia = 1 + rand() % 31;
  datas.fabricação.mês = 1 + rand() % 6;
  datas.fabricação.ano = 2026;

  datas.validade.dia = 1 + rand() % 31;
  datas.validade.mês = 6 + rand() % 6;
  datas.validade.ano = 2026;

  return datas;
}

// É possível também definir parâmetros struct tanto em procedimentos quanto em funções.
void imprimirDados(Produto registro) {
  printf("\tCategoria do produto: %s\n\tMarca do produto: %s\n", registro.categoria,
         registro.marca);
  printf("\tData de fabricação: %.2d/%.2d/%d\n\tData de validade: "
         "%.2d/%.2d/%d\n\n",
         registro.fabricação.dia, registro.fabricação.mês,
         registro.fabricação.ano, registro.validade.dia, registro.validade.mês,
         registro.validade.ano);
}

int main() {

  srand(time(NULL));

  Produto cadastro = retornarDatas();

  Strcpy(cadastro.categoria, "Refrigerante");
  Strcpy(cadastro.marca, "Coca-cola");

  imprimirDados(cadastro);

  return 0;
}