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

// Podemos passar dados de um vetor struct através dos parâmetros.
void imprimirCadastros(Cadastro cadastro[], int id) {
  printf("\tNome: %s\tData de cadastro: %.2d/%.2d/%d\n\n", cadastro[id].nome,
         cadastro[id].dataCadastro.dia, cadastro[id].dataCadastro.mês,
         cadastro[id].dataCadastro.ano);
}

int main() {
  srand(time(NULL));

  int idCadastro = 0;

  // Definindo o tipo do vetor como struct.
  Cadastro cadastro[10];

  // Loop para inserir dados em cada índice do vetor struct.
  while (idCadastro < 10) {
    printf("ID %dº - Nome: ", idCadastro + 1);
    cadastro[idCadastro] = preencherVetor();
    idCadastro++;
  }
  printf("\n");
  idCadastro = 0;
  // Loop para imprimir os dados do vetor struct.
  while (idCadastro < 10) {
    imprimirCadastros(cadastro, idCadastro);
    idCadastro++;
  }

  printf("\n");
  return 0;
}
