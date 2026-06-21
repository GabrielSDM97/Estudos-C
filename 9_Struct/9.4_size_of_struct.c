#include <stdio.h>

typedef struct {
  // int = 4 bytes
  int dia, mês, ano;
  // 4 + 4 + 4 = 12 Bytes
} Data;

typedef struct {
  // 100 Bytes
  char categoria[100];
  // 100 Bytes
  char marca[100];
  // 12 + 12 = 24 Bytes
  Data validade, fabricação;
  // 100 + 100 + 24 = 224 Bytes.
} Produto;

int main() {

  printf("\t%zu Bytes\n\n", sizeof(int));
  printf("\t%zu Bytes\n\n", sizeof(Data));
  printf("\t%zu Bytes\n\n", sizeof(Produto));

  return 0;
}
