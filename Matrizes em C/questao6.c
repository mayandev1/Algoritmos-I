#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[4][4], somaLinha = 0, somaColuna = 0;
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("Digite os elementos [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
        
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            somaLinha += matriz[i][j];
            somaColuna += matriz[j][i];
        }
    }

    printf("MATRIZ\n");

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%2d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("SOMA DAS LINHAS DA MATRIZ E IGUAL A: %d\n", somaLinha);
    printf("SOMA DAS COLUNAS DA MATRIZ E IGUAL A: %d\n", somaColuna);

    return 0;
}