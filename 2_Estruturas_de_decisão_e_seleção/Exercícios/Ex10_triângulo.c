#include <stdio.h>
//#include <stdlib.h>

/*
    Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os
    comprimentos dos lados de um triângulo. Caso positivo, seu programa deve informar também se o
    triângulo é equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a
    mensagem “Não formam um triângulo”. 
*/

int main(){
    float a, b, c;

    printf("Reta 1, 2 e 3: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("\nAs medidas a:%.2f b:%.2f c:%.2f ", a, b, c);
    if (a+b>c && a+c>b && b+c>a) {
        printf("formam um triângulo ");
        if (a==b && a==c)
            printf("equilátero.");
        else if (a==b || b==c || a==c)
            printf("isósceles.");
        else
            printf("escaleno.");
    }
    else   
    printf("não formam um triângulo!");
    printf("\n\n");

    return 0;
}
