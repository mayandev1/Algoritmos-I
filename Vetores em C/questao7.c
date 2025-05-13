#include <stdio.h>
#include <stdlib.h>

int main(){

    float vetor[20], positivos[20], negativos[20];
    int pos = 0, neg = 0;

    for (int i = 0; i < 20; i++){
        printf("Digite um valor float:\n");
        scanf("%f", &vetor[i]);
        if (vetor[i] > 0){
            positivos[pos] = vetor[i];
            pos++;
        } else {
            negativos[neg] = vetor[i];
            neg++;
        }
    }
    
    printf("VETOR DE POSITIVOS:\n");
    
    for (int i = 0; i < pos; i++){
        printf("%.2f ", positivos[i]);
    }
    
    printf("VETOR DE NEGATIVOS:\n");

    for (int i = 0; i < neg; i++){
        printf("%.2f ", negativos[i]);
    }
    
    return 0;
}