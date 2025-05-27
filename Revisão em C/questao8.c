#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[8], count = 0, countMaior10 = 0, countMenor30 = 0;
    float media, soma = 0;

    printf("Digite os elementos do vetor:\n");
    scanf("%d", &vetor[0]);

    int maior = vetor[0];
    soma += vetor[0];

    for (int i = 1; i < 8; i++){
        scanf("%d", &vetor[i]);
        soma += vetor[i];
        if (vetor[i] > 10){
            countMaior10++;
        }
        
        if (vetor[i] < 30){
            countMenor30++;
        }
        
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    
    printf("\nVetor:\n");
    for (int i = 1; i < 8; i++){
        printf("%d ", vetor[i]);
    }

    media = soma/8;
    printf("\nMedia do vetor: %.2f\n", media);

    for (int i = 0; i < 8; i++){
        if (vetor[i] % 5 == 0){
            count++;
        }
    }
    printf("Quantidade de multiplos de 5: %d\n", count);
    printf("Quantidade de numeros maiores que 10: %d\n", countMaior10);
    printf("Quantidade de numeros menores que 30: %d\n", countMenor30);
    printf("Maior numero do vetor: %d\n", maior);

    return 0;
}