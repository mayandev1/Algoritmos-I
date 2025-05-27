#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[8], count = 0, soma = 0, somaTotal = 0;

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < 8; i++){
        printf("Elemento [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor:\n");
    for (int i = 0; i < 8; i++){
        printf("%d ", vetor[i]);
    }
    
    for (int i = 0; i < 8; i++){
        if (vetor[i] > 30){
            soma += vetor[i];
            count++;
        }
    }

    for (int i = 0; i < 8; i++){
        somaTotal += vetor[i];
    }
    
    printf("\nQuantidade de numeros maior que 30: %d\n", count);
    printf("Soma dos numeros maior que 30: %d\n", soma);
    printf("Soma de todos os numeros: %d\n", somaTotal);
    
    return 0;
}