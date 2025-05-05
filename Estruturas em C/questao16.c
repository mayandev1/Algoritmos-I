#include <stdio.h>
#include <stdlib.h>

int main(){
    int a11, a12, a21, a22;
    int b11, b12, b21, b22;

    printf("Digite os valores da primeira matriz 2x2:\n");
    scanf("%d %d %d %d", &a11, &a12, &a21, &a22);
    printf("Digite os valores da segunda matriz 2x2:\n");
    scanf("%d %d %d %d", &b11, &b12, &b21, &b22);

    int c11, c12, c21, c22;
    
    c11 = (a11 * b11) + (a12 * b21);
    c12 = (a11 * b12) + (a12 * b22);
    c21 = (a21 * b11) + (a22 * b21);
    c22 = (a21 * b12) + (a22 * b22);
    
    printf("MATRIZ MULTIPLICADA 2x2:\n");
    printf("| %d %d |\n", c11, c12);
    printf("| %d %d |\n", c21, c22);
    
    return 0;
}