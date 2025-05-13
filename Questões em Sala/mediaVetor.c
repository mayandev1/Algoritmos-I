<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main(){
    float media, soma = 0; 
    int valores[10];
    
    for (int i = 0; i < 10; i++){
        printf("Digite um valor inteiro:\n");
        scanf("%d", &valores[i]);
    }
    
    for (int i = 0; i < 10; i++){
        soma += valores[i];
    }
    
    media = soma / 10;
    
    printf("A MEDIA DOS 10 VALORES DIGITADOS E IGUAL A: %.2f", media);

    return 0;

=======
#include <stdio.h>
#include <stdlib.h>

int main(){
    float media, soma = 0; 
    int valores[10];
    
    for (int i = 0; i < 10; i++){
        printf("Digite um valor inteiro:\n");
        scanf("%d", &valores[i]);
    }
    
    for (int i = 0; i < 10; i++){
        soma += valores[i];
    }
    
    media = soma / 10;
    
    printf("A MEDIA DOS 10 VALORES DIGITADOS E IGUAL A: %.2f", media);

    return 0;

>>>>>>> 5c808c85740a08caccba0ecbbeadbf8b9cb658ba
}