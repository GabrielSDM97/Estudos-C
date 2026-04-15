#include <stdio.h>
#include <math.h> // Biblioteca de funções matemáticas

int main(){

	/*
	Funções:

	double cos(double x)
	RETORNA: o valor do cosseno do ângulo que foi informado como parâmetro.
	RECEBE: um ângulo em radianos.

	double sin(double x)
	RETORNA: o valor do seno do ângulo que foi informado como parâmetro.
	RECEBE: um ângulo em radianos.

	double tan(double x)
	RETORNA: o valor da tangente do ângulo que foi informado como parâmetro.
	RECEBE: um ângulo em radianos.

	double log(double x)
	RETORNA: o valor de ln x, ou seja, o logaritmo de x na base e.
	RECEBE: um valor x do tipo double.

	double log10(double x)
	RETORNA: o valor de ln x, ou seja, o logaritmo de x na base e.
	RECEBE: um valor x do tipo double.

	double pow(double x, double y)
	RETORNA: x elevado a y.
	RECEBE: dois valores do tipo double, x e y, em que x será a base e y será o expoente.

	double sqrt(double x)
	RETORNA: a raiz quadrada de x ou NaN se x for negativo.
	RECEBE: x, um valor do tipo double.

	double ceil(double x)
	RETORNA: o menor inteiro maior ou igual a x.
	RECEBE: x, um valor do tipo double.
	*/
		
    printf("Potencia: %lf\n", pow(5, 2));
    printf("Raiz quadrada: %lf\n", sqrt(81));
    printf("Maior inteiro: %lf\n", ceil(3.7000));
    printf("Menor inteiro: %lf\n", floor(3.7000));

    return 0;
}
