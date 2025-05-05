#include <stdio.h>
#include <stdlib.h>

int main(){
    
    printf("TABULEIRO DE XADREZ 8x8\n");
    
    for (int i = 1; i <= 8; i++){
        if (i % 2 == 0){
            printf(". # . # . # . #\n");
        } else {
            printf("# . # . # . # .\n");
        }
    }
    printf("# = PRETAS\n");
    printf(". = BRANCAS\n");
    
    return 0;
}