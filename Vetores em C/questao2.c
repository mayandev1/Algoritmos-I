#include <stdio.h>
#include <stdlib.h>

int main(){

    float vetor[5], soma = 0, media;

    for (int i = 0; i < 5; i++){
        printf("Digite um valor real:\n");
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    
    media = soma/5;

    printf("A MEDIA DOS VALORES E IGUAL A: %.2f\n", media);
    
    return 0;
}