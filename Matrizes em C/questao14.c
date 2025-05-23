#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int matriz1[6][6], matriz2[2][2], ocorre = 0;

    printf("Digite todos os elementos da matriz[6][6]:\n");

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            printf("Elemento [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    printf("Digite todos os elementos da matriz[2][2]:\n");
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Elemento [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i <= 4; i++){
        for (int j = 0; j <= 4; j++){
            if (matriz1[i][j] == matriz2[0][0] &&
                matriz1[i][j + 1] == matriz2[0][1] &&
                matriz1[i + 1][j] == matriz2[1][0] &&
                matriz1[i + 1][j + 1] == matriz2[1][1]){
                ocorre = 1;

                printf("A matriz[2][2] ocorre na posicao [%d][%d] da matriz[6][6]!\n", i + 1, j + 1);
            }
        }
    }
    
    if (!ocorre){
        printf("A matriz[2][2] nao ocorre na matriz[6][6]!\n");
    }
    
    
    return 0;
}