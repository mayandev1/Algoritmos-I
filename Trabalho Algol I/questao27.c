#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, contadorPar = 0, contadorImpar = 0;
    float mediaPar, mediaImpar, somaPares = 0, somaImpares = 0;

    for (int i = 0; i < 20; i++){
        printf("Digite um numero inteiro positivo:\n");
        scanf("%d", &num);

        if (num % 2 == 0){
            contadorPar++;
            somaPares += num;
        } else {
            contadorImpar++;
            somaImpares += num;
        }
    }
    
    mediaImpar = somaImpares / contadorImpar;
    mediaPar = somaPares / contadorPar;

    printf("MEDIA DOS NUMEROS PARES = %.2f\n", mediaPar);
    printf("MEDIA DOS NUMEROS IMPARES = %.2f\n", mediaImpar);

    return 0;
}