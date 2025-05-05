#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num, original, reverso = 0, resto;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    original = num;

    while (num != 0){
        resto = num % 10;
        reverso = reverso * 10 + resto;
        num /= 10;
    }
    
    if (original == reverso){
        printf("O NUMERO %d E UM PALINDROMO.\n", original);
    } else {
        printf("O NUMERO %d NAO E UM PALINDROMO.\n", original);
    }

    return 0;
}