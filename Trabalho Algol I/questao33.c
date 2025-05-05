#include <stdio.h>
#include <stdlib.h>

int main(){
    int turmas = 15;
    int n, acima_sete, total_alunos = 0;
    float nota, soma_total = 0, media_geral;

    for (int i = 1; i <= turmas; i++){
        printf("Digite o numero de alunos da turma %d:\n", i);
        scanf("%d", &n);

        acima_sete = 0;

        for (int j = 1; j <= n; j++){
            printf("Digite a nota do aluno %d da turma %d:\n", j, i);
            scanf("%f", &nota);

            soma_total += nota;
            total_alunos++;

            if (nota > 7.0){
                acima_sete++;
            }
        }

        printf("Turma %d - Alunos com nota acima de 7: %d\n", i, acima_sete);
    }

    media_geral = soma_total / total_alunos;
    printf("\nMedia geral da escola: %.2f\n", media_geral);

    return 0;
}
