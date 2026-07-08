#include <stdio.h>

/*
  -- Modos de abertura de arquivo binário --
  wb = Escrita (cria o arquivo caso ele não exista)
  rb = Leitura
  ab = Anexar (adicoinar informação ao final de um arquivo que já existe)
  wb+ = Escrita (reescreve arquivo caso já exista) + Leitura
  rb+ = Leitura + Escrita
  ab+ = Escrita (ao final do arquivo) + Leitura
*/

/*
   Arquivos binários armazenam dados no mesmo formato da memória RAM (bytes
   brutos), sem conversão para caracteres legíveis. Isso torna a leitura e
   escrita muito mais rápidas, pois não há necessidade de converter números
   em texto (ex: o número 12345 vira "12345" em texto, mas em binário é
   armazenado diretamente como 4 bytes). A desvantagem é que o arquivo não
   pode ser aberto e lido facilmente em editores de texto como Bloco de Notas.
   Use arquivos binários quando precisar de performance ou quando o arquivo
   for usado apenas pelo seu programa.
*/

typedef struct {
  char nome[100];
  int idade;
} Pessoa;

int main() {
  FILE *arquivo = fopen("ArquivoBinário.txt", "wb");
  Pessoa registro;
  int continuar;

  if (arquivo) {
    printf("Arquivo criado com sucesso!\n\n");
    do {
      printf("Digite um nome e idade: ");
      scanf("%s%d", registro.nome, &registro.idade);
      getchar();
      /* A função "fwrite" grava dados binários no arquivo. Ela copia exatamente
        os bytes da memória para o disco, sem nenhuma conversão.

        Parâmetros:
        1º (&registro): Endereço de memória de onde copiar os dados
        2º (sizeof(Pessoa)): Quantidade de bytes de cada elemento (neste caso,
        o tamanho total da struct: 100 bytes do nome + 4 bytes do int = 104
        bytes)
        3º (1): Quantidade de elementos a gravar (neste caso, 1 struct)
        4º (arquivo): Ponteiro do arquivo de destino. */
      fwrite(&registro, sizeof(Pessoa), 1, arquivo);
      printf("Deseja cadastrar mais um registro? ");
      scanf("%d", &continuar);
    } while (continuar);
    fclose(arquivo);
  } else
    printf("ERRO! Arquivo não foi criado.");

  return 0;
}