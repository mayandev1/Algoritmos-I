#include <stdio.h>
#include <stdlib.h>

int main(){

    char vetor[20];

    for (int i = 0; i < 3; i++){
        printf("Digite um nome (max 20 caracteres):\n");
        scanf(" %s", vetor);
        printf("Nome %d:\n", i + 1);
        printf("%s\n", vetor);
    }
   
    return 0;
}