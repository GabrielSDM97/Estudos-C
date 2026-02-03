#include <stdio.h>
//#include <stdlib.h> 

int main() {
    char caractere;

    printf("\n\nInsira UM caractere: ");
    caractere = getchar(); // Lê apenas UM caractere do buffer de teclado. Se inserido mais de um caractere, o segundo em diante fica no buffer de teclado.
    printf("\nValor ASCII do caractere %c: %d\n\n", caractere, caractere); // Ao utilizar a máscara '%d' retornando valores de 'getchar()', é retornado o código ASCII do caractere inserido.

    printf("Letra g: %c\n\n", 103); // É possível imprimir um caractere utilizando a máscara '%c' juntamente com o código ASCII dele nos parâmetros de 'printf'.
    printf("Letra g: %d\n\n", 'g'); // O inverso também é possível, utilizando a máscara '%d' para imprimir o código ASCII de um caracatere nos parâmetros de 'printf'.

    return 0;
}