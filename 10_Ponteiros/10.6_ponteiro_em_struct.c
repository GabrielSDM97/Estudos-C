#include <stdio.h>
#include <string.h>

typedef struct {
  int dia, mês, ano;
} Data;

typedef struct {
  char nome[100];
  Data dataCadastro;
} Cadastro;

// Recebemos o ENDEREÇO da struct original, permitindo modificar o valor original atrelado a ele.
void inserirCadastro(Cadastro *registro) {
  // Utiliza-se "->" para acessar os campos de um ponteiro struct.
  strcpy(registro->nome, "Maria da Silva");
  registro->dataCadastro.dia = 10;
  registro->dataCadastro.mês = 10;
  registro->dataCadastro.ano = 2000;
}

// Recebemos uma CÓPIA da struct. Modificações aqui não afetam a original.
void imprimirCadastro(Cadastro registro) {
  printf("Nome: %s;\nData de cadastro: %d/%d/%d\n\n",
         registro.nome,
         registro.dataCadastro.dia,
         registro.dataCadastro.mês,
         registro.dataCadastro.ano);
}

int main() {
  Cadastro cadastro;

  // PASSAGEM POR REFERÊNCIA (ponteiro)
  inserirCadastro(&cadastro);
  // PASSAGEM POR VALOR (cópia)
  imprimirCadastro(cadastro);

  return 0;
}