#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[8] = {5, 982, 271, 124, 99, 40, 31, 1};

    printf("VETOR:\n");
    for (int i = 0; i < 8; i++){
        printf("%d ", vetor[i]);
    }
        
    int count = 0;

    for (int i = 0; i < 8; i++){
        if (vetor[i] > 30){
            count++;
        }
    }
    
    printf("\nQUANTIDADE DE NUMEROS MAIORES QUE 30: %d\n", count);
    return 0;
}