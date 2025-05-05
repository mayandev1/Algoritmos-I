#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, contadorPar = 0, contadorImpar = 0;

    for (int i = 0; i < 20; i++){
        printf("Digite um numero:\n");
        scanf("%d", &num);

        if (num % 2 == 0){
            contadorPar++;
        } else {
            contadorImpar++;
        }
        
    }
    printf("TOTAL DE NUMEROS PARES DIGITADOS: %d\n", contadorPar);
    printf("TOTAL DE NUMEROS IMPARES DIGITADOS: %d\n", contadorImpar);

    return 0;
}