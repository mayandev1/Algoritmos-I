#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, subtracao = 0;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);
    
    while (num1 >= num2){
        num1 -= num2;
        subtracao++;
    }
    
    printf("RESULTADO = %d\n", subtracao);
    printf("RESTO = %d\n", num1);
    return 0;
}