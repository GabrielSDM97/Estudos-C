#include <stdio.h>

typedef struct {
  char nome[100];
  int idade;
} Pessoa;

int main() {
  FILE *arquivo = fopen("ArquivoBinário.txt", "rb");
  Pessoa registro;
  int continuar, retorno;

  if (arquivo) {
    /* A função "fread" lê dados binários do arquivo, fazendo o processo inverso
       do "fwrite". Ela copia exatamente os bytes do disco para a memória, sem
       nenhuma conversão.
       
       Parâmetros:
       1º (&registro): Endereço de memória para onde copiar os dados
       2º (sizeof(Pessoa)): Quantidade de bytes de cada elemento a ser lido
       3º (1): Quantidade de elementos a serem lidos (neste caso, 1 struct)
       4º (arquivo): Ponteiro do arquivo de origem
       
       Retorno: A função retorna a quantidade de elementos lidos com sucesso,
       ou retorna 0 quando não conseguiu ler nada (fim do arquivo ou erro).
       
       O loop "while" continua enquanto o retorno for diferente de 0, ou seja,
       enquanto conseguir ler structs do arquivo. */
    while ((retorno = fread(&registro, sizeof(Pessoa), 1, arquivo)))
      printf("\tRetorno: %d Nome: %s Idade: %d\n", retorno, registro.nome, registro.idade);
    fclose(arquivo);
  } else
    printf("ERRO! Arquivo não foi criado.");

  return 0;
}