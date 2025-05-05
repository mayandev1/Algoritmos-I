#include <stdio.h>
#include <stdlib.h>

int main(){
    int a11, a12, a13, a21, a22, a23, a31, a32, a33;

    printf("Digite os valores do quadrado 3x3:\n");
    scanf("%d %d %d %d %d %d %d %d %d", &a11, &a12, &a13, &a21, &a22, &a23, &a31, &a32, &a33);

    int somaLinha1 = a11 + a12 + a13;
    int somaLinha2 = a21 + a22 + a23;
    int somaLinha3 = a31 + a32 + a33;

    int somaColuna1 = a11 + a21 + a31;
    int somaColuna2 = a12 + a22 + a32;
    int somaColuna3 = a13 + a23 + a33;

    int somaDiagonal1 = a11 + a22 + a33;
    int somaDiagonal2 = a13 + a22 + a31;

    if (somaLinha1 == somaLinha2 &&
        somaLinha2 == somaLinha3 &&
        somaLinha3 == somaColuna1 && 
        somaColuna1 == somaColuna2 &&
        somaColuna2 == somaColuna3 &&
        somaColuna3 == somaDiagonal1 && 
        somaDiagonal1 == somaDiagonal2
    ){
        printf("E UM QUADRADO MAGICO PERFEITO!\n");
        printf("| %d %d %d |\n", a11, a12, a13);
        printf("| %d %d %d |\n", a21, a22, a23);
        printf("| %d %d %d |\n", a31, a32, a33);    
    } else {
        printf("NAO E UM QUADRADO MAGICO PERFEITO!\n");
    }
    
    return 0;
}