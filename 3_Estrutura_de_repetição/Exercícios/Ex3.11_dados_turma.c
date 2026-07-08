#include <stdio.h>
// #include <stdlib.h>

/*
    Para uma turma de 5 alunos, construa um programa que determine:
    a) A idade média dos alunos com menos de 1,70m de altura;
    b) A altura média dos alunos com mais de 20 anos.
*/

int main() {
  float altura, somaAltura = 0;
  int contadorAluno, contadorIdade = 0, contadorAltura = 0, idade, somaIdade = 0;

  for (contadorAluno = 1; contadorAluno <= 5; contadorAluno++) {
    printf("\nDigite a idade e altura do %dº aluno: ", contadorAluno);
    scanf("%d%f", &idade, &altura);

    if (altura < 1.7) {
      somaIdade += idade;
      contadorIdade++;
    }

    if (idade > 20) {
      somaAltura += altura;
      contadorAltura++;
    }
  }

  printf("\na) Idade média dos alunos com menos de 1,70m de altura: %d", somaIdade/contadorIdade);
  printf("\nb) Altura média dos alunos com mais de 20 anos: %.2f\n\n", somaAltura/contadorAltura);
  
  return 0;
}
