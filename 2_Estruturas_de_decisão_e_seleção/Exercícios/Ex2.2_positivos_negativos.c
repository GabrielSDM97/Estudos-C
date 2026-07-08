#include <stdio.h>
//#include <stdlib.h>

/* Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos
destes valores são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de
números negativos e positivos. */

int main(){
    int num, contador_positivo, contador_negativo;
    contador_positivo = 0;
    contador_negativo = 0;

    printf("Digite o 1º número: ");
    scanf("%d", &num);
    if (num > 0)
        contador_positivo++;
    else if (num < 0)
        contador_negativo++;
    
    printf("Digite o 2º número: ");
    scanf("%d", &num);
    if (num > 0)
        contador_positivo++;
    else if (num < 0)
        contador_negativo++;

    printf("Digite o 3º número: ");
    scanf("%d", &num);
    if (num > 0)
        contador_positivo++;
    else if (num < 0)
        contador_negativo++;

    printf("Digite o 4º número: ");
    scanf("%d", &num);
    if (num > 0)
        contador_positivo++;
    else if (num < 0)
        contador_negativo++;

    printf("Digite o 5º número: ");
    scanf("%d", &num);
    if (num > 0)
        contador_positivo++;
    else if (num < 0)
        contador_negativo++;

    printf("\nQuantidade positivos: %d; \nQuantidade negativos: %d;\n\n", contador_positivo, contador_negativo);

    return 0;
}
