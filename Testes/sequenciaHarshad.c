#include <stdio.h>

int main(){

    int limiteSequência, somaDígitos, número = 1, cópiaNúmero;
    
    printf("Digite um número: ");
    scanf("%d", &limiteSequência);

    while (número <= limiteSequência) {
        cópiaNúmero = número;
        somaDígitos = 0;
        while (cópiaNúmero > 0) {
            somaDígitos += cópiaNúmero % 10;
            cópiaNúmero /= 10;
        }
        if (número % somaDígitos == 0) {
            printf("%d;\n", número);
        }
        número++;
    }

    return 0;
}
