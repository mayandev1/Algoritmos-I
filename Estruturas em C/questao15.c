#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, count = 0, num = 2, somaTotal = 0;

    printf("Digite quantos numeros perfeitos deseja somar:\n");
    scanf("%d", &n);

    while (count < n){
        int soma = 0;

        for (int i = 1; i < num; i++){
            if (num % i == 0){
                soma += i;
            }
        }

        if (soma == num){
            printf("Numero perfeito encontrado: %d\n", num);
            somaTotal += num;
            count++;
        }
        num++;
    }
    
    printf("Soma dos %d primeiros numeros perfeitos: %d\n", n, somaTotal);
    return 0;
}