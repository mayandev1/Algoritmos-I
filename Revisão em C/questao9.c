#include <stdio.h>
#include <stdlib.h>

int main(){

    char nomes[50];
    int countA, countE;

    for (int i = 0; i < 3; i++){
        countA = 0;
        countE = 0;
        
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

        printf("Nesse nome contem %d (A) e %d (E)!\n", countA, countE);
    }
    
    return 0;
}