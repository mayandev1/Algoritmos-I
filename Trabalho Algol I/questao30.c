#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade, faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0;
    float peso, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;


    for (int i = 0; i < 20; i++){
        printf("Digite a idade da pessoa %d:\n", i + 1);
        scanf("%d", &idade);

        printf("Digite o peso da pessoa %d (em kg):\n", i + 1);
        scanf("%f", &peso);

        if (idade >= 1 && idade <= 10){
            soma1 += peso;
            faixa1++;
        } else if (idade >= 11 && idade <= 20){
            soma2 += peso;
            faixa2++;
        } else if (idade >= 21 && idade <= 30){
            soma3 += peso;
            faixa3++;
        } else if (idade > 30){
            soma4 += peso;
            faixa4++;
        }
    }

    if (faixa1 > 0)
        printf("\nMedia dos pesos (1 a 10 anos): %.2f kg\n", soma1 / faixa1);
    else
        printf("\nNenhuma pessoa na faixa de 1 a 10 anos.\n");

    if (faixa2 > 0)
        printf("Media dos pesos (11 a 20 anos): %.2f kg\n", soma2 / faixa2);
    else
        printf("Nenhuma pessoa na faixa de 11 a 20 anos.\n");

    if (faixa3 > 0)
        printf("Media dos pesos (21 a 30 anos): %.2f kg\n", soma3 / faixa3);
    else
        printf("Nenhuma pessoa na faixa de 21 a 30 anos.\n");

    if (faixa4 > 0)
        printf("Media dos pesos (maiores de 30 anos): %.2f kg\n", soma4 / faixa4);
    else
        printf("Nenhuma pessoa com mais de 30 anos.\n");

    return 0;
}