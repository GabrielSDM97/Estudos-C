#include <stdio.h>
//#include <stdlib.h>

/* Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês.
Utilize para isso a estrutura de decisão e depois utilizando a estrutura de seleção.
Obs.: Considere fevereiro como tendo 28 dias. */

int main() {
    int mês;
    
    
    printf("Digite um número referente a um mês, exemplo -> [1] Janeiro: ");
    scanf("%d", &mês);
    printf("\n---- Estrutura de decisão ----\n"); 
    if (mês == 1 || mês == 3 || mês == 5 || mês == 7 || mês == 8 || mês == 10 || mês == 12)
        printf("Esse mês tem 31 dias");
    else if (mês == 4 || mês == 6 || mês == 9 || mês == 11)
        printf("Esse mẽs tem 30 dias"); 
    else if (mês == 2)
        printf("Fevereiro tem 28 dias");
    else
        printf("Mês inválido");
    printf(".\n------------------------------\n\n");


    printf("Digite um número referente a um mês, exemplo -> [1] Janeiro: ");
    scanf("%d", &mês);
    printf("\n---- Estrutura de seleção ----\n");
    switch (mês){
    case 1: 
    case 3:  
    case 5:  
    case 7:  
    case 8:  
    case 10:  
    case 12:
        printf("Esse mês tem 31 dias");
        break;
    case 4: 
    case 6: 
    case 9: 
    case 11:
        printf("Esse mês tem 30 dias");
        break;     
    case 2:
        printf("Fevereiro tem 28 dias");
        break;
    default:
        printf("Mês inválido");
    }
    printf(".\n------------------------------\n\n");

    return 0;
}
