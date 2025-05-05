#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[50];
    float nota1, nota2, nota3, media, soma = 0;

    for (int i = 0; i < 2; i++){
        printf("DIGITE O SEU NOME:\n");
        scanf(" %s", nome);

        printf("DIGITE AS SUAS NOTAS:\n");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        soma = nota1 + nota2 + nota3;
        media = soma/3;

        if (media >= 7){
            printf("%s ESTA APROVADO!\n", nome);
        } else if (media >= 4 || media < 7){
            printf("%s ESTA DE PROVA FINAL!\n", nome);
        } else {
            printf("%s ESTA REPROVADO!\n", nome);
        }
        
    }
    
}