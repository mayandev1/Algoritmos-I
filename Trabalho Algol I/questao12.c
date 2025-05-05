#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, soma = 0, num;

    printf("QUANTOS NUMEROS?\n");
    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        printf("DIGITE UM NUMERO:\n");
        scanf("%d", &num);

        soma = soma + num;
    }
    
    printf("SOMATORIO DOS NUMEROS E IGUAL A: %d\n", soma);

    return 0;
}