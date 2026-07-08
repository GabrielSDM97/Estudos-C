#include <stdio.h>
//#include <stdlib.h>

/*
    Um usuário deseja um programa onde possa escolher que tipo de média deseja
    calcular a partir de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo
    usuário e calcule a apresente a média:
    Opções:
    • ‘a’ – Aritmética.
    • ‘p’ – Ponderada (pesos: 3,3,4). 
*/

int main(){
    char opção_média;
    float nota1, nota2, nota3;

    printf("Deseja ver a média aritmética [a] ou ponderada [p]?: ");
    scanf("%c", &opção_média);
    printf("\n");

    if (opção_média == 'a' || opção_média == 'A' || opção_média == 'p' || opção_média == 'P') {
        
        printf("Insira 3 notas: ");
        scanf("%f%f%f", &nota1, &nota2, &nota3);
        printf("---- Estrutura de decisão ----\n");
        if (opção_média == 'a' || opção_média == 'A')
            printf("Média aritmética: %.1f", (nota1 + nota2 + nota3)/3);
        else
            printf("Média ponderada: %.1f", (nota1*3 + nota2*3 + nota3*4) / 10);
        printf("\n------------------------------\n\n");

        printf("Insira 3 notas: ");
        scanf("%f%f%f", &nota1, &nota2, &nota3);
        printf("---- Estrutura de seleção ----\n");
        switch(opção_média) {
        case 'a':
        case 'A':
            printf("Média aritmética: %.1f", (nota1 + nota2 + nota3)/3);
            break;
        default:
            printf("Média ponderada: %.1f", (nota1*3 + nota2*3 + nota3*4) / 10);
        }
        printf("\n------------------------------\n\n");
    } 
    else
        printf("Opção incorreta!");

    return 0;
}
