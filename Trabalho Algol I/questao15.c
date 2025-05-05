#include <stdio.h>
#include <stdlib.h>

int main(){

    char opcao;   
    int num1, num2, maior, menor;
    float media;

    printf("--------------------------------------------------\n");
    printf("MENU\n");
    printf("--------------------------------------------------\n");
    printf("A - MAIOR NUMERO \n");
    printf("B - MENOR NUMERO\n");
    printf("C - MEDIA ARITMETICA\n");
    printf("D - FINALIZAR\n"); 
    printf("--------------------------------------------------\n");
    scanf(" %c", &opcao);

    switch (opcao){
        case 'A':
        case 'a':
            printf("DIGITE DOIS NUMEROS INTEIROS:\n");
            scanf("%d %d", &num1, &num2);

            if(num1 > num2){
                maior = num1;
            } else {
                maior = num2;
            }

            printf("O MAIOR NUMERO E: %d\n", maior);
            break;

        case 'B':
        case 'b':
            printf("DIGITE DOIS NUMEROS INTEIROS:\n");
            scanf("%d %d", &num1, &num2);

            if(num1 < num2){
                menor = num1;
            } else {
                menor = num2;
            }

            printf("O MENOR NUMERO E: %d\n", menor);
            break;

        case 'C':
        case 'c':
            printf("DIGITE DOIS NUMEROS INTEIROS:\n");
            scanf("%d %d", &num1, &num2);

            media = (num1 + num2) / 2;
            printf("A MEDIA ARITMETICA E: %.2f\n", media);
            break;

        case 'D':
        case 'd':
            printf("PROGRAMA FINALIZADO.\n");
            break;

        default:
            printf("OPÇÃO INVALIDA.\n");
            break;
    }

    return 0;
}