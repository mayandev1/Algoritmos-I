#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, soma = 0;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    if (num < 100 || num > 999){
        printf("%d nao e um numero armadilha porque nao tem 3 digitos.\n", num);
        return 0;
    }
    
    if (num % 3 == 1){
        printf("%d nao e um numero armadilha porque nao e divisivel por 3.\n", num);
        return 0;
        
    }
    
    int digito1, digito2, digito3;
    digito1 = num/100;
    digito2 = (num/10) % 10;
    digito3 = num % 10;
    
    if (digito1 == digito2 || digito2 == digito3 || digito3 == digito1){
        printf("%d nao e um numero armadilha porque sao numeros repetidos (digitos iguais).\n", num);
        return 0;
    }
    
    soma = digito1 + digito2 + digito3;
    
    if (soma % 2 == 1){
        printf("%d nao e um numero armadilha porque a soma dos digitos nao e par.\n", num);
        return 0;        
    }
    
    printf("O NUMERO %d E UMA ARMADILHA!\n", num);
    printf("TEM 3 DIGITOS DISTINTOS;\n");
    printf("E DIVISIVEL POR 3;\n");
    printf("E A SOMA DOS DIGITOS E PAR;\n");
    return 0;
}