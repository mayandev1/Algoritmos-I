#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float centimetros;

    printf("=============== TABELA DE POLEGADAS ===============\n");

    for (int i = 1; i <= 20; i++){
        centimetros = i * 2.54;
        printf("| %d polegadas e igual a %.2f centimetros\n", i, centimetros);
    }
    
    return 0;
}