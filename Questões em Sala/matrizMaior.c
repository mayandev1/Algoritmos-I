#include <stdio.h>
#include <stdlib.h>

int main(){
 
    int matriz[2][5];

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 5; j++){
            printf("Digite o elemento [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int maior = matriz[0][0];

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 5; j++){
            if (maior < matriz[i][j]){
                maior = matriz[i][j];
            }
        }
    }
    
    printf("O MAIOR ELEMENTO DA MATRIZ E = %d\n", maior);

    return 0;
}