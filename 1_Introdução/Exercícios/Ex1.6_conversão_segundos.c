#include <stdio.h>
//#include <stdlib.h> 

/*
    Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela
    a conversão para horas, minutos e segundos.
*/

int main() {
    
    /*
    // Minha resolução
    int segundos, minutos, horas;

    printf("Segundos: ");
    scanf("%d", &segundos);
    minutos = segundos/60;
    horas = minutos/60;
    printf("\t%d:%d:%d\n\n", horas, minutos-(60*horas), segundos-(60*minutos));*/

    // Resolução do professor
    int segundos, minutos, horas, resto;

    printf("Segundos: ");
    scanf("%d", &segundos);
    horas = segundos/3600;
    resto = segundos%3600;
    minutos = resto/60;
    segundos = resto%60;

    printf("\t%d:%d:%d\n\n", horas, minutos, segundos);

    return 0;
}
