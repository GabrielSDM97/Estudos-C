#include <stdio.h>
//#include <stdlib.h>

// Conversão de tipos (Casting)

int main(){
    printf("Resultado: %d\n\n", (int)(10.5/3.2)); // Imprime apenas a parte inteira do resultado da operação.
    // Em máscara de números reais, se todos os valores de uma operação forem inteiros, o resultado será 0.
    // Para resolver isso, coloque pelo menos um valor da operação com casas decimais, ou utilize (float) em pelo menos um dos valores da operação.
    printf("Opção 1: %.2f\n\n", 10.0/3);
    printf("Opção 2: %.2f\n\n", (float)10/3);

    return 0;
}