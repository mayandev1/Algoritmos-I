#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, soma = 0;

    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &num);

    for (int i = 1; i < num; i++){
        if (num % i == 0){
            soma += i;
        }
    }
    
    if (soma == num){
        printf("O NUMERO %d E PERFEITO!\n", num);
    } else {
        printf("O NUMERO %d NAO E PERFEITO!\n", num);
        
    }
    
    return 0;
}