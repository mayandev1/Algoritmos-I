<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int vetor[8], temp;

    for (int i = 0; i < 8; i++){
        printf("Digite um valor:\n");
        scanf("%d", &vetor[i]);
    }
    
    printf("VETOR ANTES DA ORDENACAO:\n");
    for (int i = 0; i < 8; i++){
        printf("%d ", vetor[i]);
    }
    
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8 - 1; j++){
            if (vetor[j] > vetor[j + 1]){
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }   
        }
    }

    printf("\nVETOR DEPOIS DA ORDENACAO:\n");
    for (int i = 0; i < 8; i++){
        printf("%d ", vetor[i]);
    }
    
    return 0;
=======
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int vetor[8], temp;

    for (int i = 0; i < 8; i++){
        printf("Digite um valor:\n");
        scanf("%d", &vetor[i]);
    }
    
    printf("VETOR ANTES DA ORDENACAO:\n");
    for (int i = 0; i < 8; i++){
        printf("%d ", vetor[i]);
    }
    
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8 - 1; j++){
            if (vetor[j] > vetor[j + 1]){
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }   
        }
    }

    printf("\nVETOR DEPOIS DA ORDENACAO:\n");
    for (int i = 0; i < 8; i++){
        printf("%d ", vetor[i]);
    }
    
    return 0;
>>>>>>> 5c808c85740a08caccba0ecbbeadbf8b9cb658ba
}