#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[8], n, encontrado = 0;
    
    for (int i = 0; i < 8; i++){
        printf("Digite um numero para a posicao [%d]:\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    while (n != -1){
        printf("Digite um numero para verificar se esta no vetor (digite -1 para encerrar):\n");
        scanf("%d", &n);

        if (n == -1){
            printf("ENCERRANDO...\n");
            break;
        } 

        encontrado = 0;

        for (int i = 0; i < 8; i++){
            if (vetor[i] == n){
                printf("NUMERO ENCONTRADO NA POSICAO [%d]!\n", i + 1);
                encontrado = 1;
                break;
            }

        }

        if (!encontrado){
            printf("NUMERO NAO ENCONTRADO!\n");
        }
    }

    return 0;
}