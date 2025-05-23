#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    printf("Digite o tamanho da matriz N x N:\n");
    scanf("%d", &n);
    
    int matriz[n][n], espelhada[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Digite o elemento [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            espelhada[i][j] = matriz[j][i];
        }
    }

    printf("MATRIZ:\n");

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%2d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIZ ESPELHADA:\n");

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%2d\t", espelhada[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}