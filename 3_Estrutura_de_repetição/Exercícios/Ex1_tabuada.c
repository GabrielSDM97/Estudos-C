#include <stdio.h>
//#include <stdlib.h>

    /*
        Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e
        apresentar a tabuada.
    */

int main(){
    int multiplicador;
    
    printf("Insira um número para fazer uma tabuada: ");
    scanf("%d", &multiplicador);

    for (int multiplicando = 1; multiplicando <= 10; multiplicando++){
        printf("%d x %d = %d\n", multiplicador, multiplicando, multiplicador * multiplicando);
    }
}
