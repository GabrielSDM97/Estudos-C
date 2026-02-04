#include <stdio.h>
// #include <stdlib.h>

/*
    Para uma turma de 45 alunos, construa um programa que determine:
    a) A idade média dos alunos com menos de 1,70m de altura;
    b) A altura média dos alunos com mais de 20 anos.
*/

int main() {
  float altura, somaAltura = 0;
  int contadorGeral, contadorIdade = 0, contadorAltura = 0, idade, somaIdade = 0;

  for (contadorGeral = 1; contadorGeral <= 5; contadorGeral++) {
    printf("\nDigite a idade e altura do %dº aluno: ", contadorGeral);
    scanf("%d%f", &idade, &altura);

    if (altura < 1.70) {
      somaIdade += idade;
      contadorIdade += 1;
    }

    if (idade > 20) {
      somaAltura += altura;
      contadorAltura += 1;
    }
  }

  printf("\na) Idade média dos alunos com menos de 1,70m de altura: %d", somaIdade/contadorIdade);
  printf("\nb) Altura média dos alunos com mais de 20 anos: %.2f\n\n", somaAltura/contadorAltura);
  
  return 0;
}
