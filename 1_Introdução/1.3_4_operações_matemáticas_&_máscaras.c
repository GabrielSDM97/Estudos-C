#include <stdio.h>
//#include <stdlib.h>

/*

IMPORTANTE!! Os caracteres de escape funcionam em C da mesma forma que no Python
(/n (quebra linha), /t (tabulação), etc...). Diferentemente de Python, a função
'print' em C não quebra linha automaticamente, sendo necessário utilizar '/n'
para isso.


~~~~~~~~~~~~~~~~~ Máscaras ~~~~~~~~~~~~~~~~~

-- Padrão --
'%c' = máscara que imprime UM caractere.
'%d' = máscara que imprime números do tipo 'int' (signed)
'%o' = máscara que imprime número do tipo 'int' octais. (Variável 'int' que começa com 0, ex: 'int var = 032')
'%u' = máscara que imprime números do tipo 'unsigned int'. (assunto da aula 1.12(intervalo) e 1.14(tipo))
'%f' = máscara que imprime números reais do tipo 'float'.
'%lf' = máscara que imprime números reais do tipo 'double'.
'%zu' = máscara que imprime números do tipo 'size_t'. (assunto da aula 1.10)

-- Com long (assunto da aula 1.12) --
'%lld' = máscara que imprime números inteiros do tipo 'long long int'.
'%llu' = máscara que imprime números inteiros do tipo 'unsigned long long int'.
'%Lf' = máscara que imprime números reais do tipo 'long double'.
'%Le' = máscara que imprime números reais do tipo 'long double' com notação científica.

IMPORTANTE! Não confundir caractere com string. String é uma SEQUÊNCIA de caracteres.

*/

int main() {
    // printf("Conteúdo e máscaras", argumento1, argumento2, ...);
    printf("\t%d + %d = %d\n", 10, 15, 10+15); 
    printf("\t%d - %d = %d\n", 10, 15, 10-15);
    printf("\t%d * %d = %.5d\n", 10, 15, 10*15); // Formatando máscaras 'int' = '%.nd' em 'n' será a quantidade de casas da parte inteira.
    printf("\t%d / %d = %.4f\n\n", 10, 15, 10.0/15); // Formatando máscaras 'float' = '%.nf' em 'n' será a quantidade de casas da parte decimal.
    return 0;
}
