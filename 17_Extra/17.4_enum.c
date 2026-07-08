#include <stdio.h>

/* O 'enum' (enumeration) é um tipo de dado definido pelo usuário que cria
   um conjunto de constantes inteiras nomeadas.

   O principal objetivo do enum é substituir valores soltos no código
   por nomes descritivos, tornando o código muito mais legível e fácil
   de manter. Usando mêses como exemplo, em vez de usar 1, 2, 3,
   passariamos a usamos Janeiro, Fevereiro, Março. */

// Sintaxe: enum identificador { elemento1, elemento2, ... };
enum mêsA {
  /* Por padrão, o compilador atribui valores inteiros sequenciais começando do 0.
  No entanto, podemos definir um valor inicial customizado fazendo com que os 
  elementos seguintes continuem a sequência a partir desse novo valor. 
  Ex: Janeiro = 1, então Fevereiro será automaticamente 2. */
  Janeiro = 1,
  Fevereiro
};

/* Assim como em struct, o 'typedef' permite criar um alias (um nome
alternativo/apelido) para o enum */
typedef enum {
  Março = 3,
  Abril
} mêsB;

// Função de enum
enum mêsA funçãoMês1(enum mêsA mês) {
  printf("--> %d\n", mês);
  return mês;
}

// Função de enum apelidado (typedef)
mêsB funçãoMês2(mêsB mês) {
  printf("--> %d\n", mês);
  return mês;
}

int main() {
  int opção;
  printf("Digite um mês: ");
  scanf("%d", &opção);
   
  /* Abaixo, em vez de utilizar números fixos e sem contexto,
  como case 1:, case 2:), o que dificultaria a leitura e a manutenção,
  utilizamos as constantes nomeadas do enum (case Janeiro:, case
  Fevereiro:), tornando o código autoexplicável. Qualquer pessoa que ler
  saberá exatamente o que cada caso representa. */
  switch (opção) {
    case Janeiro: // Equivale a case 1:
      printf("--> Janeiro\n\n");
      break;
    case Fevereiro: // Equivale a case 2:
      printf("--> Fevereiro\n\n");
      break;
    default:
      printf("--> Mês inválido...\n\n");
    }

    printf("MêsA: %d\n", funçãoMês1(Fevereiro));
    printf("MêsB: %d\n\n", funçãoMês2(Abril));
    
  return 0;
}