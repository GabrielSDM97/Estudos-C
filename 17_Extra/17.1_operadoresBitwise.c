/*
 * ========================================================================
 * AULA: OPERADORES BIT A BIT (BITWISE OPERATORS) EM C
 * ========================================================================
 * 
 * O que são operadores bit a bit?
 * Operadores bit a bit operam diretamente na representação binária (os 0s e 1s) de números 
 * inteiros. Em vez de fazer contas com o número inteiro, eles analisam e 
 * manipulam cada bit individualmente.
 * 
 * Para que servem?
 * São fundamentais para programação de baixo nível, sistemas embarcados, 
 * otimização de código e manipulação direta de hardware (usando máscaras de bits).
 * 
 * ------------------------------------------------------------------------
 * 1. AND Bit a Bit (&)
 * ------------------------------------------------------------------------
 * Compara cada bit. O resultado só é 1 se AMBOS os bits forem 1.
 * 
 * Exemplo: 7 & 4
 *   7 em binário: 111
 *   4 em binário: 100
 *   -----------------
 *   Resultado:    100 (que é 4 em decimal)
 * 
 * ------------------------------------------------------------------------
 * 2. OR Bit a Bit (|)
 * ------------------------------------------------------------------------
 * Compara cada bit. O resultado é 1 se PELO MENOS UM dos bits for 1.
 * 
 * Exemplo: 7 | 4
 *   7 em binário: 111
 *   4 em binário: 100
 *   -----------------
 *   Resultado:    111 (que é 7 em decimal)
 * 
 * ------------------------------------------------------------------------
 * 3. XOR Bit a Bit (^)
 * ------------------------------------------------------------------------
 * Compara cada bit. O resultado é 1 se os bits forem DIFERENTES (um 0 e um 1).
 * 
 * Exemplo: 7 ^ 4
 *   7 em binário: 111
 *   4 em binário: 100
 *   -----------------
 *   Resultado:    011 (que é 3 em decimal)
 * 
 * ------------------------------------------------------------------------
 * 4. NOT Bit a Bit (~)
 * ------------------------------------------------------------------------
 * Inverte todos os bits do número (0 vira 1, e 1 vira 0).
 * 
 * Exemplo: ~4
 *   4 em 32 bits: 00000000 00000000 00000000 00000100
 *   ~4 (invertido): 11111111 11111111 11111111 11111011
 *   Em decimal (usando complemento de 2), isso resulta em -5.
 * 
 * ------------------------------------------------------------------------
 * 5. Deslocamento à Esquerda (<<)
 * ------------------------------------------------------------------------
 * Move os bits para a esquerda, preenchendo os espaços vazios com 0.
 * Equivale a MULTIPLICAR o número por 2 elevado à potência do deslocamento.
 * 
 * Exemplo: 5 << 2
 *   5 em binário: 00000101
 *   Move 2 casas: 00010100
 *   Resultado: 20 (Pois 5 * 2^2 = 5 * 4 = 20)
 * 
 * ------------------------------------------------------------------------
 * 6. Deslocamento à Direita (>>)
 * ------------------------------------------------------------------------
 * Move os bits para a direita.
 * Equivale a DIVIDIR o número por 2 elevado à potência do deslocamento.
 * 
 * Exemplo: 16 >> 2
 *   16 em binário: 00010000
 *   Move 2 casas:  00000100
 *   Resultado: 4 (Pois 16 / 2^2 = 16 / 4 = 4)
 * 
 * ------------------------------------------------------------------------
 * ⚠️ REGRAS DE OURO E CURIOSIDADES
 * ------------------------------------------------------------------------
 * 1. NUNCA use operadores de shift (<<, >>) com números negativos.
 * 2. NUNCA desloque um valor maior ou igual ao tamanho do tipo (ex: >= 32 
 *    para um int de 32 bits). Isso gera "comportamento indefinido" no C!
 * 3. O XOR (^) é mágico para achar um número que aparece um número ímpar 
 *    de vezes em um array, pois x ^ x = 0 e x ^ 0 = x.
 * ========================================================================
 */

#include <stdio.h>

int main() {
    // Exemplos práticos para você compilar e ver a teoria funcionando:
    
    printf("--- Operadores Lógicos ---\n");
    printf("7 & 4  = %d\n", 7 & 4);   // Saída: 4
    printf("7 | 4  = %d\n", 7 | 4);   // Saída: 7
    printf("7 ^ 4  = %d\n", 7 ^ 4);   // Saída: 3
    printf("~4     = %d\n", ~4);      // Saída: -5
    
    printf("\n--- Operadores de Shift ---\n");
    printf("5 << 2 = %d\n", 5 << 2);  // Saída: 20
    printf("16 >> 2= %d\n", 16 >> 2); // Saída: 4
    
    printf("\n--- Aplicação do XOR (Achar o número ímpar) ---\n");
    // No array abaixo, 12 aparece 2x, 14 aparece 4x, e 90 aparece 1x (ímpar).
    int arr[] = {12, 12, 14, 90, 14, 14, 14};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int resultado = 0;
    
    for(int i = 0; i < tamanho; i++) {
        resultado ^= arr[i]; // Aplica XOR cumulativo
    }
    
    printf("O numero que aparece impar de vezes e: %d\n\n", resultado); // Saída: 90

    return 0;
}