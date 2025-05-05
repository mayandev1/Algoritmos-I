#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, ehprimo;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    for (int i = num1; i <= num2; i++){
        if (i <= 1){
            continue;
        }
        
        ehprimo = 1;
        
        for (int j = 2; j * j <= i; j++){
            if (i % j == 0){
                ehprimo = 0;
                break;
            }
            
        }
        
        if (ehprimo){
            printf("%d ", i);
        }
        
    }
    
    printf("\n");
    return 0;
}