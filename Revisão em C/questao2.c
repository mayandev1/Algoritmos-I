#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10];

    for (int i = 2; i <= 20; i++){
        if (i % 2 == 0){
            vetor[i] = i;
            printf("%d ", vetor[i]);
        }
    }

    
    return 0;
}