#include <stdio.h>
//#include <stdlib.h> 

int main() {

    // Trocar os valores de duas variáveis.
    int v1 = 4, v2 = 8, copiav1;

    copiav1 = v1;
    v1 = v2;
    v2 = copiav1;
    printf("v1: %d; v2: %d;\n\n", v1, v2);

    
    // Trocar os valores de duas variáveis sem usar uma variável auxiliar.
    int v3 = 3, v4 = 6;

    v3 = v3 + v4;
    v4 = v3 - v4;
    v3 = v3 - v4;
    printf("v3: %d; v4: %d;\n\n", v3, v4);

    return 0;
}
