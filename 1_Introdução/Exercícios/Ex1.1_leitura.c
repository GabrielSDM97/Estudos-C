#include <stdio.h>
//#include <stdlib.h> 

// Ler do teclado sexo, idade, peso e altura do usuário.

int main() {
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite seu sexo[M/F], idade, peso e altura: ");
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
    printf("Sexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n\n", sexo, idade, peso, altura);

    return 0;
}
