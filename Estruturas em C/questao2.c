#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, ehPrimo = 1;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if (num <= 1){
        ehPrimo = 0;   
    } else {
        for (int i = 2; i * i <= num; i++){
            if (num % i == 0){
                ehPrimo = 0;
                break;
            }    
        }   
    }

    if (ehPrimo){
        printf("O NUMERO %d E PRIMO!\n", num);
    } else {
        printf("O NUMERO %d NAO E PRIMO!\n", num);
    }
    
    return 0;
}