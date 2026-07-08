#include <stdio.h>

// 1. COMPILAÇÃO
// É necessário compilar o código gerando um executável (ex: gcc programa.c -o main).

// 2. EXECUÇÃO
/* Rode o executável pelo terminal passando os argumentos separados por espaço.
   Exemplo: ./main string1 string2 etc... */

// 3. PARÂMETROS DA MAIN
/* 3.1 int argc (Argument Count): Inteiro que indica a QUANTIDADE TOTAL de argumentos.
   ATENÇÃO: Ele sempre inclui o próprio nome do programa na contagem.
   3.2 char *argv[] (Argument Vector): Array de ponteiros para char (matriz de strings).
   Cada posição guarda o primeiro endereço de memória de cada palavras digitada no
   terminal. */

int main(int argc, char *argv[]) {
  int i;

  printf("Quantidade: %d\n", argc);

  /* O índice 0 (argv[0]) armazena o nome ou caminho do próprio executável.
     Iniciar o loop em i = 1 é o correto para ignorar o nome do programa
     e processar apenas os argumentos reais fornecidos através do terminal. */
  for(i = 1; i < argc; i++)
    printf("%dª String: %s\n", i, argv[i]);
    
  return 0;
}
