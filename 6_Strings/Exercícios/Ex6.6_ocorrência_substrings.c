#include <stdio.h>
#include <string.h>

/*
    Faça um programa em C para contar as ocorrências de uma substring em uma string.
*/

int main() {
    char frase[100] = "AAAA";
    char substring[100] = "AAA";
    char *ponteiro = frase;
    int contador = 0;

    // Busca repetida pela substring
    while ((ponteiro = strstr(ponteiro, substring))) {
        printf("Depois_de_strstr: \t\t%s\n", ponteiro);
        contador++;
        ponteiro++; /* Avança 1 posição na memória, fazendo com que 'strstr()' busque uma nova combinação sequencial 
                       no restante da string que case com a 'substring'. Caso não encontre, retorna NULL e finaliza o loop. */
                    // Use 'ponteiro += strlen(substring)' se não quiser contar sobreposições.
        printf("Ponteiro_+1: \t\t\t%s\n", ponteiro);
    }

    printf("\nSubstring '%s' aparece %d vez(es) em '%s'.\n\n", substring, contador, frase);

    return 0;
}
