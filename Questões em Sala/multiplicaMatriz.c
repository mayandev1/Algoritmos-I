#include <stdio.h>
#include <stdlib.h>

int main(){
 
    int matriz[6][6], multiplicada[6][6], multiplicador;

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            printf("Digite o elemento [%d][%d] da matriz:\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Multiplica os elementos por:\n");
    scanf("%d", &multiplicador);
    
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            multiplicada[i][j] = matriz[i][j] * multiplicador;
        }
    }
    
    printf("========== MATRIZ ==========\n");
    
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            printf("%3d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n====== MULTIPLICADA ======\n");
    
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            printf("%3d\t", multiplicada[i][j]);
        }
        printf("\n");
    }

    return 0;
}