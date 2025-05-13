#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor1[5], vetor2[5], soma = 0;

    for (int i = 0; i < 5; i++){
        printf("Preencha o vetor1:\n");
        scanf("%d", &vetor1[i]);
    }
    
    for (int i = 0; i < 5; i++){
        printf("Preencha o vetor2:\n");
        scanf("%d", &vetor2[i]);
    }
    
    for (int i = 0; i < 5; i++){
        soma += vetor1[i] * vetor2[i];
    }
    
    printf("PRODUTO ESCALAR DOS DOIS VETORES E IGUAL A: %d\n", soma);

    return 0;
}