#include <stdio.h>
#include <stdlib.h>

int main(){
    int elementos[15], n, encontrado = 0;

    for (int i = 0; i < 15; i++){
        printf("Digite um valor inteiro:\n");
        scanf("%d", &elementos[i]);
    }

    printf("Digite um numero para buscar no vetor:\n");
    scanf("%d", &n);

    for (int i = 0; i < 15; i++){
        if (n == elementos[i]){
            printf("NUMERO ENCONTRADO NA POSICAO %d: %d\n", i, elementos[i]);
            break;
        } 
    }
    
    if (encontrado = 0){
        printf("NUMERO NAO ENCONTRADO!\n");
    }
    
    return 0;
}