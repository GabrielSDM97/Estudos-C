#include <stdio.h>
//#include <stdlib.h>

/* O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa
(em kg) pela altura (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia
o peso e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra
de cordo com a tabela abaixo: */

int main(){
    float peso, altura, imc;
    
    printf("Digite seu peso em kilos e sua altura em metros, exemplo -> 90 1.8: ");
    scanf("%f%f",&peso ,&altura);
    imc = peso/(altura*altura);
    printf("IMC = %.1f -> ", imc);
    
    if (imc < 18.5)
        printf("Abaixo do peso!\n\n");
    else if (imc < 25)
        printf("Peso normal!\n\n");
    else if (imc < 30)
        printf("Acima do peso!\n\n");
    else if (imc < 35)
        printf("Obesidade grau I!\n\n");
    else if (imc < 40)
        printf("Obesidade grau II!\n\n");
    else if (imc >= 40)
        printf("Obesidade grau III!\n\n");
                       
    return 0;
}
