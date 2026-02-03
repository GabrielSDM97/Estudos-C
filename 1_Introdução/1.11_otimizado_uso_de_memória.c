#include <stdio.h>
//#include <stdlib.h>

// O tipo primitivo 'short' (2 bytes) ocupa metade do espaço na memória que 'int' (4 bytes).

int main(){
    short idade = 10;
    printf("Idade: %d\nEspaço da memória: %zu bytes\n\n", idade, sizeof idade);

    return 0;
}
