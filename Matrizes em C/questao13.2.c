#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char tabuleiro[3][3]; 
    char jogador = 'X';
    int venceu = 0, jogadas = 0, linha, coluna;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            tabuleiro[i][j] = ' ';
        }
    }
    
    while (1){
        printf("\n");
        for (int i = 0; i < 3; i++){
            printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
            if (i < 2){
                printf("---|---|---\n");
            }
        }
        
        do {
            printf("Jogador %c, informe a linha e coluna (0 e 2):\n", jogador);
           scanf("%d %d", &linha, &coluna); 
        } while (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' ');
        
        tabuleiro[linha][coluna] = jogador;
        jogadas++;
    
        for (int i = 0; i < 3; i++){
            if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) || 
                (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)){
                venceu = 1;
            }
            
        }
        
        if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
            (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)){
            venceu = 1;
        }
        
        if (venceu){
            printf("\n");
            for (int i = 0; i < 3; i++){
                printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
                if (i < 2){
                    printf("---|---|---\n");
                }
            }
            printf("O jogador '%c' venceu!\n", jogador);
            break;
        }
        
        if (jogadas == 9){
            printf("\nDeu vea!\n");
            break;
        }
        
        if (jogador == 'X'){
            jogador = 'O';
        } else {
            jogador = 'X';
        }
    }
        
    return 0;
}