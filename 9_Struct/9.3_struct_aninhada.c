#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
  int dia, mês, ano;
} Data;

typedef struct {
  char categoria[100];
  char marca[100];
  // É possível criar variáveis do tipo "struct" dentro de outra "struct".
  Data validade, fabricação;
} Produto;

int main() {

  srand(time(NULL));

  Produto registro;

  printf("Categoria e marca do produto: ");
  scanf("%99[^\n] %99[^\n]", registro.categoria, registro.marca);
  getchar();

  // A variável "registro" tem o campo "fabricação", que, por sua vez, tem os campos "dia", "mês" e "ano".
  registro.fabricação.dia = 1 + rand() % 31;
  registro.fabricação.mês = 1 + rand() % 6;
  registro.fabricação.ano = 2026;

  registro.validade.dia = 1 + rand() % 31;
  registro.validade.mês = 6 + rand() % 6;
  registro.validade.ano = 2026;

  printf("\n\nCategoria do produto: %s\nMarca do produto: %s\nData de fabricação: "
         "%.2d/%.2d/%d\nData de validade: %.2d/%.2d/%d\n\n",
         registro.categoria, registro.marca, registro.fabricação.dia,
         registro.fabricação.mês, registro.fabricação.ano,
         registro.validade.dia, registro.validade.mês, registro.validade.ano);

  return 0;
}
