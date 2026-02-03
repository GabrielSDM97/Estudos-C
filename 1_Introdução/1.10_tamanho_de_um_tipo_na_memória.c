#include <stdio.h>
//#include <stdlib.h> 

/* 
    
--------------- Tamanho de dados ---------------
        
        1 bit
        8 bits = 1 byte
        1024 bytes = 1 Kilobytes
        1024 Kilobytes/KB = 1 Megabyte
        1024 Megabytes/MB = 1 Gigabyte
        1024 Gygabytes/GB = 1 Terabyte
        1024 Terabytes/TB = 1 Petabyte
        1024 Petabytes/PB = 1 Exabyte
        1024 Exabytes/EB = 1 Zettabyte
        1024 Zettabytes/ZB = 1 Yottabyte
    
*/


/* 
    Como descobrir o tamanho em memória de cada tipo de dado com o operador sizeof?
    
    'sizeof x'; Onde 'x' é uma variável.
    'sizeof(tipo)'; Substituo a palavra 'tipo' por um tipo de dado cuja quantidade de memória quero descobrir. 
*/

int main (){
    char teste1 = 'A';
    int teste2 = 123;
    float teste3 = 1.5;
    double teste4 = 1.54912;

    /* É possível utilizar a máscara '%d', já que o resultado de 'sizeof' é um número inteiro, porém alguns erros podem acontecer.
    Para evitar isso, utilize '%zu' quando for retornar valores de 'sizeof'. */

    // %zu - espera um valor 'long unsigned int' ou 'size_t' que é justamente o que é gerado com o parâmetro 'sizeof'.

    printf("\tchar: %zu\n\n", sizeof(char));
    printf("\tint: %zu\n\n", sizeof(int));
    printf("\tfloat: %zu\n\n", sizeof(float));
    printf("\tdouble: %zu\n\n", sizeof(double));
    printf("\t~~~~~~~~~~~~~~~~~~\n");
    printf("\tVariável char: %zu\n\n", sizeof teste1);
    printf("\tVariável int: %zu\n\n", sizeof teste2);
    printf("\tVariável float: %zu\n\n", sizeof teste3);
    printf("\tVariável double: %zu\n\n", sizeof teste4);

    return 0;
}
