#include <stdio.h>
//#include <stdlib.h> 

/* 
    Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que
    solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser
    paga, sabendo que são descontados 8% para imposto de renda. 
*/

int main(){
    int qtdDias; 
    float valorLíquido;
    
    printf("Dias de contratação: "); 
    scanf("%d", &qtdDias);
    valorLíquido = qtdDias * 45 * 0.92;
    printf("Valor a ser pago: R$%.2f\n\n", valorLíquido);

    return 0;
}
