#include <stdio.h>
//#include <stdlib.h> 

int main(){
    char a, b;

    printf("Digite UM caractere: ");
    scanf("%c%c", &a, &b);
    /* Se for digitado apenas um caractere, por exemplo, 'x', e depois apertar ENTER, a variável 'b' receberá '\n', ou seja, 
    resultará em uma quebra de linha em '%c' e no código ASCII '10' em '%d'. */
    printf("\n\ta = %c\n\tb = %c", a, b);
    printf("\n\ta = %d\n\tb = %d\n\n", a, b);

    printf("--- Pressione ENTER para continuar ---\n");
    getchar(); // Utilizar 'getchar()' é uma maneira de limpar o último caractere registrado no buffer de teclado.

    /* Outra maneira de resolver isso é adicionando um espaço antes de uma máscara '%c', 
    fazendo com que o programa ignore qualquer espaço ou quebra de linha antes de inserir um novo valor. */
    printf("Digite DOIS caracteres: ");
    scanf("%c %c", &a, &b);
    /* ou
    scanf("%c", &a);
    getchar();
    scanf("%c", &b); */
    printf("\n\ta = %c\n\tb = %c", a, b);
    printf("\n\ta = %d\n\tb = %d\n\n", a, b);

    // Utilize qualquer uma das duas formas de resolver o problema de buffer de teclado dependendo da situação.

    return 0;
}
