#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("PARA ENCERRAR O PROGRAMA DIGITE '-1'\n");

    while (num != -1){
        printf("DIGITE UM NUMERO POSITIVO:\n");
        scanf("%d", &num);

        if(num > 0){
            if (num % 2 == 0){
                printf("%d E PAR!\n", num);
            } else {
                printf("%d E IMPAR!\n", num);
            }
        }
        
    }
    
    return 0;
}