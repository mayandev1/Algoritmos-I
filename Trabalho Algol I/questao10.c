#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;
    char sexo, nome[50];

    for (int i = 0; i < 20; i++){
        printf("DIGITE SEU NOME:\n");
        scanf("%s", nome);

        printf("DIGITE SUA IDADE:\n");
        scanf("%d", &idade);

        printf("DIGITE SEU SEXO (M OU F):\n");
        scanf(" %c", &sexo);

        if (sexo == 'M' || sexo == 'm'){
            if(idade >= 21){
                printf("NOME: %s\n", nome);
            }
        }
        

    }
    
    return 0;
}