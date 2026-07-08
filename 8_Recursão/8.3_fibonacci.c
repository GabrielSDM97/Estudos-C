#include <stdio.h>
#include <time.h>

// Minha solução utilizando procedimento rescursivo com array (mostra toda a sequência)
void meuFibonacci(long long int arrayFibonacci[], int arrayLen, int termo) {
  if (termo == 0)
    arrayFibonacci[0] = 0;
  else if (termo == 1) {
    // Caso o arrayLen seja 1, não é inserido um valor na posição 1, já que este array tem apenas a posição 0.
    if (termo < arrayLen)
      arrayFibonacci[1] = 1;
  }
  if (termo < arrayLen) {
    // Evita overflow dentro do limite da Array
    if (termo > 0 && termo < arrayLen - 1)
      arrayFibonacci[termo+1] = arrayFibonacci[termo] + arrayFibonacci[termo-1];
    termo < arrayLen - 1 ? printf("%lld -> ", arrayFibonacci[termo]) : printf("%lld (...)\n\n", arrayFibonacci[termo]);
    meuFibonacci(arrayFibonacci, arrayLen, termo+1);
  }
}

// Utilizando função iterativa
long long int fibonacciIterativo(long long int termo) {
  long long int atual, último = 1, penúltimo = 0; 
  int contador = 3;

  if (termo == 1)
    return 0;
  else if (termo == 2)
    return 1;
  do{
    atual = último + penúltimo;
    penúltimo = último;
    último = atual;
    contador++;
  } while (contador <= termo);

  return atual;
}

// A recursividade em fibonacci não é recomendada, já que demora muito, principalmente se buscamos um termo mais distante na sequência.
// Quanto mais distante for o termo, mais ramificações, como se fosse uma árvore, serão necessárias para encontrá-lo.
long long int fibonacciRecursivo(long long int termo) {
  if (termo == 1)
    return 0;
  else if (termo == 2)
    return 1;
  return fibonacciRecursivo(termo - 1) + fibonacciRecursivo(termo - 2);
}

int main() {
  time_t início, fim; // Tipo primitivo para variáveis de tempo
  int qtdTermos = 45;
  long long int vetorFibonacci[qtdTermos];

  início = time(NULL); // Recebe, em tempo real, o tempo do computador.
  meuFibonacci(vetorFibonacci, qtdTermos, 0);
  fim = time(NULL);
  // 'difftime(fim, início)' retorna a diferente em segundos da ativação da variável início até a ativação da variável fim.
  printf("Tempo em segundos (procedimento recursivo com array): %.0f\n\n\n", difftime(fim, início));

  início = time(NULL);
  printf("\t%lld\n\n", fibonacciIterativo(qtdTermos));
  fim = time(NULL);
  printf("\tTempo em segundos (função iterativa): %.0f\n\n\n", difftime(fim, início));

  // Nota-se a demora demasiada da função recursiva quando utilizada para procurar um termo distante dentro de fibonacci.
  início = time(NULL);
  printf("\t%lld\n\n", fibonacciRecursivo(qtdTermos));
  fim = time(NULL);
  printf("\tTempo em segundos (função recursiva): %.0f\n\n", difftime(fim, início));

  return 0;
}
