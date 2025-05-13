#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10], rotacionado[10];

    printf("Digite 10 numeros inteiros:\n");

    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    
    printf("VETOR ORIGINAL:\n");

    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    
    rotacionado[0] = vetor[9];
    
    for (int i = 1; i < 10; i++){
        rotacionado[i] = vetor[i - 1];
    }
    
    printf("\nVETOR ROTACIONADO:\n");

    for (int i = 0; i < 10; i++){
        printf("%d ", rotacionado[i]);
    }
    
    return 0;
}