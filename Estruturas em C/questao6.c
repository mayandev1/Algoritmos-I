#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &num);

    if (num <= 1){
        printf("Digite um numero maior que 1!\n");
        return 1;
    }

    printf("%d ", num);

    while (num != 1){
        if (num % 2 == 0){
            num /= 2;
        } else {
            num = 3 * num + 1;
        }

        printf("-> %d ", num);
    }

    printf("\nFim da sequencia.\n");
    return 0;
}