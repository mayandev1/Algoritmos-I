#include <stdio.h>
#include <stdlib.h>

int main(){

    char nomes[50];
    int countA = 0, countE = 0;

    for (int i = 0; i < 3; i++){
        printf("Informe seu nome:\n");
        scanf(" %s", nomes);

        for (int j = 0; nomes[j] != '\0'; j++){
            if (nomes[j] == 'A' || nomes[j] == 'a'){
                countA++;
            }
            
            if (nomes[j] == 'E' || nomes[j] == 'e'){
                countE++;
            }
        }

    }
    
    printf("Nesses nomes contem %d (A) e %d (E)!\n", countA, countE);
    return 0;
}
