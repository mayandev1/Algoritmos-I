#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0, matriz[4][4];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("Digite o elemento [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            soma += matriz[i][j];
        } 
    }
    
    printf("MATRIZ\n");

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%2d\t", matriz[i][j]); 
        } 

        printf("\n");
    }
    
    printf("A SOMA DE TODOS ELEMENTOS E IGUAL A: %d\n", soma);
    return 0;
}