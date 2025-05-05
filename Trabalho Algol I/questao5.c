#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double num, metade, raizCubica;

    for (int i = 0; i < 10; i++){
        printf("Digite um numero:\n");
        scanf("%lf", &num);

        raizCubica = cbrt(num);
        metade = num/2;

        printf("A RAIZ CUBICA DE %2.lf E IGUAL A: %2.lf\n", num, raizCubica);
        printf("A METADE DE %2.lf E IGUAL A: %2.lf\n", num, metade);
    }
    
}