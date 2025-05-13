#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[20];
    int i;

    printf("Digite 20 numeros inteiros:\n");
    for(i = 0; i < 20; i++){
        scanf("%d", &vetor[i]);
    }

    int maxInicio = 0, maxTamanho = 1;
    int atualInicio = 0, atualTamanho = 1;

    for(i = 1; i < 20; i++){
        if(vetor[i] == vetor[i - 1] + 1){
            atualTamanho++;
        }else{
            if(atualTamanho > maxTamanho){
                maxTamanho = atualTamanho;
                maxInicio = atualInicio;
            }
            atualInicio = i;
            atualTamanho = 1;
        }
    }

    if(atualTamanho > maxTamanho){
        maxTamanho = atualTamanho;
        maxInicio = atualInicio;
    }

    printf("MAIOR SEQUENCIA CONSECUTIVA:\n");
    for(i = maxInicio; i < maxInicio + maxTamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\nTamanho: %d\n", maxTamanho);

    return 0;
}
