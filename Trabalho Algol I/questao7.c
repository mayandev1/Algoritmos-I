#include <stdio.h>
#include <stdlib.h>

int main(){
    int base, expoente, resultado = 1;

    printf("Digite a base:\n");
    scanf("%d", &base);
    printf("Digite o expoente:\n");
    scanf("%d", &expoente);

    for (int i = 1; i <= expoente; i++){
        resultado = resultado * base;
    }
    
    printf("RESULTADO:: %d\n", resultado);

    return 0;
}
