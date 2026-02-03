#include <stdio.h>
//#include <stdlib.h>

int main(){
    int mês = 1;

    switch(mês){ // Deve ser uma variável de tipo inteiro. Não funciona com tipo float.
    case 1:
        printf("Janeiro\n\n");
        break;
    case 2:
        printf("Fevereiro\n\n");
        break;
    default: // Quando nenhum do casos forem satisfeitos
        printf("Valor inesperado!\n\n");
    }


    // Utilizando caracteres
    char opção = 'a';

    switch(opção){
    case 'a':
        printf("Ver saldo\n\n");
        break;
    case 'b':
        printf("Sacar quantia\n\n");
        break;
    default: // Quando nenhum do casos forem satisfeitos
        printf("Opção inválida!\n\n");
    }

    /* 
       IMPORTANTE!!! (sobre 'break;')
       
       'break;' encerra a estrutura 'switch' caso o valor definido em 'case' seja satisfeito.

       Caso um 'case' seja satisfeito, e nele não tenha um 'break;', a partir dele, todos os 'cases' subsequentes serão executados 
       até chegar no fim da estrutura 'switch', ou até encontrar um 'break;' em algum dos 'cases' subsequentes.
    */

    return 0;
}
