#include <stdio.h>
//#include <stdlib.h> 

int main(){
    char sexo;

    printf("Digite seu sexo [M/F]: ");
    // Funciona exatamente como 'getchar()', ou seja, recebe apenas UM caractere do buffer de teclado.
    sexo = getc(stdin); // 'stdin = standard input'. Recebe valor do buffer do teclado (dado inserido pelo terminal).
    printf("Sexo: %c\n\n", sexo);

    return 0;
}
