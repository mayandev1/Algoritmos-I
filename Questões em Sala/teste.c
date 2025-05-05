#include <stdio.h>
#include <stdlib.h>

int main(){

    char plano;
    float aumento, salarioAtual, novoSalario;
    
    printf("Digite o seu salario atual:\n");
    scanf("%f", &salarioAtual);

    printf("Digite o seu plano de trabalho (A, B ou C):\n");
    scanf(" %c", &plano);

    switch (plano){
    case 'A':
    case 'a':
        aumento = salarioAtual * 0.10;
        novoSalario = salarioAtual + aumento;
        printf("SEU NOVO SALARIO E IGUAL A: R$ %.2f\n", novoSalario);
        break;
    case 'B':
    case 'b':
        aumento = salarioAtual * 0.15;
        novoSalario = salarioAtual + aumento;
        printf("SEU NOVO SALARIO E IGUAL A: R$ %.2f\n", novoSalario);
        break;
    case 'C':
    case 'c':
        aumento = salarioAtual * 0.20;
        novoSalario = salarioAtual + aumento;
        printf("SEU NOVO SALARIO E IGUAL A: R$ %.2f\n", novoSalario);
        break;
    default:
        printf("PLANO DE TRABALHO INEXISTENTE!\n");
        break;
    }

    return 0;
}