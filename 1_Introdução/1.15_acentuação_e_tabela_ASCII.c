#include <stdio.h> //'stdio' = standard input, output'; 
//#include <stdlib.h> //'stlib' = standard library';
#include <locale.h> // 'locale' = biblioteca de localização para programas multilíngue;
// '.h' indica que é um cabeçalho (header) que aponta para uma biblioteca.

int main() {
    // setlocale (LC_ALL, NULL); // Padrão da linguagem C
    // setlocale (LC_ALL, ""); // Padrão do sistema operacinal
    setlocale (LC_ALL, "Portuguese"); // Português Brasileiro
    printf("Coração, José, Antônio.\n\n");

    // Tabela ASCII (caracteres normais)
    int i;
    for (i = 32; i <= 126; i++){
        printf("%c, ", i);
    }
    printf("\n\n");

    return 0;
}
