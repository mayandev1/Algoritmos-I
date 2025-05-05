#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    
    printf("Digite o valor de N:\n");
    scanf("%d", &n);

    if (n != 0){
        printf("TABELA DE POTENCIAS\n");
    
        for (int i = 1; i <= n; i++){
            printf("==== %d ao quadrado = %d\n", i,  i * i);
            printf("==== %d ao cubo = %d\n", i, i * i * i);
        }
        printf(" ============================= \n");
    } else {
        printf("Valor invalido!");
    }
    
    return 0;
}