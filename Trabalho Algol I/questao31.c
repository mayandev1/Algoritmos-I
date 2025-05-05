#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, idade, opiniao;
    int qtd_regular = 0, qtd_bom = 0, qtd_excelente = 0;
    float soma_regular = 0, soma_bom = 0, soma_excelente = 0;
    float media_regular = 0, media_bom = 0, media_excelente = 0;
    float porc_regular = 0, porc_bom = 0, porc_excelente = 0;

    printf("Digite o numero de espectadores:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Digite a idade do espectador %d:\n", i + 1);
        scanf("%d", &idade);

        printf("Digite a opiniao (1 = regular, 2 = bom, 3 = excelente):\n");
        scanf("%d", &opiniao);

        if (opiniao == 1){
            qtd_regular++;
            soma_regular += idade;
        } else if (opiniao == 2){
            qtd_bom++;
            soma_bom += idade;
        } else if (opiniao == 3){
            qtd_excelente++;
            soma_excelente += idade;
        } else {
            printf("Opcao invalida. Ignorada.\n");
        }
    }

    if (qtd_regular > 0)
        media_regular = soma_regular / qtd_regular;
    if (qtd_bom > 0)
        media_bom = soma_bom / qtd_bom;
    if (qtd_excelente > 0)
        media_excelente = soma_excelente / qtd_excelente;

    porc_regular = (qtd_regular * 100.0) / n;
    porc_bom = (qtd_bom * 100.0) / n;
    porc_excelente = (qtd_excelente * 100.0) / n;

    printf("\n--- RESULTADOS ---\n");
    printf("Regular: %d pessoas, media de idade = %.2f, porcentagem = %.2f%%\n", qtd_regular, media_regular, porc_regular);
    printf("Bom: %d pessoas, media de idade = %.2f, porcentagem = %.2f%%\n", qtd_bom, media_bom, porc_bom);
    printf("Excelente: %d pessoas, media de idade = %.2f, porcentagem = %.2f%%\n", qtd_excelente, media_excelente, porc_excelente);

    return 0;
}