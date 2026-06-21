#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
  int dia, mês, ano;
} Data;

typedef struct {
  char nome[100];
  Data dataCadastro;
} Cadastro;

Cadastro preencherVetor() {
  Cadastro cadastro;
  fgets(cadastro.nome, 100, stdin);

  cadastro.dataCadastro.dia = 1 + rand() % 31;
  cadastro.dataCadastro.mês = 1 + rand() % 12;
  cadastro.dataCadastro.ano = 1997 + rand() % 30;

  return cadastro;
}

// Podemos passar dados de uma matriz struct através dos parâmetros.
void imprimirCadastros(Cadastro cadastro[][3], int página, int idCadastro) {
  printf("\tNome: %s\tData de cadastro: %.2d/%.2d/%d\n\n",
         cadastro[página][idCadastro].nome,
         cadastro[página][idCadastro].dataCadastro.dia,
         cadastro[página][idCadastro].dataCadastro.mês,
         cadastro[página][idCadastro].dataCadastro.ano);
}

int main() {
  srand(time(NULL));

  int página = 0, idCadastro = 0, idContador = 1;

  // Definindo o tipo da matriz como struct.
  Cadastro cadastro[3][3];

  // Loop para inserir dados em cada registro na matriz struct.
  for (página = 0; página < 3; página++) {
    printf("\n------ Página %d. ------\n", página + 1);
    for (idCadastro = 0; idCadastro < 3; idCadastro++) {
      printf("IDº %d - Nome: ", idContador);
      cadastro[página][idCadastro] = preencherVetor();
      idContador++;
    }
  }
  printf("\n");
  página = 0, idCadastro = 0;
  // Loop para imprimir os dados da matriz struct.
  for (página = 0; página < 3; página++) {
    printf("\n\t--------- Página %d. ---------\n", página + 1);
    for (idCadastro = 0; idCadastro < 3; idCadastro++) {
      imprimirCadastros(cadastro, página, idCadastro);
    }
  }

  printf("\n");
  return 0;
}
