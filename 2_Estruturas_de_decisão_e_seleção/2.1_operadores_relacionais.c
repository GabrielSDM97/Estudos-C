#include <stdio.h>
//#include <stdlib.h>

int main(){

    /* Em 'C' não temos o tipo booleano (True/False). 
       Em 'C', verdadeiro e falso é verificado desta maneira: 
       0 = Falso; 
       Qualquer outro número = Verdadeiro; */

    // Operadores: = (Atribuição), == (Igual), <= (Menor ou igual), >= (Maior ou igual), > (Maior), < (Menor), != (Diferente)

    printf("15 > 10: ----->\t %d\n\n", 15 > 10);
    printf("15 >= 10: ---->\t %d\n\n", 15 >= 10);
    printf("15 == 10: ---->\t %d\n\n", 15 == 10);
    printf("15 < 10: ----->\t %d\n\n", 15 < 10);
    printf("15 <= 10: ---->\t %d\n\n", 15 <= 10);
    printf("15 != 10: ---->\t %d\n\n", 15 != 10);
    return 0;
}
