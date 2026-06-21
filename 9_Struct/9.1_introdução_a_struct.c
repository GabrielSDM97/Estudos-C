#include <stdio.h>
#include <string.h>

// Com struct podemos criar novos tipos de dados além dos tipos primitivos.

// 1ª Forma de criar uma struct.
// Nome do novo tipo de dado = "struct Data"
struct Data {
  // Campos do novo tipo de dado
  int dia, mês, ano;
};

// 2ª Forma de criar uma struct (Recomendada).
/* "Typedef" renomeia toda a struct para o nome após a chave que fecha essa
    estrutura, no caso, para "Cadastro", ou seja, este será o nome do novo tipo de dado. */
typedef struct{
  char categoria[100];
} Produto;

int main() {
  // Criando variável a partir da 1ª forma de criar struct.
  // "struct Data" <- Tipo de dado;
  // "data" <- nome da variável.
  struct Data data;

  // Criando variável a partir da 2ª forma de criar struct.
  // Perceba que não precisamos colocar "struct" em um tipo de dado renomeado com o modificador "typedef"
  Produto registro;

  // Atribuindo valores aos campos da variável "data"
  data.dia = 15;
  data.mês = 10;
  data.ano = 2005;

  /* Não é possível atribuir uma string diretamente em um campo de uma variável
     do tipo struct, sendo necessário fazer uma cópia. */
  strcpy(registro.categoria, "Bebidas");

  printf("%d/%d/%d; Categoria: %s;\n\n", data.dia, data.mês, data.ano, registro.categoria);

  return 0;
}