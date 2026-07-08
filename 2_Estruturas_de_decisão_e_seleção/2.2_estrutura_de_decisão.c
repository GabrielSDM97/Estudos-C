#include <stdio.h>
//#include <stdlib.h>

int main(){

    // DICA: As chaves '{ }' são opcionais SE tiver apenas uma instrução dentro de uma condicional, EXEMPLO:
    if('x') // Como podemos ver, qualquer coisa diferente de '0' será verdadeiro, até mesmo 0.0001 ou um caractere.
      printf("Verdadeiro\n\n");
    else
      printf("Falso\n\n");
    // A regra das chaves citada acima se aplica também para estruturas de repetição (for, while, etc...).


    // Estrutura encadeada (if...else if...else) e aninhada (if dentro de if)
    int n = 0;
    if(n < 0){ // Se
        printf("O número %d é negativo e ", n);
        if(n < -100)
            printf("é menor que -100!\n\n");
        else
            printf("é igual ou maior que -100!\n\n");
    } 
    else if (n == 0) // Senão se
        printf("0 é neutro!\n\n");
    else { // Senão
        printf("O número %d é positivo e ", n);
        if(n < 100)
            printf("é menor que 100!\n\n");
        else
            printf("é igual ou maior que 100!\n\n");
    }


    // Os operadores lógicos de 'C' seguem a lógica da TABELA VERDADE.

    // Negação - !() (não)
    printf("Negação - ");
    if(!(15 > 10)) // ~(15 > 10 = 1) = 0
        printf("Verdadeiro\n\n");
    else
        printf("Falso\n\n");

    // Conjunção = && (e)
    printf("Conjunção - ");
    if(15>10 && 5>10) // 0 ^ 1 = 0
        printf("Verdadeiro\n\n");
    else
        printf("Falso\n\n");
    
    // Disjunção = || (ou)
    printf("Disjunção - ");
    if(15>10 || 5>10) // 1 v 0 = 1
        printf("Verdadeiro\n\n");
    else
        printf("Falso\n\n");


    /* 
    -- Diferença entre um e dois 'Es' comerciais = && e & --
    
    && = Conjunção
    & = Endereçamento
    */


    // Operador Ternário
    //      Se                               Senão                  
    10 < 15 ? printf("Verdadeiro\n\n") : printf("Falso\n\n");

    // Operador Ternário Aninhado (Não é recomendado, já que a legibidade fica ruim)
    int x = 0;
    //    Se                           Senão se                                  Senão
    x > 0 ? printf("Positivo\n\n") : x < 0 ? printf("Negativo\n\n") : printf("Neutro\n\n");

    return 0;
}
