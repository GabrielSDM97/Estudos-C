#include <stdio.h>
//#include <stdlib.h>

/* Crie um programa que permita ao usuário escolher entre fazer a conversão cambial de
Real para Dólar ou de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30. */

int main() {
    float real, dolar;
    int escolha;

    printf("Conversão: [1] R$ para $; [2] $ para R$? ");
    scanf("%d", &escolha);
    printf("\n---- Estrutura de decisão ----\n");
    if (escolha == 1) {
        printf("R$");
        scanf("%f", &real);
        printf("$%.2f\n\n", real/5.30);
    } else if (escolha == 2) {
        printf("$");
        scanf("%f", &dolar);
        printf("R$%.2f\n\n", dolar*5.30);
    } else
        printf("Opção incorreta!\n\n");


    printf("Conversão: [1] R$ para $; [2] $ para R$? ");
    scanf("%d", &escolha);
    printf("\n---- Estrutura de seleção ----\n"); 
    switch(escolha) {
        case 1:
            printf("R$");
            scanf("%f", &real);
            printf("$%.2f\n\n", real/5.30);
            break;
        case 2:
            printf("$");
            scanf("%f", &dolar);
            printf("R$%.2f\n\n", dolar*5.30);
            break;
        default:
            printf("Opção incorreta!\n\n");
    }

    return 0;
}
