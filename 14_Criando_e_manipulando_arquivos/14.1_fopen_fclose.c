#include <stdio.h>

/*
  -- Modos de abertura de arquivo de texto --
  w = Escrita (cria o arquivo caso ele não exista)
  r = Leitura
  a = Anexar (adicoinar informação ao final de um arquivo que já existe)
  w+ = Escrita (reescreve arquivo caso já exista) + Leitura
  r+ = Leitura + Escrita
  a+ = Escrita (ao final do arquivo) + Leitura
*/

int main() {

  // FILE é o tipo de dado para arquivos.
  // A variável deverá ser um ponteiro, já que o conteúdo será acessado através do endereço do arquivo.
  // A função "fopen(nomeArquivo, modo)" serve para criar/abrir um arquivo e retornar o endereço dele na memória.
  FILE *cadastros = fopen("ArquivoDeTexto.txt", "w");

  if (cadastros) {
    printf("Arquivo criado com sucesso!\n\n");

    // Fecha arquivo
    fclose(cadastros);
    
  } else
    printf("ERRO! Arquivo não foi criado.");

  return 0;
}