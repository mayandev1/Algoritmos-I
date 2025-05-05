#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, soma = 0;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);
    
    for (int i = 0; i < num2; i++){
        soma = num1 + num1;
    }
    
    printf("RESULTADO = %d\n", soma);
    return 0;
}