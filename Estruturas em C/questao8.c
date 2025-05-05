#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num1, num2, mmc, maior;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    maior = num2;

    while (1){
        if (maior % num1 == 0 && maior % num2 == 0){
            mmc = maior;
            break;
        }
        
        maior++;
    }
    
    printf("O MMC DE %d E %d E IGUAL A %d\n", num1, num2, mmc);
    return 0;
}