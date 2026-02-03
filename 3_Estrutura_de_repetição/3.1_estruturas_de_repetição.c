#include <stdio.h>
//#include <stdlib.h>

int main(){
    int i;

    /* ------ For ------ */
    // Útil para repetições com fim definido.
    // Incremento
    for (i = 0; i < 11; i++){
        printf("\t%d\n", i);
    }
    printf("\n");

    // Decremento
    for (i = 10; i > -1; i--){
    printf("\t%d\n", i);
    }
    printf("\n");

    // Diferente de 1 (Operadores de atribuição compostos)
    for (i = 0; i < 11; i+=5){
        printf("\t%d\n", i);
    }
    printf("\n");

    for (i = 10; i > -1; i-=5){
    printf("\t%d\n", i);
    }
    printf("\n");


    /* ------ While ------ */
    // Útil para repetições sem fim definido.
    // Os parâmetros de 'while' são verificados primeiramente antes do bloco de código ser executado.
    int x;

    printf("Digite um número entre 1 e 99: "); // Necessário, pois sem um valor inicial para a variável 'x', não tem como ocorrer uma verificação pelos parâmetros de 'while' abaixo.
    scanf("%d", &x);

    while (x < 1 || x > 99) { // Entra no loop se for inserido um valor inválido. E só sai do loop quando um valor não atender os parâmetros definidos.
        printf("Valor inválido! Digite um número entre 1 e 99: ");
        scanf("%d", &x);
    }
    printf("Valor inserido: %d. FIM!\n\n", x);


    /* ------ Do while ------ */
    /* Diferentemente de 'while', o 'do' executa primeiramente o bloco de códigos e depois verifica os parâmetros de 'while'. 
       para saber se deve ocorrer um novo loop. */
    int y;

    do {  
        printf("Digite um número entre 5 e 50: ");
        scanf("%d", &y);
    } while(y < 5 || y > 50);
    printf("Valor inserido: %d. FIM!\n\n", y);

    /*  IMPORTANTE!!! (sobre 'break;')
       
       'break;' também pode ser utilizado em estruturas de repetição para finalizar antes de chegar no fim de um loop. */
    
    return 0;
}
