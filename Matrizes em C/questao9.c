#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int A[2][3], B[3][2], C[2][2];
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o elemento [%d][%d] da matriz A:\n", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("Digite o elemento [%d][%d] da matriz B:\n", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + A[i][2] * B[2][j];
        }
    }

    printf("\nMATRIZ A * MATRIZ B = MATRIZ C\n");
    
    printf("\n MATRIZ C:\n");
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%2d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}