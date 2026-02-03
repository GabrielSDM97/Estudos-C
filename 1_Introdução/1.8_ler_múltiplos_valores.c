#include <stdio.h>
//#include <stdlib.h> 

int main(){
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite seu sexo [M/F], idade, peso, e altura: ");
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura); // É possível ler múltiplos valores com um único 'scanf'.
    printf("\nSexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);

    /* DICA! Você pode inserir os dados em uma linha só aplicando um espaço entre cada valor! */
    
    return 0;
}
