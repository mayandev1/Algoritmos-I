#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[8];

    for (int i = 0; i < 8; i++){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &vetor[i]);
    }

    printf("VETOR INVERTIDO:\n");

    for (int i = 7; i >= 0 ; i--){
        printf("%d ", vetor[i]);
    }
    
    return 0;
}