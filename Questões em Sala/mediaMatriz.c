#include <stdio.h>
#include <stdlib.h>

int main(){
 
    float notas[4][4], medias[4];
    int linha, coluna;

    for (linha = 0; linha < 4; linha++){
        printf("Digite as 4 notas do aluno %d:\n", linha + 1);
        for ( coluna = 0; coluna < 4; coluna++){
            printf("Nota %d:\n", coluna + 1);
            scanf("%f", &notas[linha][coluna]);
        }
    }
    
    for (linha = 0; linha < 4; linha++){
        medias[linha] = 0;

        for ( coluna = 0; coluna < 4; coluna++){
            medias[linha] += notas[linha][coluna];
        }
        
        medias[linha] /= 4;
    }
    
    printf("\n==== RESULTADOS DOS ALUNOS ====\n");

    for ( linha = 0; linha < 4; linha++){
        printf("Aluno: %d\n", linha + 1);
        printf("Notas:\n");
        for ( coluna = 0; coluna < 4; coluna++){
            printf("%.2f ", notas[linha][coluna]);
        }
        
        printf("\nMedia = %.2f\n", medias[linha]);
    }

    return 0;
}