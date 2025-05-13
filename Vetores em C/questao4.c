#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeros[10], n, encontrado = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite um valor inteiro:\n");
        scanf("%d", &numeros[i]);
    }
    
    printf("Digite um valor para conferir no vetor:\n");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++){
        if (n == numeros[i]){
            encontrado = 1;
            printf("VALOR %d ENCONTRADO NA POSICAO %d!\n", numeros[i], i);
            break;
        }
    }
    
    if (encontrado == 0){
        printf("VALOR NAO ENCONTRADO!\n");
    }
    
    return 0;
}