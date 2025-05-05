#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int fatorial = 1, num, i = 1;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    while(i <= num){
        printf("%d", i);
        if(i != num){
            printf(" x ");
        }
        fatorial *= i;
        i++;
    }

    printf(" = %d\n", fatorial);
    
    return 0;
}