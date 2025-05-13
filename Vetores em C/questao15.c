#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10], alvo, encontrou = 0;

    printf("Digite 10 numeros inteiros:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor-alvo:\n");
    scanf("%d", &alvo);

    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(vetor[i] + vetor[j] == alvo){
                printf("Par encontrado: %d + %d = %d (nas posicoes %d e %d)\n", vetor[i], vetor[j], alvo, i, j);
                encontrou = 1;
            }
        }
    }

    if(!encontrou){
        printf("Nenhum par encontrado de soma seja igual a %d.\n", alvo);
    }

    return 0;
}
