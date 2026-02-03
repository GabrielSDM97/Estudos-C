#include <stdio.h>
//#include <stdlib.h> 

int main(){
    char sexo = 'a';

    printf("Digite seu sexo [M/F]: ");
    // Funciona exatamente como 'getchar()', ou seja, recebe apenas UM caractere do buffer de teclado.
    sexo = fgetc(stdin); // Além de funcionar exatamente como 'getc', funciona também com arquivos ('f' de file).
    printf("Sexo: %c\n\n", sexo);

    return 0;
}
