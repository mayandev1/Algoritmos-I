#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor1[10], vetor2[10], repetido = 0;

    printf("Digite os elementos do vetor1:\n");

    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor1[i]);
    }
    
    printf("Digite os elementos do vetor2:\n");
    
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor2[i]);
    }

    printf("OS ELEMENTOS PRESENTES NOS DOIS VETORES:\n");
    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (vetor1[i] == vetor2[j]){
                repetido = 0;
                for (int k = 0; k < i; k++){
                    if (vetor1[i] ==  vetor1[k]){
                        repetido = 1;
                        break;
                    }
                }
                
                if (!repetido){
                    printf("%d ", vetor1[i]);
                }
                
                break;
            }
        }
    }
    
    return 0;
} 