#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[5][5];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("Digite o elemento [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Elementos acima da diagonal principal:\n");
    printf("\n");
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i < j){
                printf("%2d\t", matriz[i][j]);
            } else {
                printf(" \t");
            }
            
        }
        printf("\n");
    }
    
    printf("Elementos abaixo da diagonal principal:\n");
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i > j){
                printf("%2d\t", matriz[i][j]);
            } else {
                printf(" \t");
            }
        }
        printf("\n");
    }

    return 0;
}