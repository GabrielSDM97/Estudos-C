#include <stdio.h>
//#include <stdlib.h>

// Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.

int main(){

    int valor1, valor2, valor3, maior, menor;

    printf("Digite 3 valores: ");
    scanf("%d%d%d", &valor1, &valor2, &valor3);
    
    if (valor1 > valor2 && valor1 > valor3)
        maior = valor1;
    else if (valor2 > valor1 && valor2 > valor3)
        maior = valor2;
    else
        maior = valor3;

    if (valor1 < valor2 && valor1 < valor3)
        menor = valor1;
    else if (valor2 < valor1 && valor2 < valor3)
        menor = valor2;
    else
        menor = valor3;


    printf("Maior valor:%d\nMenor valor:%d\n\n", maior, menor);

    return 0;
}
