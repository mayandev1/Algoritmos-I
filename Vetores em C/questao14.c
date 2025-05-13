#include <stdio.h>
#include <stdlib.h>

int main(){

    int maior = 0, menor = 0, vetor[15];

    printf("Digite os 15 elementos:\n");
    for (int i = 0; i < 15; i++){
        scanf("%d", &vetor[i]);
    }

    int posicaoMaior = 0, posicaoMenor = 0;
    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 15; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
            posicaoMaior = i;
        }

        if (vetor[i] < menor){
            menor = vetor[i];
            posicaoMenor = i;
        }
        
    }
    
    printf("\nMAIOR VALOR: %d NA POSICAO %d\n", maior, posicaoMaior);
    printf("MENOR VALOR: %d NA POSICAO %d\n", menor, posicaoMenor);

    return 0;
}