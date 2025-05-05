#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade, maior, menor;
    float media, soma = 0;

    printf("DIGITE SUA IDADE:\n");
    scanf("%d", &idade);

    maior = idade;
    menor = idade;
    soma += idade;

    for (int i = 1; i < 20; i++){
        
        if (idade > maior){
            maior = idade;
        }
        
        if (idade < menor){
            menor = idade;
        }
        
        soma += idade; 

        printf("DIGITE SUA IDADE:\n");
        scanf("%d", &idade);

    }
    
    media = soma / 20;
    
    printf("A MAIOR IDADE DIGITADA: %d ANOS\n", maior); 
    printf("A MENOR IDADE DIGITADA: %d ANOS\n", menor); 
    printf("A MEDIA DAS IDADES DIGITADAS: %.2f ANOS\n", media);
    
    return 0;
}