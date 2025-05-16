#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[5][5], num;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("Digite o elemento [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite um numero para buscar na matriz:\n");
    scanf("%d", &num);

    int encontrado = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (num == matriz[i][j]){
                printf("NUMERO ENCONTRADO!\n");
                if (num > 0){
                    printf("NA POSICAO: [%d][%d]\n", i + 1, j + 1);
                } 
                encontrado = 1;
            }
        }
    }
    
    if (!encontrado){
        printf("O NUMERO NAO FOI ENCONTRADO!\n");
    }

    return 0;
}