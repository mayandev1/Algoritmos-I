#include <stdio.h>
#include <stdlib.h>

int main(){

    float salarioBruto, salario, desconto;

    printf("INSS\n");

    for (int i = 0; i < 20; i++){
        printf("Digite o seu salario bruto:\n");
        scanf("%f", &salarioBruto);

        if (salarioBruto <= 600.00){
            printf("ESTA ISENTO!\n");
            printf("SEU SALARIO E DE: R$ %.2f\n", salarioBruto);
        } else if (salarioBruto > 600.00 && salarioBruto <= 1200.00){
            desconto = salarioBruto * 0.20;
            salario = salarioBruto - desconto;
            printf("SEU SALARIO E DE: R$ %.2f\n", salario);
        } else if (salarioBruto > 1200.00 && salarioBruto <= 2000.00){
            desconto = salarioBruto * 0.25;
            salario = salarioBruto - desconto;
            printf("SEU SALARIO E DE: R$ %.2f\n", salario);
        } else {
            desconto = salarioBruto * 0.30;
            salario = salarioBruto - desconto;
            printf("SEU SALARIO E DE: R$ %.2f\n", salario);
        }
    }
    
    return 0;
}