#include <stdio.h>
//#include <stdlib.h>

/* 

~~~~~~~ Tipos de variáveis ~~~~~~~~~~~~~~~~~~~~~~~~ Intervalo ~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                            (signed)                     (unsigned)
    char - caractere (1 byte)   | -128 a 127                     |  0 a 255 
    short - inteiro (2 bytes)   | -32.768 a 32.767               |  0 a 65.535 
    int - inteiro (4 bytes)     | -2.147.483.648 a 2.147.483.647 | 	0 a 4.294.967.295
    float - real (4 bytes)      | ~6-7 dígitos                   |
    double - real (8 bytes)     | ~15-16 dígitos                 |

Variáveis de valores inteiros vêm, por padrão, 'signed'.

*/

int main(){
    /* 
    Quando um valor excede o limíte do intervalo do tipo de uma variável na memória, ocorre o chamado 'overflow'. 
    O valor que retorna de um overflow sempre será negativo.
    */

    // --------------------- Números inteiros ---------------------
    // Exemplo
    int n1 = 2147483647, n2 = 1, resultado1 = n1+n2;
    printf("n1 = %d\nn2 = %d\nresultado1 = %d\n\n", n1, n2, resultado1); 

    // Um 'long int' totaliza 4 bytes, ou seja, em 'int' isso não faria diferença, já que 'int' já tem 4 bytes. Já 'long long int' tem 8 bytes.
    long long int n4 = 2147483647, n5 = 1, resultado2 = n4+n5;
    // A máscara de inteiro '%d' que mostrará o valor de uma variável com 'long long' deverá ter o prefixo 'll', ficando assim: 'lld%.
    printf("n4 = %lld\nn5 = %lld\nresultado2 = %lld\n\n", n4, n5, resultado2); 


    // --------------------- Números reais ---------------------
    // 'double' tem 8 bytes. Já 'long double', 16 bytes.
    // Exemplo
    long double x = 3.141519;
    /* --------------- Máscaras de valores reais ---------------
       '%lf' = máscara que imprime números reais do tipo 'double'.
       '%Lf' = máscara que imprime números reais do tipo 'long double'.
       '%Le' = máscara que imprime números reais do tipo 'long double' com notação científica. 
    */
    printf("Tamanho: %zu bytes\nValor: %.2Lf\n\n", sizeof x, x);

    // No compilador MinGW-w64 (compilador utilizado no Windows), é necessário utilizar '__mingw__printf("...")' quando for utilizar '%Lf' ou '%Le'.

    return 0;
}
