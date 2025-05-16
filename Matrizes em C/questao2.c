#include <stdio.h>
#include <stdlib.h>

int main(){

    int n; 
    
    printf("Digite o tamanho da matriz quadrada[n][n]:\n");
    scanf("%d", &n);
    
    int matriz[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Digite o elemento [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("DIAGONAL PRINCIPAL:\n");

    for (int i = 0; i < n; i++){
        printf("%2d\t", matriz[i][i]);
    }
    
    printf("\n");

    return 0;
}