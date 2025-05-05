#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num1, num2;

    printf("DIGITE O LIMITE INFERIOR:\n");
    scanf("%d", &num1);

    printf("DIGITE O LIMITE SUPERIOR:\n");
    scanf("%d", &num2);

    printf("RESULTADO:\n");
    
    for (int i = num1; i <= num2; i++){
        if (i % 2 != 0){
            printf("%d ", i);
        }
        
    }
    
    return 0;
}