#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, multi;

    printf("DIGITE UM NUMERO INTEIRO POSITIVO:\n");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++){
        multi = num * i;
        printf("| %d x %d = %d\n", num, i, multi);
    }

    return 0;
}