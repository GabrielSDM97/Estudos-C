#include <stdio.h>

typedef struct {
  int dia, mês, ano;
} Data;

typedef struct {
  char nome[100];
} Cadastro;

int main() {

  Cadastro registro;
  Data dataRegistro;

  printf("Nome completo: ");
  // Para inserir dados em uma variável do tipo struct é só utilizar "scanf" normalmente.
  // Funciona com strings também como podemos ver abaixo.
  scanf("%99[^\n]", registro.nome);
  getchar();

  printf("Data de cadastro: ");
  scanf("%d%d%d", &dataRegistro.dia, &dataRegistro.mês, &dataRegistro.ano);

  printf("\n\nNome completo: %s\nData de cadastro: "
         "%.2d/%.2d/%d\n\n",
         registro.nome, dataRegistro.dia, dataRegistro.mês, dataRegistro.ano);

  return 0;
}


