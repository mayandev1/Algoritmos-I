#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor1[5], vetor2[5];

    printf("Digite os elementos do vetor1:\n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &vetor1[i]);
    }
    
    printf("Digite os elementos do vetor2:\n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &vetor2[i]);
    }

    printf("\nVetor 1:\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", vetor1[i]);
    }
    
    printf("\nVetor 2:\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", vetor2[i]);
    }
    
    printf("\nSoma dos elementos:\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", vetor1[i] + vetor2[i]);
    }
    
    return 0;
}