#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, simetrica = 1;

    printf("Digite o tamanho N x N da matriz quadrada:\n");
    scanf("%d", &n);

    int matriz[n][n], transposta[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Digite o elemento [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            transposta[i][j] = matriz[j][i];
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (matriz[i][j] != transposta[i][j]){
                simetrica = 0;
                break;
            } 
        }

        if (!simetrica){
            break;
        }
    }

    printf("MATRIZ\n");
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%2d\t", matriz[i][j]);
        }
        printf("\n");
    }

    if (simetrica){
        printf("\nA MATRIZ E SIMETRICA!\n");
    } else {
        printf("A MATRIZ NAO E SIMETRICA!\n");
    }
    
    return 0;
}