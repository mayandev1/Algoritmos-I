#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, identidade = 1;
    
    printf("Digite o tamanho da matriz quadrada:\n");
    scanf("%d", &n);

    int matriz[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Digite o elemento [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (matriz[i][j] != 1 && i == j){
                identidade = 0;
            } else if (i != j && matriz[i][j] != 0){
                identidade = 0;
            }            
        }
    }
    
    if (identidade){
        printf("A MATRIZ E IDENTIDADE!\n");
    } else {
        printf("A MATRIZ NAO E IDADENTIDADE!\n");
    }
    
    return 0;
}