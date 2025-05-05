#include <stdio.h>
#include <stdlib.h>

int main(){
    int alunos, count;
    float media, soma = 0, nota;

    printf("Quantos alunos?\n");
    scanf("%d", &alunos);

    count = 1;
    while (count <= alunos){
        printf("Digite a nota do aluno %d:\n", count);
        scanf("%f", &nota);
        soma = soma + nota;
        count++; 
    }

    media = soma/alunos;
    printf("A media aritmetica dos alunos e igual a: %.2f\n", media);
    
    return 0;
}