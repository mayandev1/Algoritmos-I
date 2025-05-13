#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10];

    for (int i = 0; i < 10; i++){
        printf("Digite um numero inteiro positivo:\n");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++){
        for (int j = i + 1; j < 10; j++){
            if (vetor[i] == vetor[j]){
                vetor[j] = -1;
            }
        }
    }
    
    printf("VETOR SEM NUMEROS DUPLICADOS:\n");
    for (int i = 0; i < 10; i++){
        if (vetor[i] != -1){
            printf("%d ", vetor[i]);
        }
    }
    
    return 0;
}