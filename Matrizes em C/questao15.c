#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[10][10], m, n, max;

    printf("Digite a quantidade de linhas (max 10):\n");
    scanf("%d", &m);

    printf("Digite a quantidade de coluas (max 10):\n");
    scanf("%d", &n);


    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
           printf("Digite o elemento [%d][%d]:\n", i + 1, j + 1);
           scanf("%d", &matriz[i][j]); 
        }
    }
    
    int soma[10][10];
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
           if (i == 0 && j == 0){
                soma[i][j] = matriz[i][j];
           } else if (i == 0){
                soma[i][j] = soma[i][j-1] + matriz[i][j];
           } else if (j == 0){
                soma[i][j] = soma[i-1][j] + matriz[i][j];
           } else {
                if (soma[i-1][j] > soma[i][j-1]){
                    max = soma[i-1][j];
                } else {
                    max = soma[i][j-1];
                }    
                soma[i][j] = matriz[i][j] + max;
            }
        }
    }
    
    int maiorSoma = soma[m-1][n-1];
    
    printf("A maior soma e igual a: %d\n", maiorSoma);
    return 0;
}
