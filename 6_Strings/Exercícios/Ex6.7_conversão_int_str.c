#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa para converter um número em texto na linguagem C.
*/

int main() {

    // ---- Inteiro para String ----
    // Inteiro a ser convertido.
    int númeroInt = 894723641;
    // Buffer que receberá a string resultante.
    char númeroStr[10];

    snprintf(númeroStr, sizeof(númeroStr), "%d", númeroInt);
    /* Converte inteiro (ou qualquer outro tipo primitivo) em string.
       É mais seguro que 'sprintf' pois limita a quantidade de caracteres que o buffer irá receber, evitando overflow. */
    // 1º parâmetro: array que receberá a string (númeroStr).
    // 2º parâmetro: tamanho limite da array (tamanho [10] definido na array 'númeroStr').
    // 3º parâmetro: máscara referente ao tipo da variável de entrada ("%d").
    // 4º parâmetro: variável de entrada ('númeroInt').
    printf("O inteiro %d convertido para string é: %s\n\n", númeroInt, númeroStr);


    // ---- String para Inteiro ----
    // String a ser convertida.
    char texto[10] = {"894723641"};
    // Ponteiro que receberá o endereço do primeiro caractere NÃO convertido pela 'strtol'.
    char *ponteiro;

    // Variável que receberá os números inteiros.
    long número = strtol(texto, &ponteiro, 10); 
    // Converte a string "texto", retornando o valor convertido como tipo "long int": 
    // 1º parâmetro: string de origem (texto).
    // 2º parâmetro: endereço de um ponteiro (&ponteiro). Após a conversão, "ponteiro" apontará para o fim da string ('\0').
    // 3º parâmetro: base numérica (10 = decimal; poderia ser 2, 8, 16, etc.).
    printf("A string %s convertida para inteiro é: %ld\n\n", texto, número);

    return 0;
}
