#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int vetor[5];
    bool ehPalindromo = true;

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < 5/2; i++){
        if (vetor[i] != vetor[5 - 1 - i]){
            ehPalindromo = false;
            break;
        }
    }
    
    if (ehPalindromo){
        printf("O VETOR EH PALINDROMO!\n");
    } else {
        printf("O VETOR NAO EH PALINDROMO!\n");
    }
    
    return 0;
}