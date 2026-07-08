#include <stdio.h>
//#include <stdlib.h>

/* Faça um programa que peça ao usuário um caractere e diga se é uma vogal ou uma
consoante.*/

int main() {
    char caractere;
    
    printf("Insira um caractere: ");
    scanf("%c", &caractere);
    printf("\n---- Estrutura de decisão ----\n"); 
    if (caractere == 'a' || caractere == 'A' || caractere == 'e' || caractere == 'E' || caractere == 'i' 
        || caractere == 'i' || caractere == 'o' || caractere == 'O' || caractere == 'u' || caractere == 'U')
        printf("%c é uma vogal!\n\n", caractere);
    else
        printf("%c é uma consoante!\n\n", caractere);


    printf("Insira um caractere: ");
    scanf(" %c", &caractere);
    printf("\n---- Estrutura de seleção ----\n");
    switch(caractere){
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("%c é uma vogal!\n\n", caractere);
        break;
    default:
        printf("%c é uma consoante!\n\n", caractere);
    }

    return 0;
}
