#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num1, num2, menor, maior;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2){
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }
    
    for (int i = menor + 1; i < maior; i++){
        printf("%d ", i);
    }
    
    return 0;
}