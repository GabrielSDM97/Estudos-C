#include <stdio.h>
//#include <stdlib.h> 

// Variável é uma pequena porção da memória RAM (memória principal) que será utilizada para alocar temporariamente um dado.

int main() {
    
    // tipo nome = valor, nome = valor, etc...;
    int idade;
    float peso = 60.5, altura;

    printf("Sua idade: ");
    scanf("%d", &idade);
    // O operador '&' obtém o endereço de memória da variável 'idade'.
    // 'scanf' usa esse endereço para armazenar o valor digitado pelo usuário.

    printf("Sua altura: ");
    scanf("%f", &altura);

    printf("Sua idade é %d, seu IMC é %.0f!\n\n", idade, peso/(altura * altura));

    return 0;
}
