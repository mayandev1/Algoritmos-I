#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota, soma, media_aluno, media_turma = 0;
    int alunos = 20;
    int acima_sete = 0;

    for (int i = 0; i < alunos; i++){
        soma = 0;
        printf("\nAluno %d:\n", i + 1);

        for (int j = 0; j < 10; j++){
            printf("Digite a nota %d:\n", j + 1);
            scanf("%f", &nota);
            soma += nota;
        }

        media_aluno = soma / 10;
        printf("Media do aluno %d: %.2f\n", i + 1, media_aluno);

        media_turma += media_aluno;

        if (media_aluno > 7.0){
            acima_sete++;
        }
    }

    media_turma /= alunos;
    float percentual = (acima_sete * 100.0) / alunos;

    printf("\nMedia da turma: %.2f\n", media_turma);
    printf("Percentual de alunos com media acima de 7.0: %.2f%%\n", percentual);

    return 0;
}