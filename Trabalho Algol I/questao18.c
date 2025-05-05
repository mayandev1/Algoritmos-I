#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade, menor, maior, contadorIdades = 0;
    float media = 0, soma = 0;
    
    printf("Digite sua idade (ou -1 para encerrar):\n");
    scanf("%d", &idade);

    if (idade == -1){
        printf("Nenhuma idade foi informada.\n");
        return 0;
    }
    
    menor = idade;
    maior = idade;

    while (idade != -1){
        soma += idade;
        contadorIdades++;

        if (idade > maior){
            maior = idade;
        } 
            
        if (idade < menor){
            menor = idade;
        }

        printf("Digite sua idade (ou -1 para encerrar):\n");
        scanf("%d", &idade);        
    }
    
    media = soma / contadorIdades;

    printf("A MAIOR IDADE DIGITADA FOI: %d ANOS\n", maior);
    printf("A MENOR IDADE DIGITADA FOI: %d ANOS\n", menor);
    printf("A MEDiA DAS IDADES E IGUAL A: %.2f\n", media);

    return 0;
}