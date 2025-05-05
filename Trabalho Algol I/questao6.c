#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float N, metade, raizCubica, num;

    printf("Digite quantos numeros ira utilizar:\n");
    scanf("%f", &N);

    for (int i = 0; i < N; i++){
        printf("Digite o numero:\n");
        scanf("%f", &num);

        metade = num/2;
        raizCubica = cbrt(num);
        printf("A METADE DE %.2f E IGUAL A: %.2f\n", num, metade);
        printf("A RAIZ CUBICA DE %.2f E IGUAL A: %.2f\n", num, raizCubica);
    }
    
    
    return 0;
}