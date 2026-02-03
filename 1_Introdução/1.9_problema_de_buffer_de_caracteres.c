#include <stdio.h>
//#include <stdlib.h> 

int main(){
    char sexo;
    int idade;

    printf("Digite sua idade e sexo[F/M]: ");
    /* A máscara 'c%' entende qualquer input como caractere, até espaços (' ') ou caracteres de escape (/n, /t, etc...), ou seja,
    ao digitar, por exemplo '40 F', a variável idade receberá 40, porém sexo receberá ' ', já que, antes de F, 
    o buffer do teclado recebe o espaço em branco entre 40 e F. */
    scanf("%d%c", &idade, &sexo);
    printf("\nSexo: %c\nIdade: %d", sexo, idade);

    /* IMPORTANTE!! Sempre que o usuário aperta ENTER no terminal, é adicionado ao fim do buffer de teclado uma quebra de linha, ou seja, '/n'. */

    return 0;
}
