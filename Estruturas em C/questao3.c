#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, soma = 0;

    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &num);

    while (num > 0){
        soma += num % 10;
        num /= 10;
    }

    printf("A SOMA DOS DIGITOS DE %d E IGUAL A: %d\n", num, soma);
    
    return 0;
}