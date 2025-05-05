#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int maior = 0, menor = 0, N;
    
    printf("QUANTOS NUMEROS?\n");
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        int num;
        printf("DIGITE UM NUMERO:\n");
        scanf("%d", &num);

        if(num > maior){
            maior = num;
        } else {
            menor = num;
        }
        
    }
    
    printf("O MAIOR NUMERO DIGITADO FOI %d\n", maior);
    printf("O MENOR NUMERO DIGITADO FOI %d\n", menor);
    
    return 0;
}