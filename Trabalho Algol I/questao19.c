#include <stdio.h>
#include <stdlib.h>

int main(){
    int fatorial = 1, num;
    
    printf("DIGITE UM NUMERO INTEIRO POSITIVO:\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        fatorial *= i; 
    }
    
    printf("%d! = %d", num, fatorial);
}