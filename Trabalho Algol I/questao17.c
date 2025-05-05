#include <stdio.h>
#include <stdlib.h>

int main(){

    char sexo;
    int QuantidadeMasc, QuantidadeFemi;
    
    do {
        printf("Digite o seu sexo (M ou F):\n");
        scanf(" %c", &sexo);

        switch (sexo){
        case 'M':
        case 'm':
            QuantidadeMasc += 1;
            break;
        case 'F':
        case 'f':
            QuantidadeFemi += 1;
            break;
        default:
            printf("SEXO INVALIDO!\n");
            break;
        }

    } while (sexo != '@');
    
    printf("QUANTIDADE DE PESSOAS DO SEXO MASCULINO: %d\n", QuantidadeMasc);
    printf("QUANTIDADE DE PESSOAS DO SEXO FEMININO: %d\n", QuantidadeFemi);

    return 0;
}