#include <stdio.h>
//#include <stdlib.h>

int main() {
    int num1, num2;
    num1 = 50;
    num2 = 10;
    // % : Resto da divisão
    // / : Quociente da divisão
    // *, +, - : Multiplicação, adição e subtração
    printf("Resto da divisão de %d com %d: %d\n\n", num1, num2, num1%num2);
    printf("Quociente da divisão de %d com %d: %d\n\n", num1, num2, num1/num2);


    // ++ : Incremento
    // -- : Decremento
    int x, y = 10;
    // 'x' recebe 'y'(10), e depois 'y' recebe um incremento de 1 'y'(11).
    x = y++; // y++ equivale a 'y = y + 1'
    printf("x = %d\ny = %d\n\n", x, y);
    // 'x' recebe 'y' com incremento, ou seja, y(12). Após isso, 'y' permanece com incremento de 1 -> 'y'(12).
    x = ++y;
    printf("x = %d\ny = %d\n\n", x, y);
    // A mesma lógica se aplica a decremento.

    // Para incrementar e decrementar valores maiores que 1, usa-se os operador de atribuição compostos '+=' e '-='.
    int z = 0;
    z += 4; // Equivale a 'z = z + 4'
    printf("z = %d\n", z);
    z -= 2; // Equivale a 'z = z - 2'
    printf("z = %d\n\n", z);
    // Existem também outros operadores como esses acima para todas as outras operações matemáticas (*=(multiplicação), /=(divisão), etc...)

    /* Nota-se que o compilador de 'C' SEMPRE lê da esquerda para a direita, diferentemente de outras linguagens como Python, que, as vezes, 
    fazem comparação encadeada em uma mesma linha. */

    // Unsigned (número sem sinal) (Consultar aula 1.12 para ver os intervalos de 'int' e 'unsigned int')
    // Utiliza-se a máscara '%u' para o tipo 'unsigned int'.
    unsigned int n1 = 2147483647, n2 = 1, resultado = n1+n2;
    printf("n1 = %u\nn2 = %u\nresultado1 = %u\n\n", n1, n2, resultado); 

    return 0;

}
