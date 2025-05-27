#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10], vetor2[10], soma[10];

    int valor = 2;

    for (int i = 0; i < 10; i++){
        vetor[i] = valor;
        valor += 2;
    }
    
    valor = 22;

    for (int i = 0; i < 10; i++){
        vetor2[i] = valor;
        valor += 2;
    }
    
    printf("SOMA:\n");
    for (int i = 0; i < 10; i++){
        soma[i] = vetor[i] + vetor2[i];
        printf("%d ", soma[i]);
    }

    return 0;
}