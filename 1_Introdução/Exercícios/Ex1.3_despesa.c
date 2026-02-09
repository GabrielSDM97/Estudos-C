#include <stdio.h>
//#include <stdlib.h> 

/*
    Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta
    (em porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve
    pagar. Assuma que a conta será dividida igualmente.
*/

int main() {
    float despesa;
    int gorjeta, numPessoas;

    printf("Despesa, Gorjeta (Em porcentagem), e Pessoas para dividir a despesa: ");
    scanf("%f%d%d", &despesa, &gorjeta, &numPessoas);
    despesa += despesa * gorjeta / 100;
    printf("\nCada uma das %d pessoas deve pagar R$%.2f!\n\n", numPessoas, despesa/numPessoas);

    return 0;
}
