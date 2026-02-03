#include <stdio.h>
//#include <stdlib.h>

/* Escreva um programa em C que leia um número e informe se ele é divisível por 2, por
3 ou por 5. */

/* Leia um número e informe se ele é divisível por 2, por 3 e por 6. */

int main(){
    int num;
    
    printf("Informe um número: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d é divisível por 2\n", num);
    else
        printf("%d não é divisível por 2\n", num);

    if (num % 3 == 0)
        printf("%d é divisível por 3\n", num);
    else
        printf("%d não é divisível por 3\n", num);

    if (num % 5 == 0)
        printf("%d é divisível por 5\n", num);
    else
        printf("%d não é divisível por 5\n", num);

    if (num % 2 == 0 && num % 3 == 0 && num % 6 == 0) 
        printf("%d é divisível por 2, 3, e 6\n\n", num);
    else
        printf("%d não é divisível por 2, 3 e 6\n\n", num);

}
