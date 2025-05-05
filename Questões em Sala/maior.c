#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i = 0, maior = 0;
    
    while (i <= 10){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &num);
        
        if (num > maior){
            maior = num;
        }
        
        i++;
    }
    
    printf("O maior numero digitado foi o: %d", maior);
    
    return 0;
}