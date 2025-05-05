#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, soma = 0;

    printf("Digite o numero de termos:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            soma -= i;
        } else {
            soma += i;
        }
    }
    
    printf("Resultado da sequencia = %d\n", soma);
    return 0;
}