#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeros[15], countPar = 0, countImpar = 0;

    for (int i = 0; i < 15; i++){
        printf("Digite um valor inteiro:\n");
        scanf("%d", &numeros[i]);

        if (i % 2 == 0){
            countPar++;
        } else {
            countImpar++;
        }
    }
 
    printf("CONTAGEM DE NUMEROS PAR: %d\n", countPar);
    printf("CONTAGEM DE NUMEROS IMPARES: %d\n", countImpar);

    return 0;
}