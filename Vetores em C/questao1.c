#include <stdio.h>
#include <stdlib.h>

int main(){
    int valores[10];

    for (int i = 0; i < 10; i++){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &valores[i]);
    }

    printf("VETOR COM OS VALORES INTEIROS:\n");

    for (int i = 0; i < 10; i++){
        printf("%d ", valores[i]);
    }
    
    return 0;
}