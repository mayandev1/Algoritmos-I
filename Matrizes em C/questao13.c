#include <stdio.h>
#include <stdlib.h>

void mostrarTabuleiro(char tabuleiro[3][3]){
    printf("\n");
    for (int i = 0; i < 3; i++){
        printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if (i < 2){
            printf("---|---|---\n");
        }
    }
}

void jogar(char tabuleiro[3][3], char jogador){
    int linha, coluna;
    do {
       printf("Jogador %c, informe a linha e coluna (0 e 2):\n", jogador);
       scanf("%d %d", &linha, &coluna); 
    } while (tabuleiro[linha][coluna] != ' ');
    
    tabuleiro[linha][coluna] = jogador;
}

int venceu(char tabuleiro[3][3], char jogador){
    for (int i = 0; i < 3; i++){
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador){
            return  1;
        }
        
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador){
            return  1;
        }
    }
    
    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador){
        return 1;
    }

    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador){
        return 1;
    }
    
    return 0;
}

int deuVea(char tabuleiro[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (tabuleiro[i][j] == ' '){
                return 0;
            }
            
        }
    }

    return 1;
}

int main(){

    char tabuleiro[3][3]; 
    char jogador = 'X';
    int acabou = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            tabuleiro[i][j] = ' ';
        }
    }

    while (!acabou){
        mostrarTabuleiro(tabuleiro);
        jogar(tabuleiro, jogador);

        if (venceu(tabuleiro, jogador)){
            mostrarTabuleiro(tabuleiro);
            printf("O jogador %c venceu!\n", jogador);
            acabou = 1;
        } else if (deuVea(tabuleiro)){
            mostrarTabuleiro(tabuleiro);
            printf("Deu vea!\n");
            acabou = 1;
        } else {
            if (jogador == 'X'){
                jogador = 'O';
            } else {
                jogador = 'O';
            }
        }
    }
}